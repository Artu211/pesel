#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    int pesel[11];
    string strPesel;
    int testy, z;
    cin>>testy;
    while(testy > z)
    {
        cin>>strPesel;
        for (int i=0; i<strPesel.length(); i++)
        {
            pesel[i]=strPesel[i]; // każda cyfra z stringa dostaje szufladke w tablicy
        }
        int suma = pesel[0]*1 + pesel[1]*3 + pesel[2]*7 + pesel[3]*9 + pesel[4]*1 + pesel[5]*3 +
                   pesel[6]*7 + pesel[7]*9 + pesel[8]*1 + pesel[9]*3 + pesel[10]*1;

        if(suma > 0)
        {
            if (suma % 10 == 0)
            {
                cout<<"D"<<endl;
            }
            else
            {
                cout<<"N"<<endl;
            }
        }
        else
        {
            cout<<"N"<<endl;
        }
        z++;
    }
    return 0;
}
