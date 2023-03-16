#include <iostream>

using namespace std;

unsigned int a, b, c;
int sum;
int multipleTime;

int take()
{
    cout<<"Podaj trzy nieujemne liczby calkowite: "<<endl;
    cin>> a>> b >> c;

    if(a>b)
    {
        if (a>c)
        {
            sum = b+c;
            multipleTime = a;
        }
    }
    else if (b>a)
    {
        if (b>c)
        {
            sum = a+b;
            multipleTime = b;
        }
    }
    else if (c>a)
    {
        if (c>b)
        {
            sum = a+b;
            multipleTime = c;
        }
    }

    for(int i = 0; i < multipleTime; i++)
    {
        cout<<sum<<endl;
    }
}

int main()
{
    take();
}
