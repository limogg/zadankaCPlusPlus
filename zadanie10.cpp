#include <iostream>

using namespace std;



void whileloop()
{
    int i=0;

    while(i <=100)
    {
        cout<<"While: "<<i<<endl;
        i++;
    }
}

void doLoop()
{
    int i=0;

    do
    {
        cout<<"Do: "<<i<<endl;
        i++;
    }
    while(i<=100);
}

void forLoop()
{
    int i=0;

    for(i; i<=100; i++)
    {
        cout<<"For: "<<i<<endl;
    }
}

int main()
{
    whileloop();
    doLoop();
    forLoop();
}
