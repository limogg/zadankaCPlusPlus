#include <iostream>

using namespace std;


int main()
{
    int i=1;
    int podzielne;
    int niepodzielne;

    for(i; i<=120; i++)
    {
        if(i%11==0 && i%5==0)
        {
            podzielne++;
            continue;
        }
        niepodzielne++;

        cout<<i<<" ";
    }

    cout<<"Podzielne: "<<podzielne<<endl;
    cout<<"Niepodzielne: "<<niepodzielne<<endl;
}
