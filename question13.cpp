#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Ass35
{
public:
    int n;
    string s;
    void get()
    {
        cout<<"Enter String -- ";
        getline(cin,s);
    }
    void show()
    {
        cout<<"Star in front alphabet on their position - \n\n";
        for(int i = 0 ; i<s.length();i++)
        {
            if(s[i]==' ')
                continue;
            int p = toupper(s[i]-64);
            cout<<s[i]<<" - "<<setw(p)<<"*"<<endl;
        }
    }
};
int main()
{
    Ass35 d;
    d.get();
    d.show();
}
