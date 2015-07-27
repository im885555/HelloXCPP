#include <iostream> 
#include <string>
#include <cstdarg> 
using namespace std;

class ReturnBy{
public:
	ReturnBy();
	void VarArg();
private:
	int* createArray(int);
	void deleteArray(int*);

	string& foo();
	void foo(int, ...);
};