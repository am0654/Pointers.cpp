#include <bits/stdc++.h>
using namespace std;
void geeks()
{
	// Declare an array
	int v[3] = { 10, 100, 200 };

	// declare pointer variable
	int* ptr;

	// Assign the address of v[0] to ptr
	ptr = v;

	for (int i = 0; i < 3; i++) {
		cout << "Value at ptr = " << ptr << "\n";
		cout << "Value at *ptr = " << *ptr << "\n";

		// Increment pointer ptr by 1
		ptr++;
	}
}

// Driver program
int main() { geeks(); }


Output:
Value at ptr = 0x7ffe5a2d8060
Value at *ptr = 10
Value at ptr = 0x7ffe5a2d8064
Value at *ptr = 100
Value at ptr = 0x7ffe5a2d8068
Value at *ptr = 200
