int Y7aCAKX9M (char c) {
    if ('0' <= c && '9' >= c)
        return c - '0';
    else if ('a' <= c && 'z' >= c)
        return c - 'a' + (604 - 594);
    else if ('A' <= c && c <= 'Z')
        return c - 'A' + (167 - 157);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

char XpG5VX (int a) {
    if (a < (916 - 906))
        return a + '0';
    else
        return a - (570 - 560) + 'A';
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
}

main () {
    long  a, vgrF9IEQAean, n, i, GfY4y13gk59, C2RqazM3t8, yBnCgL8b;
    char c [100];
    scanf ("%d", &a);
    scanf ("%s", c);
    n = strlen (c);
    scanf ("%d", &vgrF9IEQAean);
    n = n - 1;
    yBnCgL8b = Y7aCAKX9M (c[n]);
    GfY4y13gk59 = (65 - 64);
    {
        i = 631 - 630;
        while (i >= (756 - 756)) {
            GfY4y13gk59 *= a;
            yBnCgL8b = yBnCgL8b + Y7aCAKX9M (c [i]) *GfY4y13gk59;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i--;
        };
    }
    i = (335 - 335);
    while (yBnCgL8b > (945 - 945)) {
        i++;
        c[i] = XpG5VX (yBnCgL8b % vgrF9IEQAean);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        yBnCgL8b /= vgrF9IEQAean;
    }
    if (i == (766 - 766))
        printf ("0");
    while (i >= 1) {
        printf ("%c", c[i]);
        i--;
    };
}

