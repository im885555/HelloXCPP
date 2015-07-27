
#include "ReturnBy.h"


ReturnBy::ReturnBy(){
	cout << "\nreturn 的傳值、傳參考：\n" << endl;

	int m = 5;

	cout << "陣列大小: 5";

	int *arr = createArray(m);

	for (int i = 0; i < m; i++) {
		arr[i] = i;
	}

	for (int i = 0; i < m; i++) {
		cout << "arr[" << i << "] = "
			<< arr[i] << endl;
	}

	deleteArray(arr);

	string &str = foo();

	cout << "address: " << &str
		<< endl << str << endl;

	delete &str;

	cout << "\n不定長度引數：\n" << endl;

	double x = 1.1, y = 2.1, z = 3.9;
	double a = 0.1, b = 0.2, c = 0.3;

	cout << "三個參數：" << endl;
	foo(3, x, y, z);

	cout << "六個參數：" << endl;
	foo(6, x, y, z, a, b, c);
}

int* ReturnBy::createArray(int m){
	int *a = new int[m];

	for (int i = 0; i < m; i++) {
		a[i] = 0;
	}

	return a;
}

void ReturnBy::deleteArray(int* arr) {
	delete[] arr;
}


string&  ReturnBy::foo() {
	string *s = new string("This is caterpillar speaking.");

	cout << "address: " << s
		<< endl << *s << endl;

	return *s;
}

void ReturnBy::foo(int i, ...) {
	double tmp;
	va_list num_list;

	va_start(num_list, i);

	for (int j = 0; j < i; j++)
		cout << va_arg(num_list, double) << endl;

	va_end(num_list);
}