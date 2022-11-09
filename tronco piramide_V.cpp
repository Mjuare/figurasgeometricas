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
	float ab;
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
		cout << "ingresar valores para V de TRONCO DE UNA PIRAMIDE , ingrsar h, luego ingresar AB, luego Ab" << endl;
		cin >> h;
		cin >> ab;
		cin >> ab;
	} while (!((h>0 && ab>0 && ab>0)));
	v = (h*(ab+ab+sqrtf(ab*ab)))/3;
	cout << " la area lateral es igual a " << al << endl;
	cout << " el area total es igual a " << at << endl;
	cout << " el volumen es igual a " << v << endl;
	return 0;
}

