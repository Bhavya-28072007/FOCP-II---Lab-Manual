//que-3(lab manual)
#include<iostream>
int main(){
    int option;
    std::cout<<"TO CONVERT CELSIUS TO FARHENEIT PRESS '1' OR TO CONVERT FARHENEIT TO CELSIUS PRESS '2' ";
    std::cin>>option;
    float number;
    std::cout<<"ENTER THE NUMBER U WANT TO CONVERT";
    std::cin>>number;
    if(option==1)
    {
        std::cout<<(number*1.8)+32<<" is the temp. in farheneit";
    } 
    else{
        std::cout<<(number-32)*0.55<<" is the temp. in celsius";
    }
    return 0;
}

