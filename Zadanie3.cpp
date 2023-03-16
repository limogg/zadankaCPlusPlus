#include <iostream>

using namespace std;

int num1;

void check()
{
    cout<<"Podaj liczbê aby sprawdziæ czy jest podzielna przez 3 i/lub przez 5: ";
    cin>>num1;

    if(num1 % 3 == 0)
    {
        if (num1 % 5 == 0)
        {
            cout<<"Twoja liczba jest podzielna przez 3 i 5";
        }
        else
        {
            cout<<"Twoja liczba jest podzielna przez 3";
        }
    }

    else if(num1 % 5 == 0)
    {
        cout<<"Twoja liczba jest podzielna przez 5";
    }
    else
    {
        cout<<"Twoja liczba nie jest podzielna przez 3 i 5";
    }

}

int main()
{
    check();
}
