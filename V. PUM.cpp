#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    std::cin >> n;
    int c =1;
    for(int i = 1;i<=n;i++){
        if(c % 4 == 0){
            c++;
            i--;
          
        }else{
             cout<<c++<<" "<<c++<<" "<<c++<<" PUM"<<"\n";
        }
        
    }
   
 
    return 0;
}
