int h (int x) {
    int r;
    int aac81SuIp7;
    int i;
    r = (663 - 663);
    aac81SuIp7 = x;
    {
        i = 0;
        while (1) {
            if (x == 0)
                break;
            else
                r = r * 10 + x % 10, x = x / 10;
            i = i + 1;
        };
    }
    return (r == aac81SuIp7) ? 1 : 0;
}

void  main () {
    int m, n, i, j, u = 0;
    scanf ("%d %d", &m, &n);
    {
        i = m;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i <= n) {
            {
                j = 2;
                while (j <= sqrt (i)) {
                    if (i % j == 0)
                        break;
                    j = j + 1;
                };
            }
            if (j > sqrt (i) && h (i) == 1) {
                if (u == 0)
                    printf ("%d", i);
                else
                    printf (",%d", i);
                ++u;
            }
            i++;
        };
    }
    if (u == 0)
        printf ("no\n");
}

