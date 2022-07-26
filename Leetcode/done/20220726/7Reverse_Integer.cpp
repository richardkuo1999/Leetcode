#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <climits>

using namespace std;

class Solution {
public:
    long long reverse(int x) {
        long long temp = 0;
        while(x != 0){
            temp *= 10;
            temp += x%10;
            x /= 10;
        }
        return (temp > INT_MAX || temp < INT_MIN) ? 0 : temp;
    }
};
int main(){
    int words = 15342; // Input array
    
    Solution ans;
    cout << ans.reverse(words) << endl;

    return 0;
}
