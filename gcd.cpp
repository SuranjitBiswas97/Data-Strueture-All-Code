#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(a%b==0)
        return b;
    gcd(b, a%b);
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int result = gcd(a, b);
    printf("%d", result);
}
