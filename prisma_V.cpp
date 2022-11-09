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
	float at;
	float b;
	float g;
	float h;
	float n;
	float n_1;
	float p;
	float r;
	float v;
	do {
		cout << "ingresar valores para V PRISMA, A , altura h " << endl;
		cin >> a;
		cin >> h;
	} while (!((a>0 && h>0)));
	v = a*h;
	cout << " la area lateral es igual a " << al << endl;
	cout << " el area total es igual a " << at << endl;
	cout << " el volumen es igual a " << v << endl;
	return 0;
}

