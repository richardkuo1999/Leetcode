# C++Primer(note)

<details open>
<summary>CH1 Getting Started</summary></p>


# 1.1 A Simple C++ Program</p>
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


# 1.2 Input/Output</p>
```
#include <iostream>
```
<br></p>
we want to use name **cin** from the namespace std</p>
```
using  std::cin; 
```

we want to use name **cout and endl** from the namespace std</p>
```
using std::cout;using std::endl; 
```

Namespaces to avoid inadvertent collisions between the names we define and uses of those same names inside a library.</p>
<br></p>
input: **cin** </p>
```
    cin >> input1 >> input2;
```
output: **cout**, **cerr**, **clog**</p>
```
    cout << "output somthing: << output1 << endl;
```
<br></p>

# 1.3 Comments</p>
Comments help the human readers of our programs.</p>
**An incorrect comment is worse than no comment at all.**</p>
```
1.Summarize and algorithm.
2.Ideentify the purpose of a variable.
3.Clearify an otherwise obscure segmemt of code.
```

Comment starts with a **//** and end with a **newline**. </p>
```
//
```
Comment starts with **/\*** and end with a **\\***. </p>
```
/* ............*/
```

</details>