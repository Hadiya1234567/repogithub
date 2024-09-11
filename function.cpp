#include <iostream>
using namespace std;
/*
int fib(int n){
    if(n==0||n==1){
        return n;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
int main(){
    int x,i=0;
    cout<<"enter terms:";
    cin>>x;
    while(i<x){
        cout<<fib(i);
        i++;
    }
    return 0;
}
*/
/*
int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int num=3;
    cout<<"factorial of num:"<<fact(num);
    return 0;
}*//*
void print(int n,int num){
if(num>n){
return;
}
cout<<num;
print(num+1,n);
}
int main(){
int n=5;
print(1,n);
}

return 0;
}*/

int sum(int n){
    if(n>0)
{
    return n+sum(n-1);
}
else{
    return 0;
}
}
int main(){
    int res=sum(10);
    cout<<res;
    return 0;
}