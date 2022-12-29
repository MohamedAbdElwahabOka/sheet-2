#include <iostream>

using namespace std;

int main()
{
   int num1 ,num2,c=0;
   cin>> num1 >> num2;
   for (int i = 0; i <= num1; i++) {
       for (int j = 0; j <= num1; j++) {
           if(num2-i-j <= num1 && num2-i-j >= 0)
           c++;
       }
   }
   std::cout << c << std::endl;
    return 0;
}
