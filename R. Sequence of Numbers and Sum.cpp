/******************************************************************************
 
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
 
*******************************************************************************/
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int N , M ;
    while(std::cin >> N >> M){
        
    
    int big = 0;
    int small =0;
    long long sum =0;
    
        /* code */
    
    if(N <= 0 || M <= 0){
        return 0;
    }else{
        if(N > M ){
        big = N;
        small = M;
    }else{
        big = M;
        small = N;
    }
    for (int i = small; i <= big; i++) {
        std::cout << i <<" ";
        sum = sum + i;
    }
    cout<<"sum ="<<sum<<"\n";
    }
    }
 
    return 0;
}
