#include <iostream>
using namespace std;
 
int main()
{
     int n,f=0;
     std::cin >> n;
     for (int i=1;i<=n;i++) {
         if(n % i == 0){
            std::cout << i << std::endl; 
         }
     }
    
 
    return 0;
}
