#include<iostream>
using namespace std;
float si(int p,int t,float r=15){
    return (p*t*r)/100;
}
int main(){
    int a,b;
    cout<<"Enter the principle amount: "<<endl;
    cout<<"Enter the time in years: "<<endl;
    cin>>a>>b;
    cout<<"Do you want to change the interest rate(y/n): "<<endl;
    char y,key;
    cin>>key;
    float c;
    if(key=='y'){
        cout<<"Enter the interest rate: "<<endl;
        cin>>c;
        cout<<"The total interest is: "<<si(a,b,c);
    }
    else{
        cout<<"The total interest is: "<<si(a,b);
    }
    return 0;
}