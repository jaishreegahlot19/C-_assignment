#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Ass5
{
public:
    string s ;
    void get(string x){
        s = x ;
        cout<<"String is -- "<<s<<"\n\n";
    }
    void ShowWithfunction()
    {
        cout<<"\n\nShow With Function -- \n\n";
        for(int i = 0 ; i < s.length() ; i++){
            for(int j = 1 ; j <= s.length() - i ; j++){
                cout<<s.substr(i,j)<<"  ";
            }
        }
    }
    void ShowWithoutFunction()
    {
        cout<<"\n\nShow Without Function -- \n\n";
        string s1 ="";
        for(int i = 0 ; i < s.length() ; i++){
            s1 = "";
            for(int j = i ; j < s.length() ; j++){
                s1 = s1 + s[j];
                cout<<s1<<"  ";
            }
        }
    }

};
int main()
{
    Ass5 a ;
    a.get("DOG");
    a.ShowWithfunction();
    a.ShowWithoutFunction();
}
