#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        int b;
        cin>>b;
        if(b>=300)
        {
            cout<<b*10<<endl;
        }
        else if(b<300)
        {
            cout<<"3000"<<endl;
        }
    }
}
