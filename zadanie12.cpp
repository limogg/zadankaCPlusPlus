#include <iostream>

using namespace std;

int i = -25;

void math()
{
    for(i; i<=25; i++)
    {
        if(i==0)
        {
            continue;
        }
        cout<<" "<<i;
    }
}

int main()
{
    math();
}
