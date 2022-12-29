#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int a;
    cin>>a;
    vector <string> e;
    for(int i=1;i<=a;i++)
    {
        string b;
        cin>>b;
        e.push_back(b);
    }
    for(int j=0;j<a;j++)
    {
        string d=e[j];
        int c=d.length();
        if(d[c-1]=='a' || d[c-1]=='e' || d[c-1]=='i' || d[c-1]=='o' || d[c-1]=='u' || d[c-1]=='A' || d[c-1]=='E' || d[c-1]=='I' || d[c-1]=='O' || d[c-1]=='U')
            {
                cout<<"case #"<<j+1<<": "<<d<<" is ruled by Alice."<<endl;
            }
        else if(d[c-1]=='y' || d[c-1]=='Y')
            {
                cout<<"case #"<<j+1<<": "<<d<<" is ruled by nobody."<<endl;
            }
        else{
                cout<<"case #"<<j+1<<": "<<d<<" is ruled by Bob."<<endl;
            }
    }
}