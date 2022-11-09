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
		cout << "ingresar valores para At PRISMA, area lateral AL, Area A " << endl;
		cin >> al;
		cin >> a;
	} while (!((al>0 && a>0)));
	at = al+(2*a);
	cout << " la area lateral es igual a " << al << endl;
	cout << " el area total es igual a " << at << endl;
	cout << " el volumen es igual a " << v << endl;
	return 0;
}

