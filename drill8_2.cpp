
#include "std_lib_facilities.h"

using namespace std;

int a, b;

void swap_v(int a, int b) {

	int temp; temp = a, a = b; b = temp;
	
}
void swap_r(int& a, int& b) {

	int temp; temp = a, a = b; b = temp;
}

int main()
{
	swap_v(2,3);
	cout << a << " " << b << endl,

}
