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
	float r;
	float r_1;
	float v;
	cont = 0;
	do {
		cout << "ingresar valores para A de HEXADECAEDRO, ingrsar a" << endl;
		cin >> a;
		cont = cont+1;
	} while (!((a>0 || cont==3)));
	if ((a>0)) {
		a = 6*pow(a,2);
		cout << " la area  es igual a " << a << endl;
	}
	return 0;
}

