#include <iostream>

using namespace std;

int main()
{
int t;
cin>>t;
while(t--)

{
    int a,b,count = 0;
    cin>>a>>b;
    while(a!=b)
    {
        if(a>b){
        a=a/2;
        count++;
        }
        if(b>a){
            b=b/2;
            count++;
        }
    }
    cout<<count<<"\n";
}

        return 0;
}
