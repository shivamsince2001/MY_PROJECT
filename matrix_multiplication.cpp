#include <iostream>
#include<climits>
using namespace std;

int main() {
    int row1,column1,row2,column2;
    cout<<"enter the size of the row 1:";
    cin>>row1;
    cout<<"enter the size of the column 1:";
    cin>>column1;
    int matx1[row1][column1];
    cout<<"enter the element of the matrix 1:\n";
    
for(int i=0;i<row1;i++) {
  for(int j=0;j<column1;j++){
    cin>>matx1[i][j];
  }
}
for(int i=0;i<row1;i++) {
  for(int j=0;j<column1;j++){
    cout<<matx1[i][j]<<" ";
  }cout<<endl;
}
cout<<"enter the size of the row 2:";
    cin>>row2;
    cout<<"enter the size of the column 2:";
    cin>>column2;
    int matx2[row2][column2];
    cout<<"enter the element of the matrix 2:\n";

for(int i=0;i<row2;i++) {
  for(int j=0;j<column2;j++){
    cin>>matx2[i][j];
  }
}
for(int i=0;i<row2;i++) {
  for(int j=0;j<column2;j++){
    cout<<matx2[i][j]<<"    ";
  }cout<<endl;
}
if(column1==row2)
{
   int mult[row1][column2];
   for(int i=0;i<row1;i++){
    for(int j=0;j<column2;j++) {
         mult[i][j] = 0;
         for(int k=0;k<column1;k++) {
            mult[i][j]+=matx1[i][k] * matx2[k][j];

         }
        }
    }
    cout<<"matrix multiplicaton:\n";
    for(int i=0;i<row1;i++){
    for(int j=0;j<column2;j++) {
   cout<<mult[i][j]<<" ";
    }cout<<endl;
} return 0;
}  
cout<<"multiplication is not possible";
}



    


    
