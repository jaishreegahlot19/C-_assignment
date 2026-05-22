#include<iostream>
using namespace std;
class ASS25
{
public:
    int ARR[12];
    int I , N;
    ASS25(int x)
    {
        N = x ;
        cout<<"\n\nPlease Enter Array Elements -- \n\n";
        for(I=0 ; I<N ; I++){
            cout<<"Element ["<<I+1<<"] -- ";
            cin>>ARR[I];
        }
        show();
        SecondMax();
    }
    void show()
    {
        cout<<"\nArray Element are -- \n\n";
        for(I=0 ; I<N ; I++){
            cout<<ARR[I]<<"  ";
        }
    }
    void SecondMax()
    {
        int max1=0;
        int max2=0;
        for(I=0 ; I<N ; I++){
            if(ARR[I] > max1){
                max2 = max1;
                max1 = ARR[I];
            }
            else if(ARR[I]<max1 && ARR[I]>max2){
                max2 = ARR[I];
            }
        }
        cout<<"\n\nSecond Maximum is --"<<max2;
    }
};
int main()
{
    int N;
    cout<<"Enter Size of Array (1-10) -- ";
    cin>>N;
    if(N>=1 && N<=10){
        ASS25 d(N);
    }
    else{
        cout<<"\n\nPlease Enter Valid Size...\n\n";
    }
}


