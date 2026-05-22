#include<iostream>
#include<string>
#include<sstream>
using namespace std;
class Ass6
{
    string s ;
public:
    void get(string x){
        s = x ;
        cout<<"String is -- "<<s<<"\n\n";
    }
    void ShowReverseWordsWith()
    {
        string s1 ="";
        string out = "";
        cout<<"\n\nShow Words in Reverse Format With function -- \n\n";
        for(int i = 0 ; i < s.length() ; i++){
            if (s[i] != ' '){
                s1 = s1 +s[i];
                if (i == s.length()-1){
                    s1.append(" ");
                    out.insert(0,s1);
                }
            }else{
                s1.append(" ");
                out.insert(0,s1);
                s1.clear();
            }
        }
        cout<<"After Reverse Operation String is -- \n\n";
        cout<<out<<"\n\n";
    }
    void showReversewordsWithStringStream()
    {
        string s1 = "";
        string out = "";
        cout<<"\n\nShow Words in Reverse Format With function -- \n\n";
        stringstream x(s);
        while ( x >> s1 ){
            out = s1 + " " + out ;
        }
        cout<<"After Reverse Operation String is -- \n\n";
        cout<<out<<"\n\n";
    }
    void showReverseWordsWithout()
    {
        string s1="", out = "";
        cout<<"\n\nShow Words in Reverse Format Without Function -- \n\n";
        for(int i = 0 ; i < s.length() ;i++){
            if ( s[i]!= ' '){
                s1 = s1 + s[i];
                if (i == s.length()-1)
                    out = s1 + " " + out;
            }else{
                s1.append(" ");
                out = s1 + out;
                s1="";
            }
        }
        cout<<"After Reverse Operation String is -- \n\n";
        cout<<out<<"\n\n";
    }
};

int main()
{
    Ass6 a;
    a.get("Hello My Name is Jaishree");
    a.ShowReverseWordsWith();
    a.showReversewordsWithStringStream();
    a.showReverseWordsWithout();
}
