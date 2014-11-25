int main()
{
    char s[50];
    int i,nr,cifre[10],max=0;
    fin.getline(s,50);
    cout<<s<<endl;;
    for (i = 0; i <= 9; i++)
        cifre[i]=0;
    for (i=0;i<strlen(s);i++)
        if (s[i]>='0'&&s[i]<='9')
        {
            nr=s[i]-'0';
            cifre[nr]++;
        }
    for (i=0;i<=9;i++)
        if (cifre[i]>max)
            max=cifre[i];
    for (i=0;i<=9;i++)
        if (cifre[i] == max)
        {
            if (max != 0)
                cout << i;
            else
                cout << "NU";
            break;
        }

    return 0;
}
