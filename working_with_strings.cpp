#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string phrase = "Companion Champion";
    string phrasesub = phrase.substr(8 , 4);
    phrase[7] = 'S';
    cout << phrase.length() << endl;
    cout << phrase[5] << endl;
    cout << phrase << endl;
    cout << phrase.find("Champion" , 0) << endl;
    cout << phrase.substr(8 , 4) << endl;
    cout <<phrasesub << endl;
    return 0;
}