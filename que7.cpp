// Q7. A game compares three players' scores to find who is ahead. Implement a solution to accept three scores
// and identify the winner.
#include<iostream>
using namespace std;
int main(){
    cout<<"GIVE THE SCORE OF THE FOLLOWING PLAYERS";
    int player1,player2,player3;
    cout<<"\nPLAYER-1:";
    cin>>player1;
    cout<<"\nPLAYER-2:";
    cin>>player2;
    cout<<"\nPLAYER-3:";
    cin>>player3;
    if(player1>player2&&player1>player3)
    {
        cout<<"THE WINNER IS PLAYER-1";
    }
    else if(player2>player3&&player2>player1)
    {
        cout<<"THE WINNER IS PLAYER-2";
    }
    else{
        cout<<"THE WINNER IS PLAYER-3";
    }
    return 0;


}

