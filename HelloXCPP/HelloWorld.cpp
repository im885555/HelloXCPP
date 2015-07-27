#include <iostream> 
#include "HelloWorld.h" 
using namespace std;


helloWorld::helloWorld(){
	cout << "Hello! World!\n";
	cout << "哈囉! C++!\n";
	exec();
}

int helloWorld::exec(){

	dataType();
	literalConstant();
	variable();
	logicalBitwise();

	return 0;
}


int helloWorld::dataType(){

	cout << "\n資料型態!\n";
	cout << "\n型態\t大小(bytes)";
	cout << "\nint\t" << sizeof(int);
	cout << "\nlong\t" << sizeof(long);
	cout << "\nfloat\t" << sizeof(float);
	cout << "\ndouble\t" << sizeof(double);
	cout << "\nchar\t" << sizeof(char);
	cout << "\n";

	cout << "sizeof(bool)\t" << sizeof(bool) << "\n";
	cout << "sizeof(true)\t" << sizeof(true) << "\n";
	cout << "sizeof(false)\t" << sizeof(false) << "\n";

	cout << "true\t" << static_cast<int>(true) << "\n";
	cout << "false\t" << static_cast<int>(false) << "\n";

	return 0;
}

int helloWorld::literalConstant(){
	cout << "\n字面常量!\n";
	cout << "sizeof(1): " << sizeof(1) << "\n";
	cout << "sizeof(1.0): " << sizeof(1.0) << "\n";

	cout << 26 << "\n"; // 10進位
	cout << 032 << "\n"; // 8進位
	cout << 0x1A << "\n"; // 16進位

	return 0;
}



int helloWorld::variable(){
	int ageForStudent;
	double scoreForStudent;
	char levelForStudent = char();


	ageForStudent = 5;
	scoreForStudent = 80.0;
	levelForStudent = 'B';

	cout << "\n變數（Variable）!\n";
	cout << "\n年級\t得分\t等級";
	cout << "\n" << ageForStudent
		<< "\t" << scoreForStudent
		<< "\t" << levelForStudent
		<< "\n";


	return 0;
}

int helloWorld::logicalBitwise(){

	cout << "\n邏輯（Logical）運算、位元（Bitwise）運算!\n";
	cout << "AND運算：" << endl;
	cout << "0 AND 0\t\t" << (0 & 0) << endl;
	cout << "0 AND 1\t\t" << (0 & 1) << endl;
	cout << "1 AND 0\t\t" << (1 & 0) << endl;
	cout << "1 AND 1\t\t" << (1 & 1) << endl;

	cout << "OR運算：" << endl;
	cout << "0 OR 0\t\t" << (0 | 0) << endl;
	cout << "0 OR 1\t\t" << (0 | 1) << endl;
	cout << "1 OR 0\t\t" << (1 | 0) << endl;
	cout << "1 OR 1\t\t" << (1 | 1) << endl;

	cout << "XOR運算：" << endl;
	cout << "0 XOR 0\t\t" << (0 ^ 0) << endl;
	cout << "0 XOR 1\t\t" << (0 ^ 1) << endl;
	cout << "1 XOR 0\t\t" << (1 ^ 0) << endl;
	cout << "1 XOR 1\t\t" << (1 ^ 1) << endl;

	cout << "NOT運算：" << endl;
	cout << "NOT 0\t\t" << (!0) << endl;
	cout << "NOT 1\t\t" << (!1) << endl;

	return 0;

}

