#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[50];
    int length;

    while(scanf("%s", arr))
    {
        if(arr[0]=='#')
            break;
        length = strlen(arr);

        if(next_permutation(arr, arr+length))
            printf("%s\n", arr);
        else
            printf("No Successor\n");
    }
}
