/*
                                Badhan Sen
                            Student of C.S.E
                jessore University of Science & Technology
                        Mail: galaxybd9@gmail.com

*/
#include <stdio.h>
unsigned long long int length (unsigned long long int a);
int main ()
{
    unsigned long long int i,j,b,c=0,ara,max=1;
    while (scanf ("%lld %lld",&i,&j)!=EOF){
            if (i>j){
                max=1;
                for (b=j;b<=i;b++){
                    ara=length (b);
                    if (ara>max)
                        max=ara;
                    else
                        max=max;
                }
            }
            else {
                max=1;
                for (b=i;b<=j;b++){
                    ara=length (b);
                    if (ara>max)
                        max=ara;
                    else
                        max=max;
                }
            }
    printf ("%lld %lld %lld\n", i, j, max);
    }
    return 0;
}
unsigned long long int length (unsigned long long int a){
    unsigned long long int c=0;
        while (a!=1){
            if (a%2==0){
                a/=2;
            }
            else {
                a=a*3+1;
            }
            c++;
        }
        return c+1;
    }

