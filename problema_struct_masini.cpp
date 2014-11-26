/*
    Sa se efectueze giestunea unui service auto.
*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
ifstream fin("gestiune.in");
union tip_masina
{
    int nr_loc;
    int tone;
};
struct service
{
    char marca[100],model[100],defectiune[100],tip;
    int cmc,pret;
    tip_masina tm;
};
int main()
{
    service m[100];
    char mrc[20],mrc1[20],*p,model[20];
    int i,n,contor=0,contor1=0,S=0;
    fin>>n;
    for(i=0;i<n;i++)
    {
        fin>>m[i].marca>>m[i].model;
        fin>>m[i].cmc>>m[i].defectiune>>m[i].pret;
        fin>>m[i].tip;
        if(m[i].tip=='m')
            fin>>m[i].tm.tone;
        else
            fin>>m[i].tm.nr_loc;
        cout<<m[i].marca<<" "<<m[i].model<<" "<<m[i].cmc<<" "<<m[i].defectiune<<" "<<m[i].pret<<" "<<m[i].tip<<endl;
    }
    cout<<"Marca:"; cin>>mrc;
    for(i=0;i<n;i++)
        if(strcmp(mrc,m[i].marca)==0)
            cout<<m[i].model<<" "<<endl;
    cout<<"Ce masina a fost reparata?"; cin>>mrc1>>model;
    for(i=0;i<n;i++)
    {
        if(strcmp(mrc1,m[i].marca)==0&&strcmp(model,m[i].model)==0)

        cout<<m[i].marca<<" "<<m[i].model<<" "<<m[i].cmc<<" "<<m[i].defectiune<<" "<<m[i].pret<<" "<<m[i].tip<<endl;
    }


    for(i=0;i<n;i++)
    {
        if(m[i].tip=='m')
            contor++;
        else
            contor1++;
    }
    cout<<"Sunt "<<contor<<" masini de marfa si "<<contor1<<" masini de calatori."<<endl;
    for(i=0;i<n;i++)
        S=S+m[i].pret;
    cout<<"Venitul este de : "<<S;

}
