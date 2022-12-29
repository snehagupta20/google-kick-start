#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        int candies=0;
        int b,c;
        cin>> b >> c;
        for(int j=1;j<=b;j++)
        {
            int d;
            cin>>d;
            candies=candies+d;
        }

        int e=candies/c;
        cout<<"Case #"<<i<<": "<<candies-c*e<<endl;
    }
}