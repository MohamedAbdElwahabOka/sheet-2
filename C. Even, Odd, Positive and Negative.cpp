#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int even=0;int odd=0;int Positive =0;int Negative=0;
    for(int i=1;i<=n;i++){
        int num ;
        cin>>num;
        
        if(num % 2 == 0){
            even++;
        }else{
            odd++;
        }
        if(num >0){
            Positive++;
            
        }else if(num < 0){
            Negative++;
        }
    }
    cout<<"Even: "<<even<<"\n";
      cout<<"Odd: "<<odd<<"\n";
        cout<<"Positive: "<<Positive<<"\n";
          cout<<"Negative: "<<Negative<<"\n";
    
   

    return 0;
}
