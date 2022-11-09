/*nombre:
autor:maycol juarez
lugar: ITV
instrucciones: 
*/
#include<iostream>
using namespace std;



int main() {
	float a;
	float al;
	float ap;
	float ap_1;
	float at;
	float b;
	float b_1;
	float g;
	float h;
	float n;
	float n_1;
	float p;
	float r;
	float r_1;
	float v;
	do {
		cout << "ingresar valores para Al PIRAMIDE, ingrsar AP, luego ingresar P" << endl;
		cin >> ap;
		cin >> p;
	} while (!((ap>0 && p>0)));
	al = (p*ap)/2;
	cout << " la area lateral es igual a " << al << endl;
	cout << " el area total es igual a " << at << endl;
	cout << " el volumen es igual a " << v << endl;
	return 0;
}

