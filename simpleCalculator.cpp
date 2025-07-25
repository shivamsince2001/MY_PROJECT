#include<iostream>
#include<climits>
#include<cmath>
#include<string>
using namespace std;
int main() {
    cout<<"1.add:\n 2.sub\n 3.mul\n 4.div\n";
    int choice;
    cout<<"enter the choice:";
    cin>>choice;
    if (choice>4){
        cout<<"error:"<<endl;
    } int n1,n2;
    cout<<"enter the element:"<<endl;
    cin>>n1>>n2;
    switch(choice){
        case 1: cout<<n1+n2<<endl;
        break;
        case 2: cout<<n1-n2<<endl;
        break;
        case 3: cout<<n1*n2<<endl;
        break;
        case 4: cout<<n1/n2<<endl;
        break;
        default: cout<<"invalid attempt:"<<endl;
    }
}



