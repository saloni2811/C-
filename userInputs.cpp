#include <iostream>
#include <string>
using namespace std;
int main()
{
    string colour, pluralNoun , loverName;
    cout<< "Enter a colour: ";
    getline(cin, colour);
    cout<< "Enter a pluralNoun: ";
    getline(cin, pluralNoun);
    cout<< "Enter a loverName: ";
    getline(cin, loverName);
    cout<< "Roses are " << colour << "." << endl;
    cout<< pluralNoun << " are blue." << endl;
    cout<< "I love you " << loverName << "!" << endl;
return 0;
    

}