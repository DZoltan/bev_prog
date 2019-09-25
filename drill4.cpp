#include "std_lib_facilities.h"
//feladat 6-11
vector<double> ertekek;
double ossz;
int db_szam;

void ertek(double ek){
++db_szam;
ossz+= ek;
ertekek.push_back(ek);
sort(ertekek);
if ( ek== ertekek[0]){
	cout << "the smallest so far\n";} 		
else if (ek == ertekek[ertekek.size()-1]){
	cout << "the largest so far\n";}}

int main(){

vector<string> adat;
double be;
double uj;
double cm_to_m = 0.01;
double cm_to_in = 2.54;
double in_to_m = 0.0254;
double ft_to_in = 12;
double ft_to_m = 0.3048;
string mertek = "";

while(cin >> be >> mertek){
	if(mertek == "cm"){
		uj= be*cm_to_m;
		ertek(uj);
		cout << "Jelenlegi érték: " <<be <<"\n";}
	else if(mertek =="m"){
		uj= be;
		ertek(uj);
		cout << "Jelenlegi érték: " <<be <<"\n";}	
	else if(mertek =="in"){
		uj= be*in_to_m;
		ertek(uj);
		cout << "Jelenlegi érték: " <<be <<"\n";}		
	else if(mertek == "ft"){
		uj= be*ft_to_m;
		ertek(uj);
		cout << "Jelenlegi érték: " <<be <<"\n";}
	else {cout << "Invalid unit!\n";
		be = -1; }
	string szam = to_string(be);
	string mennyiseg =  szam + mertek;	
	adat.push_back(mennyiseg);	
}
sort(adat);
cout << "Bekért értékek: \n";
for (int i=0 ; i<adat.size(); i++){
	if (adat[i] < "0"){}
	else {
	cout  <<adat[i] << "\t";}}

cout << "\nÖsszesen: " << ossz << " m. " << db_szam <<" megadott összegből.\n";
}




// feladat 1-5
/*while(cin >> be){       
	v.push_back(be); }

sort(v);
if (v[0] == v[1]){
	cout << "the numbers are equal\n" ; }
else if (v[1] - v[0] < 1.0/100 ){ 
	cout << "the numbers are almost equal\n" ; }
else{  
	cout << "\nThe smaller value : " << v[0] << "\nThe larger value: " << v[1] << "\n" ;}
*/

