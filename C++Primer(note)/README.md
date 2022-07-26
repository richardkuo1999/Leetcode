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
<br></p>

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
<br></p>
Comment starts with a **//** and end with a **newline**. </p>
```
//
```
Comment starts with **/\*** and end with a **\\***. </p>
```
/* ............*/
```
<br></p>

# 1.4  Flow Control
while: **repeatedly executes** a section of code as given condition is **true**
```
while(condition){
    statement(code)
}

int value;
while(cin >> value) //keep reading numbers until no number to read.
```
<br></p>
for: 
```
for(int i = 0 ; i<10; i++)
        ||
int i = 0;
while(10 > i)
    i++;
```
<br></p>
if: Supports conditinal execution.</p>
```
if(condition){
    statement(code)
```
```
int value;
if(cin >> value)
```
<br></p>
Most common kinds of errors a compiler will detect.</p>
Syntax error: </p>
```
Grammatical error.
```
Type error:</p>
```
Passing a error data type(string) to another data type data(int).
```
Declaration errors: 
```
1.Failure to declare.
2.Forgetting to use std:: for a name from the library.
3.Misspelling the name of an identifier.
```
<br></p>

# 1.5  Introducing Classes
class:
```
A class defines a type along with a collection of operations that are related to that type.
```
Member Function:
```
A function that is fefined as part of a class.
```
example:
```
book1.isbn
    dot operator("."): the isbn menber of the object named book1.
    
book1.getisbn()
    call operator("()"): Call the getisbn function that is a member of the book1.
```
</details>












<details open>
<summary>Other</summary></p>

Headers from the standard library include:</p>
```
angle brackets(< >)
```
Not part of the library:</p>
```
doublee quotes(" ")
```

</details>
