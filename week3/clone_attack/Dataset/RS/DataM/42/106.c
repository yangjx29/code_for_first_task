void  main () {
    long  tNjYhyF [1000000];
    long  n, ybHj6pGcC, t, i, xh9ripOcwxCP, RrbihJEfBu8;
    RrbihJEfBu8 = 0;
    scanf ("%ld", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%ld", &tNjYhyF[i]);
            i = i + 1;
        };
    }
    scanf ("%ld", &ybHj6pGcC);
    {
        i = 0;
        while (i < n) {
            if (!(ybHj6pGcC != tNjYhyF[i]))
                RrbihJEfBu8++;
            i++;
        };
    }
    i = 0;
    while (i < n) {
        if (tNjYhyF[i] == ybHj6pGcC) {
            {
                xh9ripOcwxCP = i + 1;
                while (tNjYhyF[xh9ripOcwxCP] == ybHj6pGcC) {
                    xh9ripOcwxCP = xh9ripOcwxCP + 1;
                };
            }
            t = tNjYhyF[i];
            tNjYhyF[i] = tNjYhyF[xh9ripOcwxCP];
            i++;
            tNjYhyF[xh9ripOcwxCP] = t;
        }
        else
            i++;
    }
    {
        i = 0;
        while (i < n - RrbihJEfBu8 -1) {
            printf ("%ld ", tNjYhyF[i]);
            i++;
        };
    }
    printf ("%ld", tNjYhyF[n - RrbihJEfBu8 -1]);
}

