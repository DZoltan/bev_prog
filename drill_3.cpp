#include "std_lib_facilities.h"

int main()

{

string first_name;
string friend_name;
int age = 0;
char friend_sex = 0 ;

cout << "Kinek szeretnél írni? \n";
cin >> first_name ;

cout << "Életkora: \n";
cin >> age;
if(age < 0 || age > 110) 
	simple_error( " you ' re kidding! ");


cout << "Ki a másik barátod?\n" ;
cin >> friend_name;
cout << "Mi ennek a barátodnak a neme? (kérlek f (férfi) -fel vagy n (nő)-nel válaszolj)\n" ;
cin >> friend_sex;

cout << "Kedves " << first_name << ", \n" << "Rég találkoztunk. Hogy vagy? \n Láttad mostanában "
	<< friend_name << "-t? \n";
if (friend_sex == 'f')
	cout << "Monnd meg neki kérlek (ffi) , hogy hívjon fel!\n" ;
else if (friend_sex == 'n')
	cout << "Monnd meg neki kérlek (nő) , hogy hívjon fel!\n" ; 

cout << "Hallottam most volt a " << age << " születésnapod! Isten éltessen sokáig\n " ;

if ( age < 12 )
	cout << "Jövőre már " << age + 1 << " leszel ! \n" ;
else if (age == 17)
	cout << "Jövőre már szavazhatsz! \n" ;
else if (age > 70)
	cout << "Remélem élvezed a nyugdíjadat! \n";


cout << "Üdvözlettel : \n \n" ;

}
