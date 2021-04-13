#include <iostream>
#include <algorithm>
#include <math.h>
#include "klasy.h"
using namespace std;

int main()
 {

	cout << "Wektor1: ";
	Wektor x1(100);
 	x1.dodaj_do_wektora(1);
	x1.dodaj_do_wektora(1);
	x1.dodaj_do_wektora(-1);


	cout << x1 << endl;
	Wektor x2(100);
	x2.dodaj_do_wektora(11);
	x2.dodaj_do_wektora(2);
	x2.dodaj_do_wektora(2);
	cout <<"Wektor2: "<< x2 << endl;
	Wektor x100(199);
	x100.dodaj_do_wektora(2);
	x100.dodaj_do_wektora(1);
	x100.dodaj_do_wektora(-100);
	x100.dodaj_do_wektora(250);
	cout << "Wektor 100:" << x100<<endl;
	Wektor x5(100);
	x5.dodaj_do_wektora(10);
	x5.dodaj_do_wektora(11);

	cout << "Wektor 5: "  << x5<<endl;
	//dodawanie
	Wektor x3 = x1 + x2;
	
	cout << "Dodawanie-wektor 1+2: " << x3;

	//iloczyn skalarny
	Wektor x6 = x1 * x2;

	
	//mnozenie przez skalar
	Wektor x7 = x1 * 2;


	
	

	x1 -=x2;
	
	cout << "Skrócony operator odejmowania x1,z2: " << x1;

	cout << endl;
	x1=x1 += x2;
	cout << "Skrócony operator += x1 (po operacji odejmowania),x2: " << x1;



	x1 *= x2;
	
	cout << endl;
	x1 *= 2;
	

	//SORTOWANIE 
 	x100.sortuj(x100);

	cout  << x100 << endl;
	
	//SZUKANIE MINIMUM
	x100.wyszukaj_min(x100);
	//SZUKANIE MAXIMUM
	x100.wyszukaj_max(x100); 
	cout << x100 << endl;

	//WYSZUKIWANIE POLOWKOWE
	x100.wyszukiwanie_polowkowe(x100, 2);

	//WYSZUKIWANIE LINIOWE
	x100.wyszukiwanie_liniowe(x100, 2);


	//SREDNIA ARYTMETYCZNA
	x100.srednia_arytmetyczna(x100);
	

	x2.norma(x2);
	//
	//

 
}