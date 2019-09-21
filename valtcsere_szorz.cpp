#include "std_lib_facilities.h"

int main()

{

int a;
int b;
cout << "Adj meg egy A és egy B értéket('space'-el elválasztva)\n";
cin >> a >> b;

a = a*b;
b = a/b;
a = a/b;

cout << "Kapott A: " << a << "\nKapott B: " << b << "\n";
}
