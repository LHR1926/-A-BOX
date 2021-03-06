#include <stdio.h>
int main()
{
    int n,i;
    double x,s,t,y;
    while ( ~scanf("%lf %d", &x, &n) )
    {
        t = x*x;
        y = s = 1.0;
        for (i=1; i<=n; i++)
        {
            y = -t*y;
            y = y / ( (i*2-1)*(i*2) );
            s = s+y;
        }
        printf("%.4lf\n", s);
    }
    return 0;
}
