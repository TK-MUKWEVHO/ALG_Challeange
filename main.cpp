#include <iostream>
#include <cstdlib>
using namespace std;

class Class{
    public:
        void sum(int a,int b,int q);
        
};

void Class::sum(int a,int b,int q){
    if((b-a+1)%q==0){
            for(int i=a;i <= b;i+=q){
              int value=(i+q-1);
                cout<<"Sum from "<<i <<" to "<<value<<": "<<(std::abs(i - value) + 1) * (i + value) / 2<<endl;
                cout<<"Sum from "<<a <<" to "<<value<<": "<<(std::abs(a - value) + 1) * (a + value) / 2<<endl; 
                cout<<endl;
             }
        }else{
          cout<<"Retry Again"<<endl;
      }
}

int main()
{
    int a,b,q;
    Class myClass; 
    
    cout<<"Enter Number A B Q"<<endl;
    cin>>a>>b>>q;
    
    myClass.sum(a,b,q);

    return 0;
}
