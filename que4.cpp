//-4(lab manual)A shopkeeper wants to calculate the total bill amount after applying a 20% discount on the purchase.
//Implement a solution to accept item no., quantity, and unit price. Compute the amount and apply 20% discount.
#include<iostream>
using namespace std;
int main(){
    int item,quantity;
    float price;
    cout<<"ENTER THE ITEM NUMBER,QUANTITY AND UNIT PRICE RESPECTIVELY:";
    cin>>item>>quantity>>price;
    float total = quantity*price;
    float discount = total*0.2;
    cout<<total-discount<<" is the amount after applying discount";
    return 0;
}
