/*nombre:
autor:maycol juarez
lugar: ITV
instrucciones: 
*/
#include<iostream>
using namespace std;


int main() {

	float ab;
	float al;
	
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
		cout << "ingresar valores para At de TRONCO DE UNA PIRAMIDE , ingrsar Al, luego ingresar AB, luego Ab" << endl;
		cin >> al;
		cin >> ab;
		cin >> ab;
	} while (!((al>0 && ab>0 && ab>0)));
	at = al+ab+ab;
	cout << " la area lateral es igual a " << al << endl;
	cout << " el area total es igual a " << at << endl;
	cout << " el volumen es igual a " << v << endl;
	return 0;
}

