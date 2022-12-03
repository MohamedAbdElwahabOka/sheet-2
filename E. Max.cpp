#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int max=0;
    for(int i=1;i<=n;i++){
        int num;
        cin>>num;
        if( i == 1 ){
            max=num;
        }
        
        if(num > max){
            max=num;
        }
    }
   std::cout << max << std::endl;
    
    return 0;
}
