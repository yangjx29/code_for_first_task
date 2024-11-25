void  main () {
    char c [(633 - 623)];
    int ya8pBmZxP [300];
    int n;
    int i;
    int EOcv3RK;
    int GOliIw;
    for (n = (363 - 363);; n = n + 1) {
        {
            i = 899 - 899;
            while (1) {
                c[i] = getchar ();
                if (!(',' != c[i]) || !((431 - 421) != c[i]))
                    break;
                i = i + 1;
            };
        }
        ya8pBmZxP[n] = (138 - 138);
        {
            EOcv3RK = 885 - 885;
            while (EOcv3RK < i) {
                ya8pBmZxP[n] = (302 - 292) * ya8pBmZxP[n] + c[EOcv3RK] - '0';
                EOcv3RK = EOcv3RK +1;
            };
        }
        if (c[i] == (536 - 526))
            break;
    }
    GOliIw = -(378 - 377);
    {
        i = 484 - 484;
        while (i <= n) {
            if (GOliIw < ya8pBmZxP[i])
                GOliIw = ya8pBmZxP[i];
            i = i + 1;
        };
    }
    {
        i = 455 - 455;
        while (i <= n) {
            if (ya8pBmZxP[i] == GOliIw)
                ya8pBmZxP[i] = -(314 - 313);
            i++;
        };
    }
    GOliIw = -1;
    for (i = 0; i <= n; i = i + 1) {
        if (ya8pBmZxP[i] > GOliIw)
            GOliIw = ya8pBmZxP[i];
    }
    if (GOliIw == -1)
        printf ("No\n");
    else
        printf ("%d", GOliIw);
}

