
#include <iostream>
#include "HelloWorld.h"
#include "Advanced.h"
#include "Recursion.h"
#include "ReturnBy.h"
#include "FunctionPointer.h"
using namespace std;


int main() {
    
    int chose = int();
    cout << "\n";
    cout << "1.入門基礎練習\n";
    cout << "2.進階型態\n";
    cout << "3.遞迴\n";
    cout << "4.return 的傳值、傳參考 ,  不定長度引數\n";
    cout << "5.函式指標\n";
    cout << "請選擇: ";
    cin >> chose;
    cout << "您選擇：" << chose << "\n";
    
    switch (chose) {
        case 1:
            helloWorld();
            break;
        case 2:
            advanced();
            break;
        case 3:
            Recursion();
            break;
        case 4:
            ReturnBy();
            break;
        case 5:
            FunctionPointer();
            break;
        default:
            break;
    }
    
    
    
    system("Pause");
    return 0;
}

