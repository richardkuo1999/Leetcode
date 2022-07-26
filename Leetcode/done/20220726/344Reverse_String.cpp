#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
        for(auto i:s){
            cout << i;
        }
    }
};

int main(){
    vector<char> words = {'h','e','l','l','o'}; // Input array
    // string s = ;
    
    Solution ans;
    ans.reverseString(words);

    return 0;
}
