#include<iostream>
using namespace std;

int main(){
    int number;
    
    cout<<"Enter the number:"<<endl;
    cin>>number;

    // Initialization of i
    for(int i=1; i<=10; i++) {
        cout<<number<<"X"<<i<<"="<<number*i<<endl;
    }
    return 0;
}  