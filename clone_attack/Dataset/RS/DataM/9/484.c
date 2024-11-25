void  main () {
    struct   patient {
        char a [(659 - 648)];
        int LZ9V8A;
    }
    p [(629 - 529)];
    int LZ5lO6LxECFn;
    int RkDihqz;
    int CdeLxGmv;
    int dWz0clmkh26;
    int C79spOBkHM;
    LZ5lO6LxECFn = (32 - 32);
    char c [(482 - 382)] [(175 - 164)], CB4mgS [11];
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
    int d [100];
    scanf ("%d", &RkDihqz);
    for (CdeLxGmv = (862 - 862); RkDihqz > CdeLxGmv; CdeLxGmv = CdeLxGmv +1)
        scanf ("%s %d", p[CdeLxGmv].a, &p[CdeLxGmv].LZ9V8A);
    for (CdeLxGmv = (153 - 153); RkDihqz > CdeLxGmv; CdeLxGmv = CdeLxGmv +1) {
        if ((458 - 398) <= p[CdeLxGmv].LZ9V8A) {
            strcpy (c[LZ5lO6LxECFn], p[CdeLxGmv].a);
            d[LZ5lO6LxECFn] = p[CdeLxGmv].LZ9V8A;
            LZ5lO6LxECFn++;
        };
    }
    dWz0clmkh26 = LZ5lO6LxECFn;
    for (LZ5lO6LxECFn = (517 - 517); dWz0clmkh26 - (528 - 527) > LZ5lO6LxECFn; LZ5lO6LxECFn = LZ5lO6LxECFn +1) {
        CdeLxGmv = 518 - 518;
        while (dWz0clmkh26 - (847 - 846) - LZ5lO6LxECFn > CdeLxGmv) {
            if (d[CdeLxGmv +(264 - 263)] > d[CdeLxGmv]) {
                C79spOBkHM = d[CdeLxGmv];
                d[CdeLxGmv] = d[CdeLxGmv +(369 - 368)];
                strcpy (CB4mgS, c[CdeLxGmv]);
                strcpy (c[CdeLxGmv], c[CdeLxGmv +1]);
                strcpy (c[CdeLxGmv +1], CB4mgS);
                d[CdeLxGmv +(920 - 919)] = C79spOBkHM;
            }
            CdeLxGmv = CdeLxGmv +1;
        };
    }
    for (CdeLxGmv = (226 - 226); dWz0clmkh26 > CdeLxGmv; CdeLxGmv++)
        printf ("%s\n", c[CdeLxGmv], d[CdeLxGmv]);
    {
        CdeLxGmv = 0;
        while (RkDihqz > CdeLxGmv) {
            if (p[CdeLxGmv].LZ9V8A < 60)
                printf ("%s\n", p[CdeLxGmv].a, p[CdeLxGmv].LZ9V8A);
            CdeLxGmv = CdeLxGmv +1;
        };
    };
}

