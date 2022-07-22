#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> umap;
        for (int i = 0; i < nums.size(); i++){
            if (umap[nums[i]] == 0 )
                umap[nums[i]]++;
            else
                return true;
        }
        return false;
    }
};


int main(){
    vector<int> nums = {1,2,3}; // Input array


    Solution ans;
    // ans.generate(nums);
    // for(auto i:ans.intersect(nums1,nums2)){
    //         cout << i << " ";
// }
        
    cout << ans.containsDuplicate(nums) << endl;

    return 0;
}
