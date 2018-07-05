#include<iostream>
#include<math.h>
using namespace std;

int main()
{
       long long int T;
        cin>>T;
   while(T>0)
       {
            long long int n;
             cin>>n;
           long long int m=5;
           long long int counter=0;
           while(m<=n)
              { counter = counter + (n/m);
                  m = m*5; 
               }
          cout<<counter;
           T=T-1 ;
              cout<<endl; 
         }
return 0;
}

