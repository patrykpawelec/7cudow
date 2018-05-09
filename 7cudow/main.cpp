#include <iostream>

using namespace std;

void pobierzDane(int &a, int &b, int &c, int &d, int &m);
int nauka(int a, int b, int c, int d, int &n);
int monety(int m);

int main()
{
    int a,b,c,d,x,m;
    cout << "Hello world!" << endl;
    do
    {
        cout<<"Ile monet?";
        cin>>m;
        cout<<"Ile symboli nauki?\nSymbol 1: ";
        cin>>a;
        cout<<"Symbol 2: ";
        cin>>b;
        cout<<"Symbol 3: ";
        cin>>c;
        cout<<"Dowolny symbol: ";
        cin>>d;
    }
    while(a<0 || b<0 || c<0 || d<0 || m<0);

    x=0;
    x += monety(m);
    int n=0;
    x+=nauka(a,b,c,d,n);
    cout<<"Zdobyles "<<x<<" punktow.";
    return 0;
}
int monety(int m)
{
    cout<<"za monety: "<<m/3<<endl;
        return m/3;
}
int nauka(int a, int b, int c, int d, int &n)
{
    int wa=a;
    int wb=b;
    int wc=c;
    int wynik=wa*wa+wb*wb+wc*wc;
    //cout<<"\twynik: "<<wa*wa<<"+"<<wb*wb<<"+"<<wc*wc;
    while(wa>0 && wb>0 && wc>0)
    {
        wynik+=7;
        wa-=1;
        wb-=1;
        wc-=1;
       // cout<<"+7";
    }
    if(wynik>n) n=wynik;
    //cout<<" = "<<wynik<<endl;
    if(d>0)
    {
        nauka(a+1,b,c,d-1,n);
        nauka(a,b+1,c,d-1,n);
        nauka(a,b,c+1,d-1,n);
        if(a<=b && a<=c) nauka(a+1,b,c,d-1,n);
        else if(b<=a && b<=c) nauka(a,b+1,c,d-1,n);
        else if(c<=a && c<=b) nauka(a,b,c+1,d-1,n);
    }
    //cout<<"wynik:"<<wynik<<" n: "<<n<<endl;
    return n;
}
void pobierzDane(int &a, int &b, int &c, int &d, int &m)
{
    do
    {
        cout<<"Ile monet?";
        cin>>m;
        cout<<"Ile symboli nauki?\nSymbol 1: ";
        cin>>a;
        cout<<"Symbol 2: ";
        cin>>b;
        cout<<"Symbol 3: ";
        cin>>c;
        cout<<"Dowolny symbol: ";
        cin>>d;
    }
    while(a<0 || b<0 || c<0 || d<0 || m<0);
}
