#include <iostream>


using namespace std;

namespace Myspace1
{
	int addSomething(int a, int b)
	{
		return a + b;
	}
}

int addSomething(int a, int b)
{
	return a * b;
}

int main()
{
	cout << Myspace1 :: addSomething(3, 4) << endl;

	return 0;
}