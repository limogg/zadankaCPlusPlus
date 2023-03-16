#include <iostream>

using namespace std;

char a;

void check()
{
    if(a =='a' || a=='e' || a=='i' || a== 'o' || a=='u' || a=='y')
    {
        cout<<"Jest to samogloska";
    }
    else if(a>= 48 && a<= 48 + 9)
    {
        cout<<"Jest to liczba";
    }
    else
    {
        cout<<"Jest to spolgloska";
    }
}

int main()
{
    check();
}
