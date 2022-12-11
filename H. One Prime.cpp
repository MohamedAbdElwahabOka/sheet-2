#include <iostream>
//H. One Prime.cpp
using namespace std;

int main()
{
    int n,f=0;
    std::cin >> n; //50
    int v= n/2;  // 50/2 = 25
    for (int i =2;i <= v;i++) {
        if(n % i == 0){
            std::cout << "NO" << std::endl;
            f=1;
            break;
        }
        
    }
    if(f == 0){
        cout<<"YES";
    }
    
   

    return 0;
}
