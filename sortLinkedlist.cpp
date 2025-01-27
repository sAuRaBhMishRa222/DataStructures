/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* getMid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    ListNode* merge(ListNode* first,ListNode* second){
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        while(first!=nullptr && second!=nullptr){
            if(first->val>second->val){
                temp->next=second;
                second=second->next;
            }
            else{
                temp->next=first;
                first=first->next;
            }
            temp=temp->next;
        }
        if(first!=nullptr) temp->next=first;
        if(second!=nullptr) temp->next=second;

        return dummy->next;
    }

    ListNode* mergeSort(ListNode* head){
        if (head == nullptr || head->next == nullptr) return head;

        ListNode* mid = getMid(head);
        ListNode* secondHalf = mid->next;
        mid->next = nullptr;

        ListNode* left = mergeSort(head);
        ListNode* right = mergeSort(secondHalf);

        return merge(left, right);
    }
    ListNode* sortList(ListNode* head) {
        //Brute Forcec approach case28/30 passed
        // ListNode* temp=head;
        // ListNode* slow=head;
        // ListNode* fast=head;
        // while(slow!=nullptr && slow->next!=nullptr){
        //     while(fast!=nullptr){
        //         if(slow->val>fast->val){
        //             int temp = slow->val;
        //             slow->val = fast->val;
        //             fast->val = temp;
        //         }
        //         else{
        //             fast=fast->next;
        //         }
        //     }
        //     fast=slow->next;
        //     slow=slow->next;
            
        // }
        return mergeSort(head);
    }
};