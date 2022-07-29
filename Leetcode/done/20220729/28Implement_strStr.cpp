#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;


class Solution {
public:
    int strStr(string haystack, string needle){
        if(needle.empty()) 
            return 0;
        else{
            for(int i = 0; i < haystack.length(); i++){
                int n_i = 0;
                if(haystack[i] == needle[n_i]){
                    if(i+needle.length() > haystack.length())
                        break;

                    while(haystack[i+n_i] == needle[n_i]){
                        n_i++;
                        if(i+n_i >= haystack.length())
                            break;
                    }
                    if(n_i == needle.length()){
                        return i;
                        break;
                    }
                }
            }
        }
        return -1;
    }
};

int main(){
    string haystack = "a";
    string needle = "a";

    Solution ans;
  
    cout << ans.strStr(haystack,needle) << endl;

    return 0;
}
