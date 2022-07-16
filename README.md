# Leetcode

<details open>
<summary>2022/07/16</summary>

### 26.Remove Duplicates from Sorted Array </p>
學習 **vector資料容器** 與 **auto自動變數用法** </p>
#### vector:線性、長度可變的資料容器</p>
```
標頭檔：
    #include <vector>
    
建立vector:
    vector<int> number;
    vector<int> number(10); : 設置起始長度
    vector<int> number = {10, 20, 30};
    
函式:
        number.size():得知元素大小
        number.empty():得知是否為空
        number.front():取得第一個元素
        number.back():取得最後一個元素
        number.begin():指向容器第一個元素的迭代器
        number.end():指向容器最後一個元素的迭代器
        
    新增:
        number.push_back():新增元素至尾端
        number.insert(位置,插入的值):指定位置的元素之前插入一個或多個新元素
        number.insert(position, iterator1, iterator2):指定要在vector中插入插入元素的起始位置(iterator1)與結束位置(iterator2)
        
    清除:
        number.pop_back():刪除最尾端的元素
        number.clear():清空所有元素
        number.erase(位置):清空位置的元素
        number.erase(startingposition, endingposition):清除範圍內的元素
```
#### auto:編譯器自動判斷其變數的類型</p>
```
變數:
    auto x = 1; :int
    auto y = sin(1.3); :double
    
以範圍為基礎的 for 迴圈:
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4}
    for(auto n : nums) {
            cout << n << endl;
        }
```
### 122. Best Time to Buy and Sell Stock II</p>
### 1929. Concatenation of Array</p>
</details>