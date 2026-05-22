#include<iostream>
#include<string>
using namespace std;
class Ass33
{
public:
    int n , i , j ;
    string s;
    void get()
    {
        cout<<"Enter a Number -- ";
        cin>>n;
        s=to_string(n);
    }
    void show()
    {
        string t = "";
        cout<<"\nSeries is -- \n\n";
        for(i=0;i<s.length();i++)
        {
            for(j=i;j<s.length();j++)
            {
                t = t + s[j];
                cout<<t<<"  ";
            }
            t = "";
        }
    }
};
int main()
{
    Ass33 d;
    d.get();
    d.show();
}
