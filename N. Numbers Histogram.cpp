#include <iostream>
using namespace std;
 
int main()
{
     char c;
     std::cin >> c;
     int n;
     std::cin >> n;
     
     for (int i=1;i<=n;i++) {
         int nums;
         cin >> nums;
         for(int j=1;j<=nums;j++){
             std::cout << c ;
         }
         cout <<"\n";
     }
     
     
    return 0;
}
