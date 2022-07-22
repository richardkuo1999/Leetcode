#include <iostream>
#include <string>
#include <vector>

using namespace std;



class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        nums.insert( nums.end(), nums.begin(), nums.end() );
        return nums;
    }
};


int main(){
    vector<int> nums = {1,2,1}; // Input array
    Solution ans;

    cout << ans.getConcatenation(nums)[4]<< endl;
    

    return 0;
}