#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(int val : nums) {
            int count = 0;
            for(int el : nums) {
                if(val == el) {
                    count++;
                }
            }
            if(count > n / 2) {
                return val;
            }
        }
        return 0;
    }
};


int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    
    Solution sol;
    int result = sol.majorityElement(nums);
    
    cout << "Majority Element is: " << result << endl;
    
    return 0;
}