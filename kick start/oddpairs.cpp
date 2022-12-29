#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        int b,count=0;
        cin>>b;
        if(b%2!=0)
        {
            cout<<(((b/2)+1)*(b/2))*2<<endl;
        }
        else{
            cout<<((b/2)*(b/2))*2<<endl;
        }
    }

}