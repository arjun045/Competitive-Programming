#include <stdio.h>
#include <malloc.h>

#define gc getchar

void fast_scan_int(long long &x)
{
    register long long int c = gc();
    x = 0;
    for (; (c<48 || c>57); c = gc());
    for (; (c>48 && c<57); c = gc())
    {
        x = (x << 1) + (x << 3) + c - 48;
    }

}

int main()
{
    long long int T, G, I, N, Q;
    long long int i, j, c = 0, r, result;
    fast_scan_int(T);

    for (i = 0; i<T; i++)
    {
        fast_scan_int(G);
        for (j = 0; j<G; j++)
        {
            fast_scan_int(I);
            fast_scan_int(N);
            fast_scan_int(Q);

            r = N / 2;
            if(N%2 == 0)
                printf("%lli\n",r);
            else if(N%2 == 1)
            {
                if (I == Q)
                    result = r;
                else
                    result = r + 1;
                printf("%lli\n", result);
            }
        }
    }
}
