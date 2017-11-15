#include <bits/stdc++.h>

#define max 20000010

using namespace std;

bool prime[max];
int twin_prime[max];

void prime_checker()
{
    prime[1]= false;
    int limit = sqrt(max);
    for(int i=2; i<=limit; i++)
    {
        if(prime[i] == true)
        {
            for(int j=i*i; j<=max; j=j+i)
            {
                prime[j] = false;
            }
        }
    }
}

void twin_prime_checker()
{
    int x = 1;
    for(int y=2; y<=max; y++)
    {
        if(prime[y] && prime[y+2])
    {
        twin_prime[x]= y;
        x++;
    }
    }
}

int main()
{
    int s;
    memset(prime, true, sizeof(prime));
    prime_checker();
    twin_prime_checker();
    while(scanf("%d", &s)==1)
    {
        printf("%d %d\n", twin_prime[s],twin_prime[s]+2);

        return 0;
    }
}

