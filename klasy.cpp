#include "klasy.h"
#include <algorithm>
#include <math.h>
ostream& operator<<(ostream& output,  Wektor& wektor)
{
		output << "[";
		for (int i = 0; i < wektor.pojemnosc; i++)
		{
			output << wektor.tab[i] << " ";
		}
		output << "]";

		return output; 
	
}



 Wektor operator+(const Wektor& lewy,const  Wektor& prawy)
{
	Wektor suma(lewy);
		for (int i = 0; i < lewy.pojemnosc; i++)
		{
			suma.tab[i] = suma.tab[i] + prawy.tab[i];
		}

		return suma;
	
}




 Wektor operator-(const Wektor& left, const Wektor& right)
 {
	 Wektor roznica(left);
	 for (int i=0;i<left.pojemnosc;i++)
	 {
		 roznica.tab[i] = roznica.tab[i] - right.tab[i];
	 }
	 return roznica;
 }



int operator*(const Wektor& left, const Wektor& right)
 {
	Wektor iloczyn_skalarny(left);
	int ilocz_skal = 0;
	for (int i = 0; i < iloczyn_skalarny.pojemnosc; i++)
	{
		ilocz_skal = ilocz_skal + (iloczyn_skalarny.tab[i] * right.tab[i]);


	}
	cout  <<endl<<"Iloczyn skalarny wynosi:" << ilocz_skal << endl;
	return ilocz_skal;
 }



int operator*(const Wektor& left, int x)
{
	Wektor mnoz_przez_skalar(left); 
	int mnoz_wektora_przez_skalar = 0;
	for (int i = 0; i < mnoz_przez_skalar.pojemnosc; i++)
	{
		mnoz_wektora_przez_skalar = mnoz_wektora_przez_skalar + (mnoz_przez_skalar.tab[i] * x);
	}
	cout << "Iloczyn skalarny po uwczesnym przemnozenie przez skalar: " << mnoz_wektora_przez_skalar <<endl;
	return mnoz_wektora_przez_skalar;
}






void Wektor::dodaj_do_wektora(int x)
{
	if (rozmiar_wektora > pojemnosc)
	{
		tab[pojemnosc] = x;
		pojemnosc++;
	}
	else
		cout << "Przepelnienie";
}

void Wektor::sortuj(const Wektor& wektor)
{
	
	for (int i = 0; i < wektor.pojemnosc-1; i++)
	{
		for (int j = 0; j < wektor.pojemnosc-1; j++)
		{
			if (wektor.tab[j] > wektor.tab[j + 1])
			{
				swap(wektor.tab[j], wektor.tab[j + 1]);
			}
		}
	}
	cout << "Wektor po sortowaniu: ";
}

void Wektor::wyszukaj_min(const Wektor& wektor)
{
	int min = wektor.tab[0];
	
	for (int i = 0; i < wektor.pojemnosc-1; i++)
	{
		if (tab[i] > tab[i + 1])
		{
			min = tab[i + 1];
		}
	}
	cout << "Wartosc minimalna: " << min << endl;

}

void Wektor::wyszukaj_max(const Wektor& wektor)
{
	int max = wektor.tab[0];

	for (int i = 0; i < wektor.pojemnosc - 1; i++)
	{
		if (tab[i] < tab[i + 1])
		{
			max = tab[i + 1];
		}
	}
	cout << "Wartosc maksymalna: " << max <<endl;

}

void Wektor::wyszukiwanie_polowkowe(const Wektor& wektor, int x)
{
	int licznik = 0;
	int p;
	int s;
	
	for (int i = 0; i < wektor.pojemnosc; i++)
	{
		licznik++;
	}
	int l = 0;
	p = licznik - 1;
	while (true)
	{
		if (l > p)
		{
			cout << "Nie odnaleziono szukanego elementu" << endl;
			break;
		}
		s = (l + p) / 2;
		if (wektor.tab[s] == x)
		{
			cout << "Odnaleziono liczbe " << x << " pod indeksem " << s  << endl;
			break;
		}
		if (wektor.tab[s] < x)
			l = s + 1;
		else
			p = s - 1;
	}
	
}

void Wektor::wyszukiwanie_liniowe(const Wektor& wektor, int x)
{
	for (int i = 0; i < wektor.pojemnosc; i++)
	{
		if (wektor.tab[i] == x)
		{
			cout << "Znaleziono liczbe " << x << " pod indeksem " << i <<endl;
		}
		
	
	}
	

}

void Wektor::srednia_arytmetyczna(const Wektor& wektor)
{
	
	float wynik=0;
	int licznik=0;
	for (int i = 0; i < wektor.pojemnosc; i++)
	{
		wynik = wynik + wektor.tab[i];
		licznik++;
	}
	cout << "Srednia arytmetyczna wynosi: " << (wynik / licznik);
	
}

void Wektor::norma(const Wektor& wektor)
{
	float norma = 0;
	for (int i = 0; i < wektor.pojemnosc; i++)
	{
		norma = norma + (wektor.tab[i] * wektor.tab[i]);
	}
	cout << "Norma wektora: " << norma <<endl;

}






