#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
    string pass = "Tejasvi@1234";
    bool uc , lc , ss , pl , dig , sp;
    uc = lc = ss = pl = dig = sp = false;
    pl = (pass.length() >= 8) ? true : false;
    for( int i = 0 ; i < pass.length() ; i++){
        if ( isupper(pass[i]))
            uc = true;
        else if ( islower(pass[i]))
            lc = true;
        else if ( isdigit(pass[i]))
            dig = true;
        else if ( ispunct(pass[i]))
            ss = true;
        else if ( isspace(pass[i]))
            sp = true;
    }
     if(uc && lc && ss && pl && dig && !sp){
        cout<<"Password is Perfect";
     }
     else
        cout<<"Password is not Perfect";
}

