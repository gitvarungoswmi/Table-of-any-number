#include<iostream>
using namespace std;

int main(){
    int number;

    cout<<"Enter Your Number:"<<endl;
    cin>>number;

    int i=1;
    do{
        cout<<number<<"X"<<i<<"="<<number*i<<endl;
        i++;
    } while(i<=10);

    return 0;
}