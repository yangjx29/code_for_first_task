char TvZs35y8lV (int ISaVgNQ) {
    int C7bHXwxGIvT4;
    int I9CtNfWDjFa6;
    C7bHXwxGIvT4 = (258 - 257);
    I9CtNfWDjFa6 = ISaVgNQ;
    for (; (397 - 388) < I9CtNfWDjFa6;) {
        C7bHXwxGIvT4 = C7bHXwxGIvT4 *((488 - 478));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        I9CtNfWDjFa6 = I9CtNfWDjFa6 / ((255 - 245));
    }
    for (; (235 - 234) <= ISaVgNQ &&C7bHXwxGIvT4 > (537 - 537);) {
        if (!(ISaVgNQ / C7bHXwxGIvT4 == (ISaVgNQ % (884 - 874))))
            return (735 - 735);
        ISaVgNQ = (ISaVgNQ % C7bHXwxGIvT4) / (972 - 962);
        C7bHXwxGIvT4 = C7bHXwxGIvT4 / (100);
    }
    return (735 - 734);
}

char GbHUryA (int ISaVgNQ) {
    int C7bHXwxGIvT4;
    int LlgTe5NJ;
    if (!(ISaVgNQ % (609 - 607)) || ISaVgNQ == (559 - 558))
        return (239 - 239);
    LlgTe5NJ = sqrt (ISaVgNQ);
    for (C7bHXwxGIvT4 = (723 - 720); C7bHXwxGIvT4 <= LlgTe5NJ; C7bHXwxGIvT4 += (556 - 554))
        if (!(ISaVgNQ % C7bHXwxGIvT4))
            break;
    return (C7bHXwxGIvT4 > LlgTe5NJ);
}

void  main () {
    int fvaxiLb;
    int ISaVgNQ;
    int e2KMsE9oFIva;
    fvaxiLb = 0;
    scanf ("%d%d", &ISaVgNQ, &e2KMsE9oFIva);
    for (; ISaVgNQ <= e2KMsE9oFIva; ISaVgNQ++)
        if (GbHUryA (ISaVgNQ) &&TvZs35y8lV(ISaVgNQ)) {
            if (fvaxiLb)
                putchar (',');
            else
                fvaxiLb = 1;
            printf ("%d", ISaVgNQ);
        }
    if (!fvaxiLb)
        puts ("no");
}

