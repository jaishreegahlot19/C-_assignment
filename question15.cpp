#include<iostream>
#include<string>
using namespace std;
class Ass52
{
public:
    int n;
    Ass52(int x)
    {
        n = x;
    }
};
class Derived : public Ass52
{
public:
    int mul , c , i ;
    Derived(int x1) : Ass52(x1)
    {
        if(to_string(n).length() != 4)
        {
            cout<<"Please Enter Valid Number..";
            return;
        }
        mul = 1;
        while (n > 0)
        {
            int x = n % 10 ;
            for(i = 2 ,c = 0 ;i <=x ; i++)
                {
                    if (x % i == 0 ){
                        c++;
                    }
                }
                if (c == 1)
                {
                    mul =mul * x ;
                }
                n = n / 10;
        }
        cout<<"Mul of Prime Numbers -- "<<mul<<"\n\n";
    }
};
int main()
{
    cout<<"Enter a Number -- ";
    int n;
    cin>>n;
    Derived d(n);
}
