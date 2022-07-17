#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size()-1; i >= 0; i--){
            // cout << i << endl;
            bool add_1 = true;
            if(add_1){
                if(digits[i] == 9){
                    digits[i] = 0;
                    add_1 =true;
                    if(i == 0){
                        digits[0] = 1;
                        digits.push_back(0);
                        break;
                    }
                }
                else{
                    digits[i] += 1;
                    break;
                }
            }
        }
        return digits;
    }
};

int main(){
    vector<int> nums = {9,9,9,9}; // Input array

    Solution ans;
    for(auto i:ans.plusOne(nums))
        cout << i << " ";
    // cout << ans.plusOne(nums) << endl;

    return 0;
}
