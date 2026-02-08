//que-26(lab manual)The school report card system stores subject marks for each student.
//Implement a solution to accept marks in 5 subjects, compute the total and percentage, and display the result.
#include<iostream>
using namespace std;
int main()
{
    float marks[5];
    float sum=0;
    cout<<"ENTER YOUR MARKS IN ALL 5 SUBJECTS";
    for(int i=0;i<5;i++)
    {
        cout<<"\nSUBJECT:"<<i+1;
        cin>>marks[i];
        sum=sum+marks[i];
    }
    float percentage = (sum/500)*100;
    cout<<"THE TOTAL IS "<<sum<<"\nTHE PERCENTAGE IS "<<percentage;
    return 0;
}