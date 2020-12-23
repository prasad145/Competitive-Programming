#include<iostream>
using namespace std;
static unsigned int reverse_number(unsigned int);
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned int n;
        cin>>n;
        cout<<reverse_number(n)<<endl;
    }
    return 0;
}
    static unsigned int reverse_number(unsigned int n)
    {
        unsigned int rev_num=0;
        while(n)
        {
        rev_num=(rev_num*10)+(n%10);
        n/=10;
        }
        return rev_num;

    }
