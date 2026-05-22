#include<iostream>
#include<conio.h>
using namespace std;
class Ass4
{
public:
    int N , i ,sum;
    void get()
    {
        cout<<"Input the Value for Nth Term --";
        cin>>N;
        sum = 0;
    }
    void Series1()
    {
        cout<<"Series 1 IS --- \n\n";
        for(i=1;i<=N;i++){
            cout<<i<<" * "<<i<<" = "<<(i*i)<<endl;
            sum=sum+(i*i);
        }
        cout<<"\n\nSum of Above Series -- "<<sum<<"\n\n";
    }
    void Series2()
    {
        int s=0,j;
        cout<<"\nSeries 2 IS --- \n\n";
        for(i=1 ; i<=N ; i++){
            for(j=1 , s=0 ; j<=i ; j++){
                cout<<j<<" + ";
                s = s + j;
            }
            cout<<"\b\b= "<<s<<endl;
            sum = sum + s;
        }
        cout<<"\n\nSum of Above Series -- "<<sum<<"\n\n";

    }
};

int main()
{
    system("cls");
    Ass4 s1 ,s2;
    cout<<"Program for Series Printing -- \n\n";
    cout<<"1.Series 1 \t2.Series 2 \t3.Exit\n";
    char c = getch();
    if(c == '1'){
        s1.get();
        s1.Series1();
    }
    else if (c == '2'){
    s2.get();
    s2.Series2();
    }
    else if (c == '3'){
        exit(0);
    }
    cout<<"Do ypu want to Continue ..  Press 1 Else any Key --\n\n";
    c=getch();
    if(c == '1'){
        main();
    }
}
