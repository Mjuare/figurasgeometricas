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
	float pb;
	float r;
	float r_1;
	float v;
	do {
		cout << "ingresar valores para Al TRONCO DE PIRAMIDE, ingrsar PB, luego ingresar Pb, luego ingresar Ap" << endl;
		cin >> pb;
		cin >> pb;
		cin >> ap;
	} while (!((pb>0 && pb>0 && ap>0)));
	al = ((pb+pb)/2)*ap;
	cout << " la area lateral es igual a " << al << endl;
	cout << " el area total es igual a " << at << endl;
	cout << " el volumen es igual a " << v << endl;
	return 0;
}

