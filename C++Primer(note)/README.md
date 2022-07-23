# C++Primer(note)

<details open>
<summary>CH1 Getting Started</summary></p>

# A Simple C++ Program</p>
1.C++ program cotains one or more functions, one of whichmustbe named **main**. </p>
2.Function definition has four element: **return type**, **function name**, **parameter list** and **function body**.</p>
3.The finction body, is a **bliock** of **statements** starting with an open **curly brace** and ending with a close curly.</p>
```
return type
↑        ↱parameter list
int main(){                  ↴           
     ↑ 
function name             finction body
    ...
    return 0;
}                            _↑
```
# Input/Output</p>
```
#include <iostream>
```
<br></p>
we want to use name "cin" from the namespace std</p>
```
using  std::cin; 
```

we want to use name "cout and endl" from the namespace std</p>
```
using std::cout;using std::endl; 
```

Namespaces to avoid inadvertent collisions between the names we define and uses of those same names inside a library.</p>
<br></p>
input: cin </p>
```
    cin >> input1 >> input2;
```
output: cout, cerr, clog</p>
```
    cout << "output somthing: << output1 << endl;
```
<br></p>

</details>