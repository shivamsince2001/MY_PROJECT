#include <iostream>
#include<cmath>
using namespace std;

int main() {
int row1,column1,row2,column2;
cout<<"enter the size of the row1";
cin>>row1;
cout<<"enter the size of the column1";
cin>>column1;
int matx1 [row1][column1];
cout<<"enter the first matrix element";
for(int i=0;i<row1;i++) {
  for(int j=0;j<column1;j++){
    cin>>matx1[i][j];

  }cout<<endl;
}
cout<<"first matrix element : \n";
for(int i=0;i<row1;i++) {
  for(int j=0;j<column1;j++){
    cout<<matx1[i][j]<<" ";

  }cout<<endl;
}
cout<<"enter the size of the row2";
cin>>row2;
cout<<"enter the size of the column2";
cin>>column2;
int matx2 [row2][column2];
cout<<"enter the second matrix element";
for(int i=0;i<row2;i++) {
  for(int j=0;j<column2;j++){
    cin>>matx2[i][j];

  }cout<<endl;
}
cout<<"second matrix element : \n";
for(int i=0;i<row2;i++) {
  for(int j=0;j<column2;j++){
    cout<<matx2[i][j]<<" ";

  }cout<<endl;
}
if(row1==row2 && column1==column2) {
  int sum [row1][column2];
  for(int i=0;i<row1;i++) {
  for(int j=0;j<column2;j++){
    sum[i][j]=matx1[i][j]+matx2[i][j];
  } 
} cout<<"sum of the matrix is:\n ";
for(int i=0;i<row1;i++) {
  for(int j=0;j<column2;j++){
    cout<<sum[i][j]<<" ";
  } cout<<endl;
} return 0;
} else cout<<"addition is not possible";
}