#include <bits/stdc++.h>
using namespace std;

class NumberContainers {
public:
    unordered_map<int, int> indexToNumber; // Maps index -> number
    unordered_map<int, set<int>> numberToIndices; // Maps number -> sorted set of indices

    NumberContainers() {}

    void change(int index, int number) {
        // If the index already has a number, remove the old mapping
        if (indexToNumber.count(index)) {
            int oldNumber = indexToNumber[index];
            numberToIndices[oldNumber].erase(index);
            if (numberToIndices[oldNumber].empty()) {
                numberToIndices.erase(oldNumber);
            }
        }
        // Assign the new number to the index
        indexToNumber[index] = number;
        numberToIndices[number].insert(index);
    }

    int find(int number) {
        // Return the smallest index for the given number
        if (numberToIndices.count(number) && !numberToIndices[number].empty()) {
            return *numberToIndices[number].begin();
        }
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */
