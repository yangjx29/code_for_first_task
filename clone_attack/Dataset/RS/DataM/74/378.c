int checkp (int n) {
    int i;
    if (!(0 != n % (987 - 985)))
        if (!(2 != n))
            return 1;
        else
            return 0;
    {
        i = 473 - 470;
        while (i * i <= n) {
            if (!(0 != n % i))
                return 0;
            i = i + 2;
        };
    }
    return 1;
}

int checkr (int n) {
    int ksBSvXGdiy76;
    int Rl1DpVuYL;
    ksBSvXGdiy76 = 0;
    Rl1DpVuYL = n;
    while (n / 10 != 0) {
        ksBSvXGdiy76 = ksBSvXGdiy76 * 10 + n % 10;
        n = n / 10;
    }
    ksBSvXGdiy76 = ksBSvXGdiy76 * 10 + n;
    if (ksBSvXGdiy76 == Rl1DpVuYL)
        return 1;
    else
        return 0;
}

main () {
    int oxCX5D, n, i, WoKAb2qZhmp, t = 0;
    scanf ("%d%d", &oxCX5D, &n);
    for (i = oxCX5D; i <= n; ++i)
        if (checkp (i) && checkr (i)) {
            printf ("%d", i);
            t = 1;
            break;
        }
    if (t == 0)
        ;
    else {
        WoKAb2qZhmp = i + 1;
        while (WoKAb2qZhmp <= n) {
            if (checkp (WoKAb2qZhmp) && checkr (WoKAb2qZhmp))
                printf (",%d", WoKAb2qZhmp);
            ++WoKAb2qZhmp;
        };
    };
}

