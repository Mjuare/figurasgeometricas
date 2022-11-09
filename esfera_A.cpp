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
	float cont;
	float g;
	float h;
	float n;
	float n_1;
	float p;
	float pi;
	float r;
	float r_1;
	float v;
	cont = 0;
	do {
		cout << "ingresar valores para A ESFERA, ingrsar r" << endl;
		cin >> r;
		cont = cont+1;
	} while (!((r>0 || cont==3)));
	if ((r>0)) {
		a = 4*M_PI*pow(r,2);
		cout << " la area  es igual a " << a << endl;
	}
	return 0;
}

