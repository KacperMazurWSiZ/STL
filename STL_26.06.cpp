#include <iostream>
#include <vector>
#include <algorithm>
#include "osoba.h"
using namespace std;


int main()
{
    /*
    vector <float> vfloat;
    vfloat.push_back(4.6);
    vfloat.push_back(1.2);
    vfloat.push_back(234.6);
    vfloat.push_back(111.2);

    for (int i = 0; i < vfloat.size(); i++)
        cout << vfloat[i] << "\t";
    cout << endl;

    for (auto& i : vfloat)
        cout << i << "\t";

    cout << endl;

    vector <float>::iterator p;
    for (p = vfloat.begin(); p != vfloat.end(); p++)
        cout << *p << "\t";
    cout << endl;

    float maxV = *max_element(vfloat.begin(), vfloat.end());
    cout << "MAksymalny element to : " << maxV << endl;

    sort(vfloat.begin(), vfloat.end());
    cout << "\nDane po sortowaniu: " << endl;
    for (auto& i : vfloat)
        cout << i << "\t";

     */


    string imiona[5] = {"Anna", "Maria","Tomasz","Filip", "Michal"};
    string nazwiska[5] = { "Nowak", "Fjolek","Amaan","Mazur", "Wariat" };
    int wiek[5] = {10,20,30,40,50};
    vector <Osoba> vosoby;

    for (int i = 0; i < 5; i++)
    {
        vosoby.push_back(Osoba(imiona[i], nazwiska[i], wiek[i]));
    }

    for (auto& i : vosoby)
        i.PiszDane();

    for (int i = 0; i < vosoby.size(); i++)
        vosoby[i].PiszDane(); 
    cout << endl;

    cout <<"-----------------------------" << endl;
    vector <Osoba>::iterator p;
    for (p = vosoby.begin(); p != vosoby.end(); p++)
        &p->PiszDane();
    cout << endl;

}
