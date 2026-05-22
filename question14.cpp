#include<iostream>
#include<math.h>
using namespace std;
class Ass45
{
public:
    string s;
    int dec, p, c;
    Ass45(string x)
    {
        s = x;
        dec = c = p = 0;
        for(int i  = s.length()-1 ; i >= 0 ; i--,c++){
            p = pow(2,c);
            dec = dec + (((int)(s[i])-48) * p);
        }
        cout<<"Decimal of "<<s<<" is "<<dec<<endl;
    }
};
int main()
{
    string bin ;
    cout<<"Enter a binary Number -- ";
    cin>>bin;
    Ass45 d(bin);
}
