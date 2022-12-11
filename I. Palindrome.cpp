#include <iostream>
using namespace std;

int main()
{
     int n, num, digit, rev = 0;
     cin >> num;

     n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

  
     if (n == rev){
         std::cout << rev << std::endl;
         std::cout << "YES" << std::endl;
         
     }
        
     else{
         std::cout << rev << std::endl; 
         std::cout << "NO" << std::endl;
         
     }
         

    return 0;
}
