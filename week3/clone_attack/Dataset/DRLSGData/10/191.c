main () {
    int XujHClSNp;
    int k;
    int i;
    int xZAxuwYr;
    int ski2f1G [25] = {0};
    int sJnrlpQitcZV;
    int fQcpC9bLsz [25] = {0};
    XujHClSNp = 0;
    scanf ("%d", &k);
    getchar ();
    getchar ();
    for (i = 0; i < k; i = i + 1) {
        scanf ("%d", &ski2f1G[i]);
    }
    fQcpC9bLsz[k - 1] = 1;
    for (i = k - 2; i >= 0; i = i - 1) {
        for (xZAxuwYr = i + 1; xZAxuwYr <= k - 1; xZAxuwYr = xZAxuwYr + 1) {
            if (ski2f1G[xZAxuwYr] <= ski2f1G[i]) {
                if (fQcpC9bLsz[xZAxuwYr] + 1 > XujHClSNp)
                    XujHClSNp = fQcpC9bLsz[xZAxuwYr] + 1;
            }
        }
        if (XujHClSNp == 0)
            XujHClSNp = 1;
        fQcpC9bLsz[i] = XujHClSNp;
        XujHClSNp = 0;
    }
    for (i = 0; i <= k - 1; i = i + 1) {
        if (fQcpC9bLsz[i] > XujHClSNp)
            XujHClSNp = fQcpC9bLsz[i];
    }
    printf ("%d", XujHClSNp);
}

