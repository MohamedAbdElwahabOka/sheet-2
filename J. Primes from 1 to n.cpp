 
#include <bits/stdc++.h>

using namespace std;

int prime(int num){
    
   
 		//10   // 2 3 5 7 
  int dive = num / 2;
  for (int i = 2; i <= dive; i++)
    {

      if (num % i == 0)
	{
	 
     return -1;
	 
	}

    }
    return num;
  
}
int main (){
    int num1 ;
    std::cin >> num1;
    for (int i = 2; i <= num1; i++) {
        if(prime(i) != -1){
            std::cout << prime(i)<< " ";
        }
    }
  

  return 0;
}
 
