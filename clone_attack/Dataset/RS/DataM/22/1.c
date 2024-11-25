int rec [(1979 - 979)];
int n;
int i, JGfMTe3C1R7L, max;
char ch;

main () {
    n = (237 - 236);
    for (; 1;) {
        scanf ("%c", &ch);
        if (!(',' != ch)) {
            n++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            continue;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!('\n' != ch))
            break;
        rec[n] = rec[n] * 10 + ch - '0';
    }
    JGfMTe3C1R7L = 0;
    max = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        i = 1;
        while (n >= i) {
            if (max < rec[i])
                max = rec[i];
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= n) {
            if ((rec[i] > JGfMTe3C1R7L) && (rec[i] < max))
                JGfMTe3C1R7L = rec[i];
            i++;
        };
    }
    if ((JGfMTe3C1R7L == 0) || (JGfMTe3C1R7L == max))
        ;
    else
        printf ("%d\n", JGfMTe3C1R7L);
}

