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
		cout << "ingresar valores para At PIRAMIDE, ingrsar Al, luego ingresar A" << endl;
		cin >> al;
		cin >> a;
	} while (!((al>0 && a>0)));
	at = al+a;
	cout << " la area lateral es igual a " << al << endl;
	cout << " el area total es igual a " << at << endl;
	cout << " el volumen es igual a " << v << endl;
	return 0;
}

