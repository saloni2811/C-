#include <iostream>
using namespace std;
void sayHi() // will not print codes written in this function
{
    cout<< "Hi everyone";
}
void saloni(string name , int age) // will print what is being called to the main function
{
    cout << "hi " << name << endl << "you are " << age ; // will print the output
} 
int main()
{
    saloni("Saloni!", 20); // calling of the function
    return 0;
}