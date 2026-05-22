#include<iostream>
#include<conio.h>
using namespace std;
class ass27
{
public:
        int ARR[12];
    int I , N ;
    ass27(int x)
    {
        N = x ;
        cout<<"\n\nPlease Enter Array Elements -- \n\n";
        for(I=0 ; I<N ; I++){
            cout<<"Element ["<<I+1<<"] -- ";
            cin>>ARR[I];
        }
        show();
        cout<<"\n\nChoose the Following Sort Types:-\n";
        cout<<"1.Selection Sort\n";
        cout<<"2.Bubble Sort\n";
        cout<<"3.Exit\n";
        char c = getch();
        if (c == '1'){
            SelectionSort();
        }else if (c == '2'){
            BubbleSort();
        }else if (c == '3')
            exit(0);
    }
    void show()
    {
        cout<<"\nArray Element are -- \n\n";
        for(I=0 ; I<N ; I++){
            cout<<ARR[I]<<"  ";
        }
    }
    void SelectionSort()
    {
        int i , j , t;
        for(i = 0 ; i < N ; i++){
            for(j = i+1 ; j < N ; j++){
                if(ARR[i] > ARR[j]){
                    t = ARR[i];
                    ARR[i] = ARR[j];
                    ARR[j] = t ;
                }
            }
        }
        cout<<"\nAfter Sorting Array Element are -- \n\n";
        for(I=0 ; I<N ; I++){
            cout<<ARR[I]<<"  ";
        }
    }
    void BubbleSort()
    {
        int i , j , t ;
        for(i = 0 ; i < N-1 ; i++){
            for(j = i+1 ; j < N-1 ; j++){
                if(ARR[j] > ARR[j+1]){
                    t = ARR[j];
                    ARR[j] = ARR[j+1];
                    ARR[j+1] = t ;
                }
            }
        }
        cout<<"\nAfter Sorting Array Element are -- \n\n";
        for(I=0 ; I<N ; I++){
            cout<<ARR[I]<<"  ";
        }
    }
};
int main()
{
    int N;
    cout<<"Enter Size of Array (1-10) -- ";
    cin>>N;
    if(N>=1 && N<=10){
        ass27 d(N);
    }
    else{
        cout<<"\n\nPlease Enter Valid Size...\n\n";
    }
}
