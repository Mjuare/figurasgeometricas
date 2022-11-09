/*nombre:
autor:maycol juarez
lugar: ITV
instrucciones: 
*/
#include<iostream>
#include<cmath>
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
	float pi;
	float r;
	float rs;
	float r_1;
	float v;
	do {
		cout << "ingresar valores para Al TRONCO DE CONO, ingrsar g, luego ingresar r, ingresar Rs" << endl;
		cin >> g;
		cin >> r;
		cin >> rs;
	} while (!((g>0 && r>0 && rs>0)));
	al = M_PI*g*(r+rs);
	cout << " la area lateral es igual a " << al << endl;
	cout << " el area total es igual a " << at << endl;
	cout << " el volumen es igual a " << v << endl;
	return 0;
}

