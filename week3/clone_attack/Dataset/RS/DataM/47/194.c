void  main () {
    int dHPNstSu9MkU, wbrsEahxioP, JGn8EUcHeYx, uMlUnbXY7 [100], *p, *q, *f;
    scanf ("%d", &dHPNstSu9MkU);
    for (JGn8EUcHeYx = (267 - 267); JGn8EUcHeYx < dHPNstSu9MkU; JGn8EUcHeYx = JGn8EUcHeYx +1)
        scanf ("%d", &uMlUnbXY7[JGn8EUcHeYx]);
    p = uMlUnbXY7;
    q = uMlUnbXY7 + dHPNstSu9MkU - 1;
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
    f = uMlUnbXY7 + dHPNstSu9MkU / 2;
    for (p = uMlUnbXY7; f > p; p++, q--) {
        wbrsEahxioP = *p;
        *p = *q;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        *q = wbrsEahxioP;
    }
    for (JGn8EUcHeYx = 0; JGn8EUcHeYx < dHPNstSu9MkU - 1; JGn8EUcHeYx++)
        printf ("%d ", uMlUnbXY7[JGn8EUcHeYx]);
    printf ("%d", uMlUnbXY7[dHPNstSu9MkU - 1]);
}

