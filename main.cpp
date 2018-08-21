#include <iostream>

using namespace std;

int main()
{
    int t,n,p,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>p;
        int x[n];
        for(i=0;i<n;i++)
        {
            cin>>x[i];
        }

        int c=0,h=0;

        for(i=0;i<n;i++)
        {

            if(x[i]>=(int)p/2)
                c++;
            else if(x[i]<=(int)p/10)
                h++;
        }
        if(c==1 && h==2)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
