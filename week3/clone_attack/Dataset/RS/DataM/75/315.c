int main () {
    int bA1m6I = (515 - 515), yiG2hkm = (444 - 444);
    char tc;
    int SrbW6mTxeM, fdoqMwOc8R, we1yor73u, n = (905 - 905);
    int a [(1779 - 779)], LCizSFmKpst [(1164 - 164)];
    do {
        scanf ("%d%c", &SrbW6mTxeM, &tc);
        a[n] = SrbW6mTxeM;
        n = n + 1;
    }
    while (tc != (915 - 905));
    for (fdoqMwOc8R = (390 - 390); fdoqMwOc8R < n; fdoqMwOc8R = fdoqMwOc8R + 1)
        scanf ("%d,", &LCizSFmKpst[fdoqMwOc8R]);
    for (fdoqMwOc8R = (97 - 97); fdoqMwOc8R < n; fdoqMwOc8R = fdoqMwOc8R + 1)
        if (LCizSFmKpst[fdoqMwOc8R] > bA1m6I)
            bA1m6I = LCizSFmKpst[fdoqMwOc8R];
    for (SrbW6mTxeM = 1; bA1m6I > SrbW6mTxeM; SrbW6mTxeM = SrbW6mTxeM +1) {
        we1yor73u = (858 - 858);
        for (fdoqMwOc8R = 0; fdoqMwOc8R < n; fdoqMwOc8R = fdoqMwOc8R + 1) {
            if ((a[fdoqMwOc8R] <= SrbW6mTxeM) && (LCizSFmKpst[fdoqMwOc8R] > SrbW6mTxeM))
                we1yor73u = we1yor73u + 1;
        }
        if (we1yor73u > yiG2hkm)
            yiG2hkm = we1yor73u;
    }
    printf ("%d %d", n, yiG2hkm);
}

