#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    std::cin >> n;
    for(int i=1;i<=n;i++){
        int num1,num2;
        cin >> num1 >> num2;
        int small,big;
        
        if(num1 > num2){
            small = num2;
            big = num1;
        }else{
            small = num1;
            big = num2;
        }
        int sum =0;
        for(int i = small+1;i<big;i++){
            if(i % 2 != 0){
                sum = sum+i;
            }
        }
        cout << sum <<"\n";
        
    }
 
    return 0;
}
