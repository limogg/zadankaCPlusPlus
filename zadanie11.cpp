#include <iostream>

using namespace std;

void whileLoop()
{
    int i=100;
    while(i>=10)
    {
        if(i%7==0)
        {
            i--;
            continue;
        }

        cout<< " While: "<<i;
        i--;
    }
}

void forLoop()
{
    int i=100;

    for(i; i>=10; i--)
    {
        if(i%7==0)
        {
            continue;
        }
        cout<< " for: "<<i;
    }
}

void doLoop()
{
    int i=100;
    do
    {
        if(i%7==0)
        {
            i--;
            continue;
        }

        cout<< " do: "<<i;
        i--;
    }
    while(i>=10);
}

int main()
{
    whileLoop();
    forLoop();
    doLoop();
}
