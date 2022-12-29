#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        int b,same=0,ans=0,loop=0,array=0;
        cin>>b;
        int c[b],d[b],max=0;
        for(int j=0;j<b;j++)
        {
            cin>>c[j];
            if(c[j]>max)
            {
                max=c[j];
            }
        }
        for(int k=0;k<b;k++)
        {
            cin>>d[k];
            if(d[k]==c[k])
            {
                array+=1;
            }
            if(d[k]>max)
            {
                max=d[k];
            }
        }
        if(array==b)
        {
            cout<<"-1"<<endl;
            break;
        }
        //cout<<"max"<<max<<endl;
        while(loop<=max)
        {
            for(int l=0;l<b;l++)
            {
                int count=0;
                if(c[l]<d[l])
                {
                    c[l]+=1;
                    for(int m=0;m<b;m++)
                    {
                        if(d[m]<c[m])
                        {
                            d[m]+=1;
                            count+=1;
                        }
                    }
                    if(count==0)
                    {
                        c[l]-=1;
                    }
                    else{
                        ans+=1;
                    }
                }
                else if(c[l]>d[l])
                {
                    d[l]+=1;
                    for(int m=0;m<b;m++)
                    {
                        if(d[m]>c[m])
                        {
                            c[m]+=1;
                            count+=1;
                        }
                    }
                    if(count==0)
                    {
                        d[l]-=1;
                    }
                    else{
                        ans+=1;
                    }
                }       
            }
            loop++;
        }
        for(int n=0;n<b;n++)
            {
                if(c[n]==d[n])
                {
                    same+=1;
                }
            }
        if(same==b)
        {
            cout<<ans<<endl;
        }
        else if(same!=b)
        {
            cout<<"-1"<<endl;
        }
    }

}