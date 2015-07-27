#include "FunctionPointer.h"

FunctionPointer::FunctionPointer(){
	int(*ptr)() = 0;

	ptr = foo;

	foo();
	ptr();

	/*cout << "address of foo:"
		<< (int)foo << endl;
	cout << "address of foo:"
		<< (int)ptr << endl;
*/
	lesson1::lesson1();
sortlesson:sortlesson();
}

int FunctionPointer::foo(){

	cout << "function point" << endl;

	return 0;
}

FunctionPointer::lesson1::lesson1(){
	int(*ptr1)(int, int) = 0;
	char(*ptr2)(int, char) = 0;

	ptr1 = foo; // get address of foo(int, int) 
	ptr2 = foo; // get address of foo(int, char) 

	ptr1(1, 2);
	ptr2(3, 'c');
/*
	cout << "address of foo(int, int): "
		<< (int)ptr1 << endl;
	cout << "address of foo(int, char): "
		<< (int)ptr2 << endl;*/
 
}

int FunctionPointer::lesson1::foo(int n1, int n2) {
	cout << "foo(int, int): "
		<< n1 << "\t" << n2
		<< endl;

	return 0;
}

char FunctionPointer::lesson1::foo(int n, char c) {
	cout << "foo(int, char): "
		<< n << "\t" << c
		<< endl;

	return c;
}

FunctionPointer::sortlesson::sortlesson(){
	int number1[] = { 3, 5, 1, 6, 9 };
	sort(number1, 5, larger);
	cout << "大的在前 ";
	for (int i = 0; i < 5; i++) {
		cout << number1[i] << " ";
	}
	cout << endl;

	int number2[] = { 3, 5, 1, 6, 9 };
	sort(number2, 5, smaller);
	cout << "小的在前 ";
	for (int i = 0; i < 5; i++) {
		cout << number2[i] << " ";
	}
	cout << endl;
}

void FunctionPointer::sortlesson::swap(int &a, int &b) {
	int t = a;
	a = b;
	b = t;
}

bool FunctionPointer::sortlesson::larger(int a, int b) {
	return a > b;
}

bool FunctionPointer::sortlesson::smaller(int a, int b) {
	return a < b;
}

void FunctionPointer::sortlesson::sort(int* arr, int length, CMP compare) {
	int flag = 1;

	for (int i = 0; i < length - 1 && flag == 1; i++) {
		flag = 0;
		for (int j = 0; j < length - i - 1; j++) {
			if (compare(arr[j + 1], arr[j])) {
				swap(arr[j + 1], arr[j]);
				flag = 1;
			}
		}
	}
}