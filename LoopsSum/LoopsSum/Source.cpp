#include <iostream>
using namespace std;
// https://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice

int recursive_sum(int m, int n) {
	if (m == n)
		return m;
	return m + recursive_sum(m + 1, n);
}

int main()
{
	cout << "Sum Numbers!" << endl;

	//Sum numbers between m and n
	int m = 1, n = 4020;
	int sum = 0;
	for (int i = m; i <= n; i++) {
		sum += i;
	}
	cout << "Sum with for loop   = " << sum << endl;

	cout << "Sum with recursion  = " << recursive_sum(m, n) << endl;

	cout << "Sum with algebra    = " << (n * (n + 1) - m * (m - 1)) / 2 << endl;

	system("pause>0");
}

// https://learn.microsoft.com/en-us/openspecs/windows_protocols/ms-erref/596a1078-e883-4972-9bbc-49e60bebca55
// Sum Numbers!
// // m = 1 n = 4096
// Sum = 8390656
//
// C:\Users\harol\Perforce\s215921\Year_2\2023\Programming\HaroldWSchranz\Experiments\LoopsSum\x64\Debug\LoopsSum.exe(process 43296)
// exited with code - 1073741571.
// Press any key to close this window . . .
// error code 0xC00000FD means stack overflow
//
// m = 1  n = 4020  => 4020*(4020+1) = 8082210
// Sum Numbers!
// Sum = 8082210
// Sum = 8082210

