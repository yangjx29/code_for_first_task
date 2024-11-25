int a [8] [8];

void  main () {
    int uFguQeB6, nWdUGSstH6D, Ky4AdIF, lie, b, d, pVws567t;
    int B1HL0BRtlW4 (int uFguQeB6, int nWdUGSstH6D, int Ky4AdIF);
    scanf ("%d,%d", &Ky4AdIF, &lie);
    for (uFguQeB6 = 0; uFguQeB6 <= Ky4AdIF -1; uFguQeB6 = uFguQeB6 + 1) {
        nWdUGSstH6D = 0;
        while (nWdUGSstH6D <= lie - 1) {
            scanf ("%d", &a[uFguQeB6][nWdUGSstH6D]);
            nWdUGSstH6D = nWdUGSstH6D + 1;
        };
    }
    for (uFguQeB6 = 0; uFguQeB6 <= Ky4AdIF -1; uFguQeB6 = uFguQeB6 + 1) {
        pVws567t = a[uFguQeB6][0], b = 0;
        {
            nWdUGSstH6D = 1;
            while (nWdUGSstH6D <= lie - 1) {
                if (pVws567t < a[uFguQeB6][nWdUGSstH6D]) {
                    pVws567t = a[uFguQeB6][nWdUGSstH6D];
                    b = nWdUGSstH6D;
                }
                nWdUGSstH6D = nWdUGSstH6D + 1;
            };
        }
        d = B1HL0BRtlW4 (uFguQeB6, b, Ky4AdIF);
        if (d) {
            printf ("%d+%d", uFguQeB6, b);
            break;
        }
        if (uFguQeB6 == Ky4AdIF -1 && d == 0)
            ;
    };
}

int B1HL0BRtlW4 (int uFguQeB6, int nWdUGSstH6D, int Ky4AdIF) {
    int k, w9gKZDoBmEzd, d = 0;
    w9gKZDoBmEzd = a[0][nWdUGSstH6D];
    {
        k = 1;
        while (k <= Ky4AdIF -1) {
            if (a[k][nWdUGSstH6D] < w9gKZDoBmEzd)
                w9gKZDoBmEzd = a[k][nWdUGSstH6D];
            k = k + 1;
        };
    }
    if (a[uFguQeB6][nWdUGSstH6D] == w9gKZDoBmEzd)
        d = 1;
    return (d);
}

