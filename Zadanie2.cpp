#include <iostream>

using namespace std;

int num1;

void check()
{
    cout<<"Podaj liczbe ktora chcesz sprawdzic pod kontem parzystosci: ";
    cin>>num1;

    if(num1%2 ==0)
    {
        cout<<"Parzysta";
    }
    else
    {
        cout<<"Nieparzysta";
    }
}


int main()
{
    check();
}
