#include<iostream>
using namespace std;
int main()
{
int secretnum=14;
int guess;
int guesslimit=3;
int guesscount=0;
bool outofguesses= false;
while (secretnum!=guess && !outofguesses)
{
    if (guesscount < guesslimit){
        cout<<"Enter a guess";
        cin >> guess;
        guesscount++;
    }
    else{
        outofguesses= true;
    }
}

    if(outofguesses)
    {
        cout<< "You lose!";
    }
    else
    {
        cout<< "You win!";
    }

    
    return 0;
}