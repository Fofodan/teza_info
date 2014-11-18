/*
    42. Scrieţi programul C/C++ care citeşte de la tastatură un şir de cel mult 40 de caractere,
format doar din litere mici ale alfabetului englez, şi care afişează pe ecran, pe o singură
linie, toate vocalele ce apar în şirul citit. Vocalele vor fi afişate în ordinea apariţiei lor în şir,
separate prin câte un spaţiu, ca în exemplu. Se consideră ca fiind vocale următoarele litere:
a, e, i, o, u. Dacă şirul citit nu conţine nicio vocală, se va afişa pe ecran mesajul fara
vocale.
Exemplu: dacă se citeşte şirul calculator atunci pe ecran se va afişa: a u a o

*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
ifstream fin("fisier.in");
int main()
{
    char s[100],v[]="aeiou";
    int i;
    fin.get(s,100);
    cout<<s<<endl;
    for(i=0;s[i];i++)
    {
        if(strchr(v,s[i]))
            cout<<s[i]<<" ";
    }

    return 0;
}
