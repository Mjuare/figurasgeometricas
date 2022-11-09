/*nombre:
autor:maycol juarez
lugar: ITV
instrucciones: 
*/

#include<iostream>
using namespace std;


int main() {
	int a;
	int al;
	int ap;
	int ap_1;
	int at;
	int b;
	int b_1;
	int g;
	int h;
	int n;
	int n_1;
	int p;
	int r;
	int r_1;
	int v;
	do {
		cout << "ingresar valores para Al PRISMA, perimetro P, altura h " << endl;
		cin >> p;
		cin >> h;
	} while (!((p>0 && h>0)));
	al = p*h;
	cout << " la area lateral es igual a " << al << endl;
	cout << " el area total es igual a " << at << endl;
	cout << " el volumen es igual a " << v << endl;
	return 0;
}

