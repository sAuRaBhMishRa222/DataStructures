//Sexy brute force
// class Solution {
// public:
//     int sumDigit(int n){
//         int sum=0;
//         while(n>0){
//             int digit=n%10;
//             sum+=digit;
//             n/=10;
//         }
//         return sum;
//     }
//     int countSymmetricIntegers(int low, int high) {
//         int count=0;
//         for(int i=low;i<=high;i++){
//             string s=to_string(i);
//             int n=s.size();
//             if(n%2==0){
//                 string s1=s.substr(0,n/2);
//                 string s2=s.substr(n/2,n/2);
//                 int digitSum1=sumDigit(stoi(s1));
//                 int digitSum2=sumDigit(stoi(s2));
//                 if(digitSum1==digitSum2) count++;
//             }
//         }
//         return count;
//     }
// };

//Optimized
class Solution {
    public:
        int countSymmetricIntegers(int low, int high) {
            int count = 0;
            for (int num = low; num <= high; ++num) {
                string s = to_string(num);
                if (s.size() % 2 == 0) {
                    int mid = s.size() / 2;
                    int leftSum = 0, rightSum = 0;
                    for (int i = 0; i < mid; ++i) leftSum += s[i] - '0';
                    for (int i = mid; i < s.size(); ++i) rightSum += s[i] - '0';
                    if (leftSum == rightSum) count++;
                }
            }
            return count;
        }
    };