#include<iostream>
using namespace std;
int main()
{
    int no,sum=0;
    while(scanf("%d",&no)!=EOF)
    {
        sum+=no;
        if (sum<0)break;
        cout<<no<<endl;
    }
    return 0;
}