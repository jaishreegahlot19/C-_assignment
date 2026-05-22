#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
class Ass7
{
public:
    string s ;
    void get (string x)
    {
        s = x;
        cout<<"String is -- "<<s;
    }
    void reverseStringOnPositionWithFun()
    {
        string s1 ="",out = "";
        cout<<"\n\nShow Data in Reverse on Position - \n\n";
        stringstream x(s);
        while (x >> s1){
            reverse(s1.begin(),s1.end());
            out = out + s1 + " ";
        }
        cout<<"\n\nAfter Reverse Operation -- \n\n";
        cout<<out<<"\n\n";
    }
    void reverseStringOnPositionWithoutFun()
    {
        string s1="",s2="",out="";
        cout<<"\n\nShow Data in Reverse on Position Without - \n\n";
        stringstream x(s);
        while (x >> s1){
            for(int i=0;i<s1.length();i++){
                s2 = s1[i] +s2 ;
            }
            out = out + s2 + " ";
            s2 ="";
        }
        cout<<"\n\nAfter Reverse Operation -- \n\n";
        cout<<out<<"\n\n";
    }
    void reverseStringOnPositionWithoutFunPure()
    {
        string s1="",s2="",out="";
        cout<<"\n\nShow Data in Reverse on Position Without Function- \n\n";
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                s1 = s[i] +s1 ;
                if(i == s.length()-1){
                    out = out + s1;
                }
            }else {
                out = out + s1 + " ";
                s1 = "";
            }
        }
        cout<<"\n\nAfter Reverse Operation -- \n\n";
        cout<<out<<"\n\n";
    }
};
int main()
{
    Ass7 a;
    a.get("Hello My Name is Jaishree");
    a.reverseStringOnPositionWithFun();
    a.reverseStringOnPositionWithoutFun();
    a.reverseStringOnPositionWithoutFunPure();
}
