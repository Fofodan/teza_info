/*
    4. Se consideră un text cu maximum 255 de caractere în care cuvintele sunt separate prin unul sau mai multe spaţii.
    Primul caracter din textul citit este o literă, iar cuvintele sunt formate numai din litere mici ale alfabetului englez.
    Scrieţi un program C/C++ care citeşte de la tastatură textul şi îl transformă, înlocuind prima literă a fiecărui cuvânt cu litera mare
    corespunzătoare, restul caracterelor rămânând nemodificate. Textul astfel transformat va fi afişat pe ecran.
    Exemplu: dacă de la tastatură se introduce textul: mare frig rosu se va afişa pe ecran: Mare Frig Rosu
*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
ifstream fin("fisier.in");
int main()
{
    char s[50],aux;
    int i;
    fin.get(s,60);
    s[0]=s[0]-32;
    for(i=1;i<strlen(s);i++)
    {
        if(s[i-1]==' ')
            s[i]=s[i]-32;
    }
    cout<<s;

    return 0;
}
