#include<iostream>
#include<iomanip>
using namespace std ;
class Ass1
{
public:
    void Pattern1()
    {
        int a = 1024,b=512,c=64,d=8,e;
        e=a+b+c+d;
        cout<<"Print Pattern 1 --\n\n";
        cout<<setw(5)<<a<<endl;
        cout<<setw(5)<<b<<endl;
        cout<<setw(5)<<c<<endl;
        cout<<setw(5)<<d<<endl;
        cout<<setw(5)<<"--------\n";
        cout<<setw(5)<<e<<endl;
    }
    void Pattern2 ()
    {
        int i,N=5;
        cout<<"Print Patter 2 -- \n\n";
        for(i=1 ; i<=N ; i++){
            cout<<setw(N-i)<<setfill(' ')<<"";
            cout<<setw(i+i-1)<<setfill('*')<<""<<endl;
            }
    }
    void Pattern3()
    {
        int i,N=5;
        cout<<"Print Pattern 3 -- \n\n";
        for(i=1;i<=N;i++){
            if (i % 2 == 0){
                cout<<setw(3)<<setfill('-')<<"";
                cout<<setw(7)<<setfill('*')<<"";
                cout<<setw(3)<<setfill('-')<<""<<endl;
            }else{
                cout<<setw(5)<<setfill('-')<<"";
                cout<<setw(3)<<setfill('*')<<"";
                cout<<setw(5)<<setfill('-')<<""<<endl;
            }
        }
    }
};
int main()
{
    Ass1 a;
    a.Pattern1();
    a.Pattern2();
    a.Pattern3();
}
