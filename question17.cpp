#include<iostream>
#include<string>
#include<sstream>

using namespace std;
int main()
{
    string s = "There are 12 chairs, 15 desks, 1 blackboard and 2 fans ";
    int n=0,sum =0;
    for(int i=0;i<s.length();i++){
        if(isdigit(s[i])){
            n = n * 10 + ((int)(s[i]))-48;
        }
        else {
            sum = sum + n;
            n=0;
        }
    }
    cout<<"Sum of all digit are -- "<<sum;
}
