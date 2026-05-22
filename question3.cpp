 #include<iostream>
 #include<iomanip>
 using namespace std;




 class Ass3
 {
 public:
     int N ,i ,j ,C ,S ,P ,PC ,TOT;
    void get()
    {
        C = N = 6;
        S = P = 1;
        PC = 0;
        TOT = (((N*(N+1))/2)*2)-1;
    }
    void Pattern()
    {
        for(i=1;i<=(N+N-1);i++){
            cout<<setw(S)<<setfill(' ')<<"";
            for(j=1;j<=C;j++,PC++){
                (PC<9 || PC>=(TOT-9))? cout<<P<<" ":(PC % 2 == 1)? cout<<"0 " : cout<<"9 ";
                P = (PC<9)?++P:(PC>=(TOT-10))?--P:P;
            }
            cout<<"\n";
            C = (i < N)? --C : ++C;
            S = (i < N)? ++S : --S;
        }
    }
 };

 int main()
 {
     Ass3 a;
     a.get();
         a.Pattern();
 }
