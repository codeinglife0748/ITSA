# ITSA基礎實作
# 題目6. 季節判定

### 問題描述：  
試撰寫一程式，可輸入月份，然後判斷其所屬的季節（ 3~5 月為春季，6~8 月為夏季， 9~11 月為秋季， 12~2 月為冬季）。  

輸入說明：  
輸入月份。

輸出說明：  
輸出該月份的季節， 3'~'5 月為春季(Spring)， 6'~'8 月為夏季(Summer)， 9~11 月為秋季(Autumn)， 12~2 月為冬季(Winter)。 

### 範例：

Sample Input:  
3  
10  
Sample Output:  
Spring  
Autumn  

## 程式碼:
```
#include <iostream>  
#include <iomanip>  
#include <bitset>  
using namespace std;

int main()
{
    int in, out;
    cin >> in;
    if (in == 3)
    {
        cout << "Spring" << endl;
    }
    if (in == 4)
    {
        cout << "Spring" << endl;
    }
    if (in == 5)
    {
        cout << "Spring" << endl;
    }
    if (in == 6)
    {
        cout << "Summer" << endl;
    }
    if (in == 7)
    {
        cout << "Summer" << endl;
    }

    if (in == 8)
    {
        cout << "Summer" << endl;
    }
    if (in == 9)
    {
        cout << "Autumn" << endl;
    }
    if (in == 10)
    {
        cout << "Autumn" << endl;
    }
    if (in == 11)
    {
        cout << "Winter" << endl;
    }
    if (in == 12)
    {
        cout << "Winter" << endl;
    }
    if (in == 1)
    {
        cout << "Winter" << endl;
    }
    if (in == 2)
    {
        cout << "Winter" << endl;
    }
}
```
