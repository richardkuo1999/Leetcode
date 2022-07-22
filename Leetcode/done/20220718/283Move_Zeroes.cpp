#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int max = nums.size();
        int slow = 0;
        for (int i = 0; i < max; i++){
            if(nums[i]!= 0){
                nums[slow] = nums[i];
                slow++;
            }
        }
        for(;slow < max;slow++){
            nums[slow] = 0;
        }
    }
};

int main(){
    vector<int> nums = {4,4,0,0,7,0,0,3}; // Input array

    Solution ans;
    ans.moveZeroes(nums);
    // cout << ans.plusOne(nums) << endl;

    return 0;
}
