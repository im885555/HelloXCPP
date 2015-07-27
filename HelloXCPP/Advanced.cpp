
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include "Advanced.h"
using namespace std;



advanced::advanced(){
    exec();
}

int advanced::exec(){
    
    oneDimArray();
    twoDimArray();
    arrayIdiom();
    stlIdiom();
    cStyle();
    stringPrac();
    pointer();
    pointerArithmetic();
    pointerAndArray();
    newDelete();
    
    doublePointer();
    pointerAndString();
    
    reference();
    
    return 0;
}



int advanced::oneDimArray(){
    cout << "\n一維陣列!\n";
    
    const int length = 10;
    int iarr[length] = { 0 };
    
    for (int i = 0; i < length; i++)
        cout << iarr[i] << " ";
    cout << endl;
    
    for (int i = 0; i < length; i++)
        iarr[i] = i;
    
    for (int i = 0; i < length; i++)
        cout << iarr[i] << " ";
    cout << endl;
    
    return 0;
}

int advanced::twoDimArray(){
    cout << "\n二維陣列!\n";
    
    
    const int row = 5;
    const int column = 10;
    int iarr[row][column];
    
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            iarr[i][j] = (i + 1) * (j + 1);
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++)
            cout << iarr[i][j] << "\t";
        cout << endl;
    }
    
    return 0;
}

int advanced::arrayIdiom(){
    cout << "\n陣列型式（Array idiom） vector!\n";
    
    
    vector<int> ivector(10);
    
    for (int i = 0; i < ivector.size(); i++) {
        ivector[i] = i;
    }
    
    for (int i = 0; i < ivector.size(); i++) {
        cout << ivector[i] << " ";
    }
    cout << endl;
    
    arrayIdiom2();
    return 0;
}


int advanced::arrayIdiom2(){
    
    int iarr[] = { 1, 2, 3, 4, 5 };
    
    vector<int> ivector(iarr, iarr + 5);
    
    for (int i = 0; i < ivector.size(); i++) {
        cout << ivector[i] << " ";
    }
    cout << endl;
    
    arrayIdiom3();
    
    return 0;
}

int advanced::arrayIdiom3(){
    
    int iarr[] = { 1, 2, 3, 4, 5 };
    
    vector<int> ivector(iarr + 1, iarr + 4);
    
    for (int i = 0; i < ivector.size(); i++) {
        cout << ivector[i] << " ";
    }
    cout << endl;
    
    arrayIdiom4();
    
    return 0;
}

int advanced::arrayIdiom4(){
    
    vector<int> ivector1(5, 1);
    vector<int> ivector2; // 定義一個空的vector
    
    ivector2 = ivector1;
    
    for (int i = 0; i < ivector2.size(); i++) {
        cout << ivector2[i] << " ";
    }
    cout << endl;
    
    ivector2[0] = 2;
    
    for (int i = 0; i < ivector2.size(); i++) {
        cout << ivector2[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < ivector1.size(); i++) {
        cout << ivector1[i] << " ";
    }
    cout << endl;
    
    return 0;
}

int advanced::stlIdiom(){
    cout << "\nSTL 型式（STL idiom） vector!\n";
    
    vector<int> ivector;
    
    for (int i = 0; i < 10; i++) {
        ivector.push_back(i);
    }
    
    for (vector<int>::iterator it = ivector.begin();
         it != ivector.end();
         it++) {
        
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "capacity: " << ivector.capacity() << endl
    << "size: " << ivector.size() << endl;
    
    stlIdiom2();
    return 0;
}

int advanced::stlIdiom2(){
    int iarr[] = { 30, 12, 55, 31, 98, 11, 41, 80, 66, 21 };
    vector<int> ivector(iarr, iarr + 10);
    
    // 排序
    sort(ivector.begin(), ivector.end());
    
    for (vector<int>::iterator it = ivector.begin();
         it != ivector.end();
         it++) {
        
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "輸入搜尋值：";
    int search = 31;
    cout << search;
    
    vector<int>::iterator it =
    find(ivector.begin(), ivector.end(), search);
    
    if (it != ivector.end()) {
        cout << "找到搜尋值！" << endl;
    }
    else {
        cout << "找不到搜尋值！" << endl;
    }
    
    // 反轉
    reverse(ivector.begin(), ivector.end());
    
    for (vector<int>::iterator it = ivector.begin();
         it != ivector.end();
         it++) {
        
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}

int advanced::cStyle(){
    cout << "\n字元陣列（C-style 字串）\n";
    
    char str[] = "hello";
    
    for (int i = 0; i < (sizeof(str) / sizeof(str[0])); i++) {
        if (str[i] == '\0')
            cout << " null";
        else
            cout << " " << str[i];
    }
    cout << endl;
    
    
    char str1[80] = { '\0' };
    char str2[] = "caterpillar";
    
    cout << "str1: " << str1 << endl
    << "str2: " << str2 << endl
    << endl;
    
    // 將str2複製給str1
    strcpy(str1, str2);
    cout << "str1: " << str1 << endl
    << "str2: " << str2 << endl
    << endl;
    
    // 將str2接在str1後
    strcat(str1, str2);
    cout << "str1: " << str1 << endl
    << "str2: " << str2 << endl
    << endl;
    
    cout << "str1長度：" << strlen(str1) << endl
    << "str2長度：" << strlen(str2) << endl
    << endl;
    
    cout << "str1與str2比較：" << strcmp(str1, str2) << endl
    << endl;
    
    return 0;
}

int advanced::stringPrac(){
    cout << "\n使用 string 型態\n";
    
    
    string str1;
    string str2("caterpillar");
    string str3(str2);
    
    if (str1.empty()) {
        cout << "str1 為空字串" << endl;
    }
    
    cout << "str1 長度: " << str1.size() << endl;
    cout << "str2 長度: " << str2.size() << endl;
    cout << "str3 長度: " << str3.size() << endl;
    
    if (str1 == str2) {
        cout << "str1 與 str2 內容相同" << endl;
    }
    
    if (str3 == str2) {
        cout << "str3 與 str2 內容相同" << endl;
    }
    
    string name("caterpillar");
    
    for (int i = 0; i < name.size(); i++) {
        cout << name[i] << endl;
    }
    
    stringPrac2();
    
    return 0;
}

int advanced::stringPrac2(){
    string str1;
    string str2("caterpillar");
    string str3(str2);
    
    // assign: 指定字串
    str1 = str1.assign(str2, 0, 5);
    cout << "str1: " << str1 << endl;
    str1 = str1.assign("caterpillar", 5, 6);
    cout << "str1: " << str1 << endl;
    
    str1 = "";
    
    // append: 字串串接
    str1 = str1.append(str2, 0, 5);
    str1 = str1.append(str3, 5, 6);
    cout << "str1: " << str1 << endl;
    
    // find: 尋找字串位置
    cout << "尋找str1中的第一個pill: "
    << str1.find("pill", 0) << endl;
    
    // insert: 插入字串
    cout << "在str1插入字串***: "
    << str1.insert(5, "***") << endl;
    
    cout << "str1長度: " << str1.length() << endl;
    
    return 0;
}

int advanced::pointer(){
    cout << "\n指標與記憶體位址\n";
    
    int var = 10;
    
    cout << "變數var的值：" << var
    << endl;
    cout << "變數var的記憶體位址：" << &var
    << endl;
    
    pointer2();
    
    return 0;
}

int advanced::pointer2(){
    int var = 10;
    int *ptr = &var;
    
    cout << "變數var的位址：" << &var
    << endl;
    cout << "指標ptr指向的位址：" << ptr
    << endl;
    
    pointer3();
    
    return 0;
}

int advanced::pointer3(){
    int var = 10;
    int *ptr = &var;
    
    cout << "指標ptr儲存的值：" << ptr
    << endl;
    cout << "取出ptr指向的記憶體位置之值：" << *ptr
    << endl;
    
    pointer4();
    
    return 0;
}

int advanced::pointer4(){
    int var = 10;
    int *ptr = &var;
    
    cout << "var = " << var
    << endl;
    cout << "*ptr = " << *ptr
    << endl;
    
    *ptr = 20;
    
    cout << "var = " << var
    << endl;
    cout << "*ptr = " << *ptr
    << endl;
    
    pointer5();
    
    return 0;
}

int advanced::pointer5(){
    int var = 10;
    void *vptr = &var;
    
    // 下面這句不可行，void型態指標不可取值
    //cout << *vptr << endl;
    
    // 轉型為int型態指標並指定給iptr
    int *iptr = reinterpret_cast<int*>(vptr);
    cout << *iptr << endl;
    
    pointer6();
    
    return 0;
}

int advanced::pointer6(){
    int var = 10;
    
    cout << "var = " << var << endl;
    
    foo(&var);
    
    cout << "var = " << var << endl;
    
    return 0;
}

void advanced::foo(const int* p) {
    int* v = const_cast<int*> (p);
    *v = 20;
}


int advanced::pointerArithmetic(){
    cout << "\n指標的運算\n";
    
    int *ptr = 0;
    
    cout << "ptr位置：" << ptr
    << endl;
    cout << "ptr+1：" << ptr + 1
    << endl;
    cout << "ptr+2：" << ptr + 2
    << endl;
    
    pointerArithmetic2();
    return 0;
}
int advanced::pointerArithmetic2(){
    
    double *ptr = 0;
    
    cout << "ptr位置：" << ptr
    << endl;
    cout << "ptr+1：" << ptr + 1
    << endl;
    cout << "ptr+2：" << ptr + 2
    << endl;
    
    
    return 0;
}


int advanced::pointerAndArray(){
    cout << "\n指標與陣列\n";
    
    int arr[10] = { 0 };
    cout << "arr :\t\t" << arr
    << endl;
    cout << "&arr[0]: \t" << &arr[0]
    << endl;
    
    
    pointerAndArray2();
    return 0;
}

int advanced::pointerAndArray2(){
    
    const int length = 10;
    int arr[length] = { 0 };
    int *ptr = arr;
    
    for (int i = 0; i < length; i++) {
        cout << "&arr[" << i << "]: " << &arr[i];
        cout << "\tptr+" << i << ": " << ptr + i;
        cout << endl;
    }
    
    
    pointerAndArray3();
    return 0;
}

int advanced::pointerAndArray3(){
    
    const int length = 5;
    int arr[length] = { 10, 20, 30, 40, 50 };
    int *ptr = arr;
    
    // 以指標方式存取資料
    for (int i = 0; i < length; i++) {
        cout << "*(ptr+" << i << "): " << *(ptr + i)
        << endl;
    }
    cout << endl;
    
    // 以陣列方式存取資料
    for (int i = 0; i < length; i++) {
        cout << "ptr[" << i << "]: " << ptr[i]
        << endl;
    }
    cout << endl;
    
    // 以指標方式存取資料
    for (int i = 0; i < length; i++) {
        cout << "*(arr+" << i << "): " << *(arr + i)
        << endl;
    }
    cout << endl;
    
    // 以陣列方式存取資料
    for (int i = 0; i < length; i++) {
        cout << "arr[" << i << "]: " << arr[i]
        << endl;
    }
    cout << endl;
    
    return 0;
}


int advanced::newDelete(){
    cout << "\nnew 運算子與 delete 運算子\n";
    
    int *ptr = new int(100);
    
    cout << "空間位置:" << ptr
    << endl;
    cout << "空間儲存值：" << *ptr
    << endl;
    
    *ptr = 200;
    
    cout << "空間位置:" << ptr
    << endl;
    cout << "空間儲存值：" << *ptr
    << endl;
    
    delete ptr;
    newDelete2();
    return 0;
}

int advanced::newDelete2(){
    
    int size = 5;
    
    int *arr = new int[size];
    
    cout << "指定元素值：" << endl;
    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = " << i <<endl;
        *(arr + i) = i;
    }
    
    cout << "顯示元素值：" << endl;
    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = " << *(arr + i)
        << endl;
    }
    
    delete[] arr;
    
    newDelete3();
    
    return 0;
}

int advanced::newDelete3(){
    
    int m = 4;
    int n = 5;
    
    
    int *ptr = new int[m*n];
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            *(ptr + n*i + j) = i + j;
        }
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << *(ptr + n*i + j) << "\t";
        }
        cout << endl;
    }
    
    delete[] ptr;
    
    return 0;
}

int advanced::doublePointer(){
    cout << "\n雙重指標\n";
    
    int p = 10;
    int *ptr = &p;
    
    cout << "p的值：" << p
    << endl;
    cout << "p的記憶體位置: " << &p
    << endl;
    cout << "*ptr參照的值: " << *ptr
    << endl;
    
    cout << "ptr儲存的位址值: " << ptr
    << endl;
    cout << "ptr的記憶體位置: " << &ptr
    << endl;
    
    
    doublePointer2();
    return 0;
}

int advanced::doublePointer2(){
    
    int p = 10;
    int *ptr1 = &p;
    int **ptr2 = &ptr1;
    
    cout << "p的值：" << p << endl;
    cout << "p的記憶體位置: " << &p << endl;
    
    cout << endl;
    
    cout << "*ptr1 = " << *ptr1 << endl;
    cout << "ptr1 = " << ptr1 << endl;
    cout << "ptr1的記憶體位置: " << &ptr1 << endl;
    
    cout << endl;
    
    cout << "**ptr2 = " << **ptr2 << endl;
    cout << "*ptr2 = " << *ptr2 << endl;
    cout << "ptr2 = " << ptr2 << endl;
    
    cout << endl;
    
    cout << "整理(誰儲存了誰？)：" << endl;
    cout << "&p = " << &p << "\t\t" << "ptr1 = " << ptr1 << endl;
    cout << "&ptr1 = " << &ptr1 << "\t"
    << "ptr2 = " << ptr2
    << endl;
    
    
    return 0;
}


int advanced::pointerAndString(){
    cout << "\n指標與字串\n";
    
    char *str = "hello";
    cout << str << endl;
    
    str = "world";
    cout << str << endl;
    
    pointerAndString2();
    return 0;
}


int advanced::pointerAndString2(){
    
    char *str = "hello";
    void *add = 0;
    
    add = str;
    cout << str << "\t"
    << add << endl;
    
    str = "world";
    add = str;
    cout << str << "\t"
    << add << endl;
    
    pointerAndString3();
    return 0;
}


int advanced::pointerAndString3(){
    
    char *str[] = { "professor", "teacher",
        "student", "etc." };
    
    for (int i = 0; i < 4; i++)
        cout << str[i] << endl;
    
    
    pointerAndString4();
    return 0;
}


int advanced::pointerAndString4(){
    char *str[][2] = { "professor", "Justin",
        "teacher", "Momor",
        "student", "Caterpillar" };
    
    for (int i = 0; i < 3; i++) {
        cout << str[i][0] << ": "
        << str[i][1] << endl;
    }
    
    
    return 0;
}


int advanced::reference(){
    cout << "\n參考（Reference）\n";
    
    int var = 10;
    int &ref = var;
    
    cout << "var: " << var
    << endl;
    cout << "ref: " << ref
    << endl;
    
    ref = 20;
    
    cout << "var: " << var
    << endl;
    cout << "ref: " << ref
    << endl;
    
    return 0;
}

