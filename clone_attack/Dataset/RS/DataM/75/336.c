void  main () {
    int hTMdbzXEHh (int YXfwu0THD [], int n);
    int ZBuUmr (int YXfwu0THD [], int n);
    int HMnxoN;
    int count;
    int YXfwu0THD [(1676 - 676)];
    int b [1000];
    int j;
    int c [1000] = {(292 - 292)};
    int n;
    int hYT0hoXvd;
    int maxb;
    int mina;
    int minb;
    int max_;
    int min_;
    int max0;
    int nSEPXJM;
    HMnxoN = (671 - 670);
    count = 0;
    scanf ("%d", &YXfwu0THD[0]);
    for (; !(',' != getchar ());) {
        scanf ("%d", &YXfwu0THD[HMnxoN]);
        HMnxoN = HMnxoN +1;
    }
    scanf ("%d", &b[0]);
    n = HMnxoN;
    HMnxoN = 1;
    for (; !(',' != getchar ());) {
        scanf ("%d", &b[HMnxoN]);
        HMnxoN++;
    }
    hYT0hoXvd = hTMdbzXEHh (YXfwu0THD, n);
    maxb = hTMdbzXEHh (b, n);
    mina = ZBuUmr (YXfwu0THD, n);
    minb = ZBuUmr (b, n);
    if (maxb <= hYT0hoXvd)
        max_ = hYT0hoXvd;
    else
        max_ = maxb;
    if (minb >= mina)
        min_ = mina;
    else
        min_ = minb;
    for (max0 = min_; max0 <= max_; max0++) {
        for (HMnxoN = 0; HMnxoN < n; HMnxoN = HMnxoN +1) {
            if (YXfwu0THD[HMnxoN] <= max0 && b[HMnxoN] > max0)
                c[count]++;
        }
        count = count + 1;
    }
    nSEPXJM = c[0];
    count = count - 1;
    for (HMnxoN = 1; HMnxoN <= count; HMnxoN = HMnxoN +1) {
        if (c[HMnxoN] >= nSEPXJM)
            nSEPXJM = c[HMnxoN];
    }
    printf ("%d %d\n", n, nSEPXJM);
}

int hTMdbzXEHh (int YXfwu0THD [], int n) {
    int b, HMnxoN;
    b = YXfwu0THD[0];
    for (HMnxoN = 1; HMnxoN < n; HMnxoN = HMnxoN +1) {
        if (YXfwu0THD[HMnxoN] >= b)
            b = YXfwu0THD[HMnxoN];
    }
    return b;
}

int ZBuUmr (int YXfwu0THD [], int n) {
    int b, HMnxoN;
    b = YXfwu0THD[0];
    for (HMnxoN = 1; HMnxoN < n; HMnxoN++) {
        if (YXfwu0THD[HMnxoN] <= b)
            b = YXfwu0THD[HMnxoN];
    }
    return b;
}

