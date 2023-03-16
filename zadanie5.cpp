#include <iostream>

using namespace std;

double a1, a2, a3, a4, a5;

double result;

void take()
{
    cout<<"podaj 4 liczb aby wykonaæ dzia³anie (((a1 + a2) * a3) - a4) / a5: "<<endl;;
    cin>>a1>>a2>>a3>>a4>>a5;
}

void math()
{
    result = (((a1 + a2) * a3) - a4) / a5;
    cout<<"Wynik dzialania to: "<<result;
}

int main()
{
    take();

    if(a5 == 0)
    {
        cout<<"Nie wolno dzielielic przez 0"<<endl;
        return 0;
    }
    math();
}
