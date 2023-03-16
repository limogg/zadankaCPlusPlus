#include <iostream>>

using namespace std;

int num;

void input()
{
    cout<<"Podja liczbe: ";
    cin>>num;
}

int math()
{
    if(num<0)
    {
        num --;
        return num;
    }
    else if (num>0)
    {
        num++;
        return num;
    }
    else if(num==0)
    {
        num=0;
        return num;
    }
}

void checkForEven()
{
    if (num%2==0)
    {
        cout<<"Liczba jest parzysta"<<endl;
    }
    else
    {
        cout<<"Liczba jest nieparzysta"<<endl;
    }
}

int main()
{
    input();
    math();
    cout<<"Nowa liczba to: "<<num<<endl;
    checkForEven();
}
