# Leetcode

<details>
<summary>2022/07/16</summary>

### 26.Remove Duplicates from Sorted Array </p>
學習 **vector資料容器** 與 **auto自動變數** 用法</p>
#### vector:線性、長度可變的資料容器</p>
支援隨機存取</p>
集合尾端增刪元素很快 : O(1)</p>
集合中間增刪元素比較費時 : O(n)</p>
以模板(泛型)方式實現，可以儲存任意類型的變數，包括使用者自定義的資料型態。</p>


標頭檔：
```
#include <vector>
```  
建立vector:
```
vector<int> number;
vector<int> number(10); : 設置起始長度
vector<int> number = {10, 20, 30};
```

函式:
```
vector::size():得知元素大小
vector::empty():得知是否為空
vector::front():取得第一個元素
vector::back():取得最後一個元素
vector::begin():指向容器第一個元素的迭代器
vector::end():指向容器最後一個元素的迭代器
vector::swap(vector); :將一個向量的內容與另一個向量交換。
新增:
    vector::push_back():新增元素至尾端
    vector::insert(position,val):指定位置的元素之前插入一個或多個新元素 

清除:
    vector::pop_back():刪除最尾端的元素
    vector::clear():清空所有元素
    vector::erase(位置):清空位置的元素
    vector::erase(startingposition, endingposition):清除範圍內的元素
```
#### auto:編譯器自動判斷其變數的類型</p>
變數:
```
auto x = 1; :int
auto y = sin(1.3); :double
'''
以範圍為基礎的 for 迴圈:
'''
vector<int> nums = {0,0,1,1,1,2,2,3,3,4}
for(auto n : nums) {
        cout << n << endl;
    }
```
### 122. Best Time to Buy and Sell Stock II</p>
### 1929. Concatenation of Array</p>
學習 **vector::insert** 用法 </p>
```
vector::insert(position,const value_type& val); :指定位置插入，一個或多個新元素
vector::insert (position, n, val); :指定位置插入，n次一個或多個新元素
vector::insert(position, iterator1, iterator2):指定位置插入，新元素的起始位置(iterator1)與結束位置(iterator2)
vector::insert (position, value_type&& val);
vector::insert (position, initializer_list<value_type> il);
```
</details>





<details>
<summary>2022/07/17</summary>

### 189. Rotate Array
```
std::reverse(v.begin(), v.end()); :反轉vector(1 2 3 4 5 -> 5 4 3 2 1)
```
### 1.Two Sum
學習 **std::unordered_map** 用法 </p>
unordered_map 裡面的存放資料是無序的</p>

unordered_map 初始化:

```
std::unordered_map<std::string, int> umap = {
    {"Tom", 1},
    {"Ann", 4},
    {"Jack", 2}
};
```
函式:
```
std::unordered_map::empty(); :判斷容器是否為空
std::unordered_map::size(); :判斷容器大小
std::unordered_map::find(key); : 尋找key 的迭代器
std::unordered_map::begin():指向容器第一個元素的迭代器
std::unordered_map::end():指向容器最後一個元素的迭代器
新增:
    umap[key] = value; :如果 key 值已經存在的話，會將新資料覆蓋舊資料
    umap.insert(); : key 值存在的話會回傳失敗的結果

移除:
    std::unordered_map::erase(umap.begin()); : 移除第一個元素
    std::unordered_map::clear(); : 清空容器
```
### 66. Plus One
</details>

<details>
<summary>2022/07/18</summary>

### 283. Move Zeroes

</details>

<details>
<summary>2022/07/19</summary>

### 136. Single Number
### 118. Pascal's Triangle
二維vector宣告:</p>
```
vector<vector<int>> vec(5); 5 x 1  
vector<vector<int>> vec(5, vector<int>(3, 1)); : 5 x 3 全為1

vector<vector<int>> matrix {
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3}
    };
```

</details>

<details>
<summary>2022/07/20</summary>

### 350. Intersection of Two Arrays II
### 217. Contains Duplicate
### 36. Valid Sudoku
```
char用單引號(')
string用雙引號(")
```
### 48. Rotate Image

</details>


<details>
<summary>2022/07/21</summary>

### 792. Number of Matching Subsequences
binary_search:
```
    bool binary_search (Iterator_begin , Iterator_end, val); : 找val是否存在
    ForwardIterator  upper_bound (Iterator_begin , Iterator_end, val);   : 找比val大的位置
    ForwardIterator  lower_bound (Iterator_begin , Iterator_end, val);   : 找比val大於等於的位置
```
```
肥大的東西盡量用Reference或point傳進副函式
如792Number_of_Matching_Subsequences.cpp中
36: bool search(unordered_map<char, vector<int>> umap, string word)會將umap和word全部複製一次
應改為bool search(unordered_map<char, vector<int>> &umap, string &word)
```
</details>