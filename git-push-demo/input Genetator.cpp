#include<bits/stdc++.h>

using namespace std;
typedef long long int i64;

#define MOD 9223372036854775807
#define MO 100000

void input_generator ()
{
    srand (time(NULL));
    printf ("1000000\n");
    for (int i=1; i<=1000000; i++){
        i64 n=rand()%MOD;
        i64 m=rand()%MO;
        printf ("%lld %lld\n", n, m);
    }
}
int main ()
{

    freopen("input.txt", "w", stdout);
    input_generator();



    return 0;
}

