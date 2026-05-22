#include<iostream>
using namespace std;
class Ass26
{
public:
    int ARR[12];
    int POS , DATA , I , N;
    Ass26(int x)
    {
        N = x ;
        cout<<"\n\nPlease Enter Array Elements -- \n\n";
        for(I=0 ; I<N ; I++){
            cout<<"Element ["<<I+1<<"] -- ";
            cin>>ARR[I];
        }
        show();
        cout<<"\nEnter New Element for Insert -- ";
        cin>>DATA;
        top:
        cout<<"\nEnter Position between 0 to "<<N-1<<" -- ";
        cin>>POS;
        if(!(POS>=0 && POS<=N-1)){
            cout<<"\nEnter Valid Position -- \n\n";
            goto top;
        }
        insertModule();
    }
    void show()
    {
        cout<<"\nArray Element are -- \n\n";
        for(I=0 ; I<N ; I++){
            cout<<ARR[I]<<"  ";
        }
    }
    void insertModule()
    {
        for(I=N ; I>POS ; I--){
            ARR[I]=ARR[I-1];
        }
            ARR[POS]=DATA;
            N=N+1;
            cout<<"\n\nEnter Insertion of New Element -- ";
            show();
    }
};
int main()
{
    int N;
    cout<<"Enter Size of Array (1-10) -- ";
    cin>>N;
    if(N>=1 && N<=10){
        Ass26 d(N);
    }
    else{
        cout<<"\n\nPlease Enter Valid Size...\n\n";
    }
}
