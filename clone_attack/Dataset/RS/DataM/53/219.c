void  main () {
    int cCl2UR9yFAIk;
    int n;
    int ccwMsCE [300];
    int nBZzjoONtU;
    int tMWKS1Czj8hr;
    int AS3Z1Pt;
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
    cCl2UR9yFAIk = 1;
    scanf ("%d", &n);
    scanf ("%d", ccwMsCE);
    for (nBZzjoONtU = 1; nBZzjoONtU < n; nBZzjoONtU = nBZzjoONtU + 1) {
        scanf ("%d", &AS3Z1Pt);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (tMWKS1Czj8hr = 0; tMWKS1Czj8hr < cCl2UR9yFAIk; tMWKS1Czj8hr = tMWKS1Czj8hr + 1)
            if (*(ccwMsCE + tMWKS1Czj8hr) == AS3Z1Pt)
                break;
        if (tMWKS1Czj8hr == cCl2UR9yFAIk) {
            *(ccwMsCE + cCl2UR9yFAIk) = AS3Z1Pt;
            cCl2UR9yFAIk = cCl2UR9yFAIk + 1;
        };
    }
    printf ("%d", *ccwMsCE);
    for (nBZzjoONtU = 1; nBZzjoONtU < cCl2UR9yFAIk; nBZzjoONtU++)
        printf (",%d", *(ccwMsCE + nBZzjoONtU));
}

