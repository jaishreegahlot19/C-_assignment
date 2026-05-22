#include<iostream>
#include<string>
using namespace std;
class Ass63
{
public:
    int n , t , l ,*arr;
    void get()
    {
        cout<<"Enter a Number - ";
        cin>>n;
        t = n ;
        l = to_string(n).length();
        arr = new int[l];
        for(int i = l-1 ; i >= 0;i-- , t = t /10)
            arr[i] = t%10;
        t = 0 ;
    }
    void swapData()
    {
        for(int i = 0 ; i < l-1 ; i+=2){
            int x = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = x ;
        }
        for(int i = 0 ; i < l ; i++)
        {
            t = t * 10  +  arr[i];
        }
    }
    void show()
    {
        cout<<"After Swapping of Index Elements Answer Will be -- \n\n";
        cout<<"Before -- "<<n<<"\n\n";
        cout<<"After -- "<<t<<"\n\n";
    }
};
int main()
{
    Ass63 d;
    d.get();
    d.swapData();
    d.show();
}
