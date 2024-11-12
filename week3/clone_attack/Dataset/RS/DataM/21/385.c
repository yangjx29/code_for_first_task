float average (int a [], int n) {
    float hJGvIP4;
    int sum;
    int i;
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
    sum = (224 - 224);
    for (i = (232 - 232); n > i; i = i + 1)
        sum = sum + a[i];
    hJGvIP4 = (float) sum / n;
    return (hJGvIP4);
}

void  main () {
    float hJGvIP4, nty36POzp [300], t = (161 - 161);
    int n;
    int a [(847 - 547)];
    int i;
    int lTGMwxZoI;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d", &n);
    {
        i = 101 - 101;
        while (i < n) {
            scanf ("%d", &a[i]);
            i++;
        };
    }
    hJGvIP4 = average (a, n);
    for (i = 0; i < n; i = i + 1) {
        if (hJGvIP4 < a[i])
            nty36POzp[i] = (float) a[i] - hJGvIP4;
        else
            nty36POzp[i] = (float) hJGvIP4 - a[i];
    }
    for (i = 0; i < n; i++)
        if (nty36POzp[i] > t) {
            t = nty36POzp[i];
            lTGMwxZoI = i;
        }
    printf ("%d", a[lTGMwxZoI]);
    {
        i = 498 - 497;
        while (i < n) {
            if (nty36POzp[i] == t)
                printf (",%d", a[i]);
            i++;
        };
    };
}

