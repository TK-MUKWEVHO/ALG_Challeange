#include <iostream>
#include <cstdlib>

using namespace std;



int main()
{
    int a=101,b=500,q=40;
     if((b-a+1)%q==0){
      for(int i=a;i <= b;i+=q){
        int value=(i+q-1);
        cout<<"Sum from "<<i <<" to "<<value<<": "<<(std::abs(i - value) + 1) * (i + value) / 2<<endl;
        cout<<"Sum from "<<a <<" to "<<value<<": "<<(std::abs(a - value) + 1) * (a + value) / 2<<endl; 
        cout<<endl;
      }
    }
    else{
       cout<<"Impossible"<<endl;
    }
    return 0;
}