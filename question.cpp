#include<iostream>
using namespace std;
int main(){
    /*
int i,j,temp;
int arr[]={1,2,3,4,5};
for(i=4;i>=0;i--){
    cout<<arr[i];
}
*//*
int i;
int arr[5]={1};
for(i=0;i<5;i++){
    cout<<arr[i];
}*//*
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int i,j;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cout<<arr[i][j];
    }
}*//*
int arr[4][2]={{1,2},{3,6},{4,8},{5,10}};
int i,j;
for(i=0;i<4;i++){
    for(j=0;j<2;j++){
        cout<<arr[i][j];
    }
}*/

int a1[50][50];
int a2[50][50];
int a3[50][50];
int r,c,i,j;
cout<<"enter no of rows and column:";
cin>>r>>c;
cout<<"enter elements of first matrix:";
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        cout<<"enter element of a1"<<" "<<i+1<<j+1<<":";
        cin>>a1[i][j];
    }
}
cout<<"enter elements of second matrix:";
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        cout<<"enter element of a2"<<" "<<i+1<<j+1<<":";
        cin>>a2[i][j];
    }
}
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        a3[i][j]=a1[i][j]+a2[i][j];
    }
}
cout<<"sum of two matrices:";
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        cout<<a3[i][j]<<" ";
    }
}
return 0;
}





