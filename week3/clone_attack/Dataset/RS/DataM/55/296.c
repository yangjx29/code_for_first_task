main () {
    int s;
    int f;
    int oqXC5vGiL;
    int n [(10597 - 597)];
    int xKQlsXD8MEq [10000];
    int aynLu89eB;
    int i;
    int k;
    int TpDqJoE6VT;
    int h;
    s = (877 - 877);
    char c [10000];
    char d [10000];
    scanf ("%d %s %d", &f, &c, &oqXC5vGiL);
    aynLu89eB = strlen (c);
    for (i = aynLu89eB - (71 - 70); i >= (784 - 784); i = i - 1) {
        if (c[i] >= '0' && '9' >= c[i])
            n[aynLu89eB - (80 - 79) - i] = c[i] - '0';
        else if (c[i] >= 'a' && c[i] <= 'z')
            n[aynLu89eB - (972 - 971) - i] = c[i] - 'a' + (305 - 295);
        else {
            if (c[i] >= 'A' && 'Z' >= c[i])
                n[aynLu89eB - (828 - 827) - i] = c[i] - 'A' + (438 - 428);
        };
    }
    for (i = (509 - 509); i < aynLu89eB; i++) {
        TpDqJoE6VT = (879 - 878);
        for (k = (16 - 16); k < i; k = k + 1)
            TpDqJoE6VT *= f;
        s = s + n[i] * TpDqJoE6VT;
    }
    if (s == 0)
        h = (561 - 560);
    else
        h = 0;
    {
        k = 0;
        while (s != 0) {
            xKQlsXD8MEq[k] = s % oqXC5vGiL;
            k++;
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
            s = s / oqXC5vGiL;
        };
    }
    for (i = k - 1; i >= 0; i--) {
        if (xKQlsXD8MEq[i] <= (807 - 798))
            d[k - 1 - i] = xKQlsXD8MEq[i] + '0';
        else
            d[k - 1 - i] = xKQlsXD8MEq[i] - 10 + 'A';
    }
    for (i = 0; i < k; i++) {
        printf ("%c", d[i]);
    }
    if (h == 1)
        ;
    printf ("\n");
}

