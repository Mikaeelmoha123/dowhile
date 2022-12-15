#include <iostream>

using namespace std;

int main()
{
    string password,guess;
    password="Ducati";
    do {
        cout<<"password ";
        cin>>guess;
    }
    while(guess != password);
    
}