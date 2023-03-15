# ITSA基礎實作
# 題目3. 判斷座標是否在圓形的範圍內

### 問題描述：  
有一圓形，直徑為200，且中心座標為(0,0)。請寫一支程式可以輸入「點」的座標，並判斷「點」是否在圓形的範圍內。如果「點」的位置剛好在邊界的話也算是在圓形範圍內(例：x=100，y=0)。

![image](https://e-tutor.itsa.org.tw/e-Tutor/file.php/1395/picture_circle.jpg)

輸入說明：  
輸入一整數座標，依序分別X與Y。

輸出說明：  
輸出此座標位置在圓內或圓外訊息。

### 範例：  

輸入範例:  
50 50  
200 200  
輸出範例:  
inside  
outside  

## 程式碼:
```
#include <iostream>  
#include <math.h>  

using namespace std;
int main()
{
    double x, y;
    cin >> x >> y;
    double d = x * x + y * y;
    if (pow(d, 0.5) <= 100)
    {
        cout << "inside" << endl;
    }
    else {
        cout << "outside" << endl;
    }
    return 0;
}
```
