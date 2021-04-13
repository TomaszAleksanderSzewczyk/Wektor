#pragma once
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string> 
using namespace std;
class Wektor
{
private:
	int pojemnosc;
	int* tab;
	int rozmiar_wektora;

public:
	 
	
	

	Wektor& operator=(const Wektor& right) {
		if (&right != this) {
			tab = new int[right.pojemnosc];
			
			for (int i = 0; i < pojemnosc; i++)
			{
				tab[i] = right.tab[i];
			}
			rozmiar_wektora = right.rozmiar_wektora;
			
		}
		return *this;
	}

	friend ostream& operator<<(ostream& output, Wektor& wektor);
	
	friend Wektor operator + (const Wektor& lewy,const Wektor& prawy);
	friend inline Wektor& operator+=(Wektor& lewy, const Wektor& prawy);
	friend Wektor operator-(const Wektor& left, const Wektor& right);
	friend inline Wektor& operator-=( Wektor& lewy, const Wektor& prawy);
	friend int operator*(const Wektor& left, const Wektor& right);
	friend inline int operator*=(const Wektor& left, const Wektor& right);
	friend int operator *(const Wektor&left, int x);
	friend inline int operator*=(const Wektor& left, int x);
	
	void dodaj_do_wektora(int x);
	void sortuj(const Wektor& wektor);
	void wyszukaj_min(const Wektor & wektor);
	void wyszukaj_max(const Wektor & wektor );
	void wyszukiwanie_polowkowe(const Wektor& wektor,int x);
	void wyszukiwanie_liniowe(const Wektor& wektor, int x);
	void srednia_arytmetyczna(const Wektor& wektor); 
	void norma(const Wektor& wektor);
	
	Wektor(int rozmiar) : tab(new int[rozmiar]), pojemnosc(0), rozmiar_wektora(rozmiar)
	{
	}


	Wektor(const Wektor& wektor):rozmiar_wektora(100),tab(new int [100]), pojemnosc(wektor.pojemnosc)//konstruktor kopiujacy
	{
		memcpy(tab, wektor.tab, sizeof(int) * rozmiar_wektora);

	}


	
	~Wektor()
	{
 	delete[]tab;
	}



};

inline Wektor& operator-=( Wektor& lewy, const Wektor& prawy)
{
	Wektor minus(lewy);
	minus = lewy - prawy;
	lewy = minus;
	return lewy;

	
}


inline Wektor& operator+=(Wektor& lewy,  Wektor& prawy)
{
	Wektor suma(lewy);
	suma = lewy + prawy;
	lewy = suma;
	return lewy;
}

inline int operator*=(const Wektor& left, const Wektor& right)
{
	int ilocz_skal;
	Wektor iloczyn_skal(left);

	ilocz_skal = left *right;
	return ilocz_skal;
}

inline int operator*=(const Wektor& left, int x)
{
	int mnoz_przez_skalar;
	Wektor mnozenie(left);
	mnoz_przez_skalar = left * x;
	return mnoz_przez_skalar;
}