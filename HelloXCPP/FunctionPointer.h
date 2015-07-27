#include <iostream> 
using namespace std;


class FunctionPointer
{
public:
	FunctionPointer();
	static int foo();

private:
	class lesson1
	{
	public:
		lesson1();
		static int foo(int, int);
		static char foo(int, char);

	private:

	};
	class sortlesson
	{
	public:
		sortlesson();
		typedef bool(*CMP)(int, int);
		static void swap(int&, int&);
		static bool larger(int a, int b);
		static bool smaller(int a, int b);
		static void sort(int*, int, bool(*compare)(int, int));
	};
};

