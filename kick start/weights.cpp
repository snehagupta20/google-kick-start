#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        int b,c,d,e;
        cin>> b >> c >> d >> e;
        if(c+d==b || d+e==b || c+e==b || c+d+e==b || c==b || d==b || e==b)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}