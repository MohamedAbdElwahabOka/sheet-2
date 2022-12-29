#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int is_luky_num(int num){

    int last = 0;
    int coutt = 0;
    int num2 = num;
    int length = to_string(num).length();
  for (int i = 0; i <= to_string(num).length(); i++) {
      last = num % 10;
      num = num / 10;
      if(last == 4 || last == 7){
          coutt++;
      }

  }
  if(num == 4 || num == 7){
      coutt++;
  }
  if(coutt == length){
      return 1;
  }else{

  }
  return 0;
}
int main()
{
   
    int x  = 0;
    int c=0;
    int A , B;
    std::cin >> A >> B;
  
    for (int i = A ; i <= B; i++) {

       if(is_luky_num(i) == 1){
           cout<< i << " ";
            c++;
       }
    }
    if(c == 0){
         cout<< -1 ;
    }



    return 0;
}
