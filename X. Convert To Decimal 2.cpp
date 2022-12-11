// X. Convert To Decimal 2
#include <bits/stdc++.h>
using namespace std;
 
long long Convert_To_Binary_And_count_ones(long long Decimal_number){
   long long number_of_ones=0;
    
    while(Decimal_number > 0){
        
        if(Decimal_number % 2 == 1){
            number_of_ones++;
        }
        Decimal_number = Decimal_number/2;
    }
    return number_of_ones;
    
}
 
int main()
{
    int number;
    long long num;
    std::cin >> number;
    for (int i = 0; i <  number; i++) {
        cin >> num;
        long long c = Convert_To_Binary_And_count_ones(num);
        long long sum = 0;
        for (int j = 0; j <c; j++) {
           sum = sum + (1 * pow(2,j)); 
        }
        std::cout << sum << std::endl;
    }
    
 
    return 0;
}
