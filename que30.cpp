//Q30. A payroll system maintains employee salary records. Implement a solution to accept salary of
//10 employees in an array, compute total salary and average salary, then display the result.
#include<iostream>
using namespace std;
int main(){
    int salary[10];
    int sum=0;
    cout<<"ENTER THE SALARIES OF 1O EMPLOYEES";
    for(int i=0;i<10;i++)
    {
        cout<<"EMPLOYEE:"<<i+1;
        cin>>salary[i];
        sum=sum+salary[i];
    }
    float avg = (float)sum/10;
    cout<<"THE TOTAL:"<<sum<<"\nTHE AVG SALARY:"<<avg;
    return 0;
}