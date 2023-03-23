#include <iostream>
using namespace std;
double cube(double num)
{
    double result = num*num*num;
    return result; // we can also write the upper two lime in single code as "return num*num*num;"
    return num*num*num; // not going to print anything after return statement as it is the last statement 
}
int main()
{
   double answer= cube(6.0);
    cout<< answer << endl;
    cout<< cube(6.0);
    return 0;
}