#include<iostream>
#include<vector>

using namespace std;

int a1,a2,a3,a4,a5;
vector<int> container;

int parzyste =0;
int nieparzyste =0;


void input()
{
    cout<<"Podajliczb aby sprawdzic czy sa parzyste"<<endl;
    cin>>a1>>a2>>a3>>a4>>a5;

    container.push_back(a1);
    container.push_back(a2);
    container.push_back(a3);
    container.push_back(a4);
    container.push_back(a5);
}

void math()
{
    for(int i; i< container.size(); i++)
    {
        if(container[i] % 2 == 0)
        {
            parzyste ++;
        }
        else
        {
            nieparzyste ++;
        }
    }

    cout<<"Ilosc parzystych to: "<<parzyste<<endl;
    cout<<"Ilosc nieparzystych to: "<<nieparzyste<<endl;
}

int main()
{
    input();
    math();
}
