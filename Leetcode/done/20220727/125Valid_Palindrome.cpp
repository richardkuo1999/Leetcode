#include <iostream>
#include <string>
#include <ctype.h>
#include <algorithm>

using namespace std;



class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if ( s.begin(), s.end(), static_cast<int(*)(int)>(&ispunct) ), s.end()); 
        s.erase(remove_if ( s.begin(), s.end(), static_cast<int(*)(int)>(&isspace) ),s.end()); 
        int max = (s.length()%2==0)?(s.length())/2:(s.length())/2+1;
        for (int i = 0; i <max; i++) {
            int back = s.length()-i-1;
            if (s[i] < 91 && s[i] > 64)
                s[i] = char(s[i]+32);
            if (s[back] < 91 && s[back] > 64)
                s[back] = s[back]+32;
            if (s[i] != s[back])
                return false;
        }

        return true;
    }
};

int main(){
    string words = "race a car";
    
    Solution ans;
    cout << ans.isPalindrome(words);

    return 0;
}
