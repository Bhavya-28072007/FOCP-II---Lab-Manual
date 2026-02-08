// Q8. A monitoring system generates a sequence of numeric event IDs from 1 to N.
// To make logs easier to analyse, the system applies tags to certain events based on predefined rules:
// • Events whose ID is divisible by 3 are tagged as “Buzz”
// • Events whose ID is divisible by 5 are tagged as “Fuzz”
// • Events divisible by both 3 and 5 receive both tags
#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER A NUMBER OF YOUR CHOICE:";
    int num;
    cin>>num;
    if(num%3==0)
    {
        cout<<"BUZZZZZZZZZ";
    }
    else if (num%5==0)
    {
        cout<<"FUZZZZZZZZZ";
    }
    else if(num%3==0&&num%5==0)
    {
        cout<<"BUZZZZZ FUZZZZZ";
    }
    else
    {
        cout<<"STARTTTT AGAINNNN";
    }
    return 0;
}