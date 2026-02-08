//Q31. A manufacturing QC system checks defect codes divisible by both 3 and 5.
//Implement a solution to store 5 elements in an array and count how many numbers are divisible by 3 and 5.
#include<iostream>
using namespace std;
int main(){
    int array[5];
    int div=0;
    cout<<"ENTER 5 ELEMENTS";
    for(int i=0;i<5;i++)
    {
        cin>>array[i];
        if(array[i]%3==0&&array[i]%5==0)
        {
            div = div+1;
        }
    }
    cout<<div<<" NUMBERS ARE DIVISIBLE BY BOTH 3 AND 5";
    return 0;

    


}