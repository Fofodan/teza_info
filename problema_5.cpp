/*
5.  Se consideră un text cu maximum 255 de caractere, format din litere mici ale alfabetului englez şi spaţii.
    Textul conţine cel puţin o consoană. Scrieţi un program C/C++ care citeşte de la tastatură textul şi apoi determină
    transformarea acestuia, eliminând numai ultima consoană care apare în text, ca în exemplu. Programul va afişa pe ecran textul obţinut.
    Exemplu: dacă de la tastatură se introduce textul: mare frig saci pe ecran se va afişa: mare frig sai
*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
ifstream fin("fisier.in");
int main()
{
    char s[100],v[]="aeiou",sep[]=",!? ;";
    int i,n;
    fin.get(s,100);
    cout<<s<<endl;
    n=strlen(s);
    for(i=n-1;i>=0;i--)
    {
        if(strchr(v,s[i])==0&&strchr(sep,s[i])==0)
         {
             strcpy(s+i,s+i+1);
             break;
         }
    }
    cout<<s;

    return 0;
}
