#pragma once
#include<string>
#include<iostream>
using namespace std;

class Osoba
{
	string imie;
	string nazwisko;
	int wiek;

public:
	Osoba(string i, string n, int w);
	int getWiek() { return wiek; }
	void PiszDane() {
		cout << "Imie osoby: " << imie << endl;
		cout << "Nazwisko osoby: " << nazwisko << endl;
		cout << "Wiek osoby: " << wiek << endl;
	}

};

