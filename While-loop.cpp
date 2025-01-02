#include<iostream>
using namespace std;

int main(){
    int number;

    cout<<"Enter Your Number:"<<endl;
    cin>>number;

    int i = 1;
    while(i <= 10){
        cout<<number<<"X"<<i<<"="<<number*i<<endl;
        i++;
    }
    
    return 0;
}