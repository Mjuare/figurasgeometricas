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
	float r_1;
	float v;
	do {
		cout << "ingresar valores para V de HUSO ESFERICO, ingrsar r, luego ingresar grados n" << endl;
		cin >> r;
		cin >> n;
	} while (!((r>0 && n>0)));
	v = (3/4)*((M_PI*pow(r,3)*n)/360);
	cout << " la Volumen  es igual a " << v << endl;
	return 0;
}

