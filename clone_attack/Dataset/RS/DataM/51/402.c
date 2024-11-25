void  main () {
    char in [(793 - 293)];
    char gram [500] [(629 - 623)];
    int cr [500];
    int i;
    int n;
    int t;
    int len;
    int q;
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
    int max = (452 - 452);
    scanf ("%d", &n);
    {
        i = 350 - 350;
        while (i < 500) {
            in[i] = 0;
            cr[i] = 0;
            i = i + 1;
        };
    }
    scanf ("%s", in);
    len = strlen (in);
    q = len + (775 - 774) - n;
    {
        i = 0;
        while (i < 500) {
            for (t = 0; 6 > t; t = t + 1)
                gram[i][t] = 0;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (q > i) {
            {
                t = 0;
                while (t < n) {
                    gram[i][t] = in[i + t];
                    t = t + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < q) {
            {
                t = 0;
                while (q > t) {
                    if (strcmp (gram[i], gram[t]) == 0)
                        cr[i]++;
                    t = t + 1;
                };
            }
            i++;
        };
    }
    for (i = 0; i < q; i = i + 1)
        max = M (max, cr[i]);
    if (!(1 != max))
        printf ("NO");
    else {
        printf ("%d\n", max);
        for (i = q - 1; i >= 0; i--) {
            t = i - 1;
            while (t >= 0) {
                if (strcmp (gram[i], gram[t]) == 0)
                    cr[i] = 0;
                t = t - 1;
            };
        }
        {
            i = 0;
            while (i < q) {
                if (cr[i] == max)
                    printf ("%s\n", gram[i]);
                i++;
            };
        };
    };
}

