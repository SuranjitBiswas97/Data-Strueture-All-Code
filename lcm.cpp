#include<bits/stdc++.h>
using namespace std;

int lcm(int a, int b)
{
    int static common = 1;

    if(common%a==0&&common%b==0)
        return common;
    else
    {
        common++;
        lcm(a, b);
    }

}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int result = lcm(a, b);
    printf("%d", result);
}
