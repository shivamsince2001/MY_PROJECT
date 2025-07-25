#include<iostream>
#include<vector>
using namespace std;
int main() {

int n,m,r,rev=0;
cout<<"enter the n:";
cin>>n;
m=n;
while(n!=0) {
   r=n%10;
   n=n/10;
   rev=rev*10+r;
}
while(rev>0) {
   r=rev%10;
   rev=rev/10;

switch(r) {
   case 0: cout<<"zero";
   break;
   case 1: cout<<"one";
   break;
   case 2: cout<<"two";
   break;
   case 3: cout<<"three";
   break;
   case 4: cout<<"four"<<endl;
   break;
   case 5: cout<<"five"<<endl;
   break;
   case 6: cout<<"six"<<endl;
   break;
   case 7: cout<<"seven"<<endl;
   break;
   case 8: cout<<"eight"<<endl;
   break;
   case 9: cout<<"nine"<<endl;
   break;
   
} 
} cout<<endl<<endl;
}
