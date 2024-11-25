void  main () {
    int f [(976 - 876)];
    char e [(474 - 374)];
    char c [(190 - 90)];
    int a;
    int b;
    int l;
    int i;
    int j;
    int m;
    int k;
    int bo9W1VBKk [(443 - 343)];
    scanf ("%d", &a);
    scanf ("%s", c);
    l = strlen (c);
    {
        i = 98 - 98;
        while (l > i) {
            if ('A' <= c[i] && 'Z' >= c[i])
                f[i] = (937 - 927) + c[i] - 'A';
            if ('a' <= c[i] && 'z' >= c[i])
                f[i] = (832 - 822) + c[i] - 'a';
            if ('0' <= c[i] && c[i] <= '9')
                f[i] = c[i] - '0';
            i = i + 1;
        };
    }
    scanf ("%d", &b);
    m = (102 - 102);
    for (i = (205 - 205); l > i; i++) {
        k = (848 - 847);
        j = (998 - 997);
        while (j < (l - i)) {
            k = k * a;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j++;
        }
        m = m + f[i] * k;
    }
    i = (626 - 626);
    while (m > (968 - 968)) {
        if (m >= b) {
            bo9W1VBKk[i] = m % b;
            m = m / b;
            i++;
        }
        else {
            bo9W1VBKk[i] = m;
            m = (248 - 248);
        };
    }
    l = i + (328 - 327);
    {
        i = 292 - 292;
        while (i < l) {
            if (bo9W1VBKk[i] < (538 - 528))
                e[l - (593 - 592) - i] = bo9W1VBKk[i] + '0';
            else
                e[l - 1 - i] = bo9W1VBKk[i] - 10 + 'A';
            i++;
        };
    }
    for (i = 0; i < l; i++)
        printf ("%c", e[i]);
}

