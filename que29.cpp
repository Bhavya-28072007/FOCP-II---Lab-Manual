//Q29. A weather monitoring app records 30-day temperature logs. Implement a solution to store daily
//temperatures in an array and display the minimum temperature for the month.
#include<iostream>
using namespace std;
int main(){
    int temp[30];
    cout<<" ENTER TEMP. OF 30 DAYS";
    for(int i=0;i<30;i++)
    {
        cin>>temp[i];
    }
    int min = temp[0];
    for(int i=0;i<30;i++)
    {
        if(temp[i]<min)
        {
            min = temp[i];
        }
    }
    cout<<"THE MINIMUM TEMPERATURE IS : "<<min;
    return 0;
}