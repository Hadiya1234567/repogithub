#include<iostream>
using namespace std;
/*
int main()
{
    int a=0,b=1,c,n,i;
    cout<<"enter value of n:";
    cin>>n;
    cout<<"fibonacci series:";
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            cout<<a<<" , ";
            continue;
        }
        if(i==2){
            cout<<b<<" , ";
            continue;
        }
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" , ";
    }
    
    
    return 0;
}
int main()
{
    int a=0,b=1,c,i,n=10;
    cout<<a<<endl<<b<<endl;
    for(i=2;i<10;i++)
    {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
    return 0;
} */
/*
int main()
{
    int number,flag=0;
    cout<<"enter number:";
    cin>>number;
    if(number==0||number==1)
    {
        cout<<"not prime no";
    }
    if(number==2)
    {
        cout<<"prime no";
    }
    
        for(int i=2;i<=number/2;i++)
        {
           if(number%i==0)
           {
            cout<<"not prime no";
            flag=1;
            break;
        
           }
           
        }
        if(flag==0)
        {
            cout<<"prime no";
        }
        cout<<endl;
return 0;
}
*/

int main(){
    int arr[5]={1,2,3,4,5};
    int x;
    cout<<"enter any value:";
    cin>>x;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]+arr[j]==x){
                cout<<arr[i]<<arr[j];
            }
            
        }
    }
    return 0;
}
