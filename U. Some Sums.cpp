#include <iostream>
using namespace std;

int main()
{
    int num1 ,num2, num3;
    std::cin >> num1 >> num2 >> num3;
     long long sum = 0;
    for(int i=1;i<=num1;i++){
        if(i / 10 == 0){
            if(i >= num2 && i <= num3){
                sum +=i;
            }
        }else{
            int n = i;
            int suum = 0;
            while(n){
                int d = n % 10;
                suum  = suum + d;
                n/=10;
            }
            if( suum >= num2 && suum <= num3){
                sum +=i ;
            }
           
        }
        
    }
    
    

std::cout << sum  << std::endl;


   return 0; 
}
