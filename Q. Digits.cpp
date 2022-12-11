#include <iostream>
using namespace std;
 
int main()
{
    
     int n, num, digit, rev = 0;
     int n1;
     cin >> n1;
     for(int i =1;i<=n1;i++){
         cin >> num;
     n = num;
    
 
     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
         std::cout << digit<<" ";
         
     } while (num != 0);
         cout <<"\n";
     }
     
 
     
    return 0;
}
