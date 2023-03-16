#include <iostream>
#include <vector>>

using namespace std;

vector<char> container;
int counter;
char temp;

void input()
{
    cout<<"Podaj znak z klawiatury: "<<endl;
    do
    {
        cin>>temp;
        counter ++;
    }
    while(temp != 'x');

    cout<<"Podano: "<<counter<<" znakow"<<endl;
}

int main()
{
    input();
}
