#include <iostream>

using namespace std;

double num1, num2;
char znak;
double result1, result2;

string stop;

void endResult (char znak, double result, double num1, double num2)
{
    cout<<"Wynik dzialania "<<num1<<" "<<znak<<" "<<num2<<" to: "<<result<<endl;
}

void input()
{
    cout<<"Aby przerwac dzialanie kalkulatora wpisz: stop, aby liczyc daliej nacisnij 1"<<endl;
    cin>>stop;
    cout<<"Podaj 1 liczbe: ";
    cin>>num1;
    cout<<"Podaj 2 liczbe: ";
    cin>>num2;
    cout<<"Podaj znak dzialania: ";
    cin>>znak;
}

void math()
{
    if(znak == '+')
    {
        result1 = num1+num2;
        endResult(znak, result1, num1, num2);

    }
    else if(znak == '-')
    {
        result1 = num1-num2;
        result2 = num2-num1;

        endResult(znak, result1, num1, num2);
        endResult(znak, result2, num2, num1);

    }
    else if(znak =='*')
    {
        result1 = num1*num2;
        endResult(znak, result1, num1, num2);
    }
    else if(znak == '/')
    {
        if(num2!=0 || num1!=0)
        {
            result1 = num1/num2;
            result2 =num2/num1;

            endResult(znak, result1, num1, num2);
            endResult(znak, result2, num2, num1);
        }
        else if(num2!=0)
        {
            result1 = num1/num2;
            endResult(znak, result1, num1, num2);

        }
        else if(num1!=0)
        {
            result2 = num2/num1;
            endResult(znak, result2, num2, num1);
        }
        else
        {
            cout<<"Nie wolno dzieliæ przez 0!";
        }
    }
}

void calculator()
{
    while(stop != "stop")
    {
        input();
        math();
    }
}

int main()
{
    calculator();
}
