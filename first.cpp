// #include<iostream>

// int main(){
//     int marks1,marks2,marks3;
//     std::cout<<"ENTER MARKS1,MARKS2,MARKS3:";
//     std::cin>>marks1>>marks2>>marks3;
//     std::cout<<"\nMarks1:"<<marks1<<"\nMarks2:"<<marks2<<"\nMarks3:"<<marks3<<"\ntotal is "<<marks1+marks2+marks3;
//     return 0;
// }

// #include<iostream>
// int main(){
//     std::string name;
//     std::cin>>name;
//     std::cin.ignore();
//     std::cout<<name;
//     //getline(std::cin,name);
//     //std::cout<<name;
//     return 0;


// }


//STRING HANDLING 
#include<iostream>
using namespace std;
int main(){
    string batch ="MY NAME IS BHAVYA AND MY BIRTH DATE IF 28 JULY 2007";
    int vowels=0,number=0;
    for(int i=0;i<batch.length();i++)
    {
        char ch = batch[i];
        if(ch=='A'||ch=='E'|| ch=='I'||ch=='O'||ch=='U')
        {
            vowels++;
        }
        else if(ch>='0'&&ch<='9')
        {
            number++;
        }
    }
     cout<<"number of vowels are "<<vowels<<"\nnumber of numbers are "<<number;
        return 0;



}