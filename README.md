# ITSA基礎實作

## 題目9. 計算正整數被3整除之數值之總和
問題描述：  
試寫一個程式，輸入一正整數N，可計算出1到N之間可被3整除的數值之總和。

### 輸入說明：  
輸入一正整數。

### 輸出說明：  
輸出總和。

## 範例：

### 輸入範例:  
100  
150
### 輸出範例:  
1683  
3825

## 程式碼:
```
#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }
    printf("%d\n", sum);
}
```
