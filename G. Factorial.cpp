#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long fac =1;
    for (int i=1; i <= n ;i++){
       int num;
       cin >> num;
       for(int j = 1 ; j <= num ; j++){
           fac= fac*j;
          
       }
       cout<<fac<<"\n";
       fac =1;
    }
    
   
    return 0;
}
