#include<iostream>
using namespace std;
class Ass2
{
public:
    void GCD()
    {
        cout<<"Greatest Common Divisor ..\n\n";
        int n1 , n2;
        cout<<"Enter Number 1 --";cin>>n1;
        cout<<"Enter Number 2 --";cin>>n2;
        int m = (n1 < n2)?n1:n2;
        int gcd = 0;
        for( int i = 1; i<=m ; i++){
            if ( n1 % i ==0 && n2 % i==0)
                gcd = i;
        }
            cout<<"GCD of "<<n1 <<" & "<<n2<<" is -- "<<gcd<<"\n\n";
    }

    void CSEvenOdd()
    {
        cout<<"\n\nCount & Sum of Even and Odd Digit .. \n\n";
        int num,se,ce,so,co;
        se=ce=so=co=0;
        cout<<"Enter a Number --";
        cin>>num;
        cout<<"\n\nCount & Sum of Odd and Even Digit in "<<num<<" are -- \n\n";
        for( ;num>0;num=num/10){
            if(num%2==0){
                ce++;
                se=se+(num%10);
            }
            else{
                co++;
                so=so+(num%10);
            }
        }
        cout<<"Count of Odd Digits are -- "<<co<<endl;
        cout<<"Sum of Odd Digits are -- "<<so<<endl;
        cout<<"Count of Even Digits are -- "<<ce<<endl;
        cout<<"Sum of Even Digits are -- "<<se<<endl;

    }
};

int main()
{
    Ass2 a;
    a.GCD();
    a.CSEvenOdd();
}
