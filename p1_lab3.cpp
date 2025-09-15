#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std; 

int numberOfDuplicates(const vector<int>& nums) {
    unordered_map<int, int> count;

    for (int num : nums) {
        count[nums]++; 
    }
    int duplicateCount = 0;
    for (const auto& pair : count) {
        if (pair.second > 1) {
        duplicateCount++;
    }
}
    return duplicateCount; 
}

void printVector(const vector<int>& nums) {
    cout << "{ ";
    for(size_t i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if(i < nums.size - 1;) {
            cout << ", ";
        }
    }
    cout << "} "
}