//Q32. A stock market app tracks first and second highest stock values. Implement a solution to find the largest
//and second largest number in an array of size 5.
#include<iostream>
using namespace std;
int main(){
    int array[5];
    cout<<"ENTER 5 STOCK VALUES";
    for(int i=0;i<5;i++)
    {
        cin>>array[i];
    }
    int max=array[0];
    for(int i=0;i<5;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    cout<<"THE MAXIMUM STOCK VALUE IS:"<<max;
    //second largest 
    int large;
    if(array[0]==max)
    {
        large = array[1];
    }
    else
    {
         large = array[0];
    }
    for(int i=0;i<5;i++)
    {
       if(array[i]==max)
       {
        continue;
       }
       else{
        if(array[i]>large)
        {
            large = array[i];
        }
       }
    }
    cout<<"\n/THE SECOND LARGEST NUMBER IS:"<<large;
    return 0;
    

}