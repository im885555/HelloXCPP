#include <iostream> 
#include "Recursion.h"
using namespace std;

Recursion::Recursion() {
	int m = 0;
	int n = 0;

	cout << "輸入兩數：";
	cin >> m >> n;

	cout << "GCD: "
		<< gcd(m, n) << endl;


}

int Recursion::gcd(int m, int n) {
	if (n == 0)
		return m;
	else
		return gcd(n, m % n);
}

