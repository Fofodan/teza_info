/*
    53. Scrieţi programul C/C++ care citeşte de la tastatură un cuvânt s de cel mult 20 litere mici ale
alfabetului englez, construieşte în memorie şi afişează pe ecran cuvântul s după eliminarea
primei şi a ultimei vocale. Cuvântul s conţine cel puţin două vocale şi cel puţin o consoană. Se
consideră vocale literele: a, e, i, o, u.
Exemplu: dacă se citeşte cuvântul bacalaureat, pe ecran se afişează: bcalauret

*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
ifstream fin("fisier.in");
int main()
{
    char a[100],v[]="aeiou";
    int i,n,j;
    fin>>a;
    cout<<a<<endl;
    n=strlen(a);
    for(i=0;i<n;i++)
    {
       if(strchr(v,a[i]))
        {
            strcpy(a+i,a+i+1);
            break;
        }
    }
    for(i=n-2;i>=0;i--)
    {
        if(strchr(v,a[i]))
        {
            strcpy(a+i,a+i+1);
            break;
        }
    }
    cout<<a;

    return 0;
}
