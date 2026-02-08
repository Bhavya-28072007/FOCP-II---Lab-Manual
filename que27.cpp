//que-27 (lab manual)A supermarket software maintains item price lists. Implement a solution to store the prices of 10
//items in an array and display the maximum price.
#include<iostream>
using namespace std;
int main(){
    int price[10];
    cout<<"ENTER THE PRICE OF ALL 10 ITEMS:";
    for(int i=0;i<10;i++)
    {
        cout<<"\nITEM "<<i+1;
        cin>>price[i];
    }
    int max=price[0];
     for(int i=0;i<10;i++)
    {
        if(price[i]>max)
        {
            max = price[i];
        }
    }

    cout<<"THE MAXIMUM PRICE IS: "<<max;
    return 0;

}