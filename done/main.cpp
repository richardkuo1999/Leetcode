//
//  main.cpp
//  leetcode
//
//  Created by Richard Kuo on 2022/2/24.
//

#include <iostream>
#include <string>
#include<vector>

using namespace std;
using std::vector;

 
class Solution {
public:
    int strStr(string txt, string pat) {
        int n = txt.length(), m = pat.length(), s=0;
        int badchar[256];
        memset(badchar, -1, sizeof(badchar));
        for(int i=0; i<m; i++)
            badchar[(int) pat[i]] = i;

        while(s <= (n-m))
        {
            int j = m-1;
            while(j >= 0 && pat[j] == txt[s + j])
                j--;
            if(j < 0)
            {
                return s;
            }
            else{
                s += max(1, j-badchar[txt[s+j]]);
            }
        }
        return -1;
    }
};



int main(int argc, const char * argv[]) {
    vector<int> s = {};
    string haystack = "abbaa", needle = "aa";
    Solution ans;
    cout<<ans.strStr(haystack,needle);
    return 0;
}
