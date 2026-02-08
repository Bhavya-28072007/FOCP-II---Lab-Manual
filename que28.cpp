//que-28 (lab manual)A data processing system classifies even and odd inputs separately. Implement a solution to
//store 5 elements in an array, compute sum of all even and sum of all odd numbers.
#include<iostream>
using namespace std;
int main(){
    int num[5];
    int odd=0,even=0;
    cout<<"ENTER ANY 5 NUMBERS";
    for(int i=0;i<5;i++)
    {
        cin>>num[i];
    }
    for(int i=0;i<5;i++)
    {
        if(num[i]%2==0)
        {
            even=even+num[i];
        }
        else{
            odd=odd+num[i];
        }
    }
    cout<<"SUM OF EVEN NUMBERS:"<<even;
    cout<<"\nSUM OF ODD NUMBERS:"<<odd;
    return 0;

}
