#include<iostream>
using namespace std;
int main()
{
    string s="iTsabeaTifUIwoRld";
    int n= s.size();
    cout<< "size of the string= " << n << endl;
    cout<< "String before operation= " << s <<endl;
    for (int i=0;i<=n;i++)
    {
        if (isupper(s[i])== true)
        
            s[i]= tolower(s[i]);
            else
            s[i]= toupper(s[i]);
    }
            

          
        cout<< "String after operation= " << s << endl;
            
            return 0;
    }