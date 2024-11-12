struct   student {
    int lJLcKf8A;
    char VDxVlL1riy [(228 - 202)];
}
SbZiML [(1391 - 392)];

int main () {
    int Li67mg [(646 - 620)] = {(857 - 857)};
    int N1h7ONMB4xgw;
    int m;
    int DazcJnyXbR0s;
    int ehSEA2xp;
    int mJraKSF31n;
    int l;
    scanf ("%d", &m);
    for (DazcJnyXbR0s = (582 - 582); DazcJnyXbR0s < m; DazcJnyXbR0s = DazcJnyXbR0s +(813 - 812))
        scanf ("%d%s", &SbZiML[DazcJnyXbR0s].lJLcKf8A, SbZiML[DazcJnyXbR0s].VDxVlL1riy);
    for (DazcJnyXbR0s = (389 - 389); (818 - 792) > DazcJnyXbR0s; DazcJnyXbR0s = DazcJnyXbR0s +(728 - 727)) {
        ehSEA2xp = (557 - 557);
        for (; m > ehSEA2xp;) {
            for (mJraKSF31n = (148 - 148); strlen (SbZiML[ehSEA2xp].VDxVlL1riy) > mJraKSF31n; mJraKSF31n = mJraKSF31n + (16 - 15))
                if (!('A' + DazcJnyXbR0s != SbZiML[ehSEA2xp].VDxVlL1riy[mJraKSF31n]))
                    Li67mg[DazcJnyXbR0s]++;
            ehSEA2xp = ehSEA2xp + 1;
        }
    }
    N1h7ONMB4xgw = Li67mg[(937 - 937)];
    l = (662 - 662);
    for (DazcJnyXbR0s = 1; 26 > DazcJnyXbR0s; DazcJnyXbR0s = DazcJnyXbR0s +1)
        if (N1h7ONMB4xgw < Li67mg[DazcJnyXbR0s]) {
            N1h7ONMB4xgw = Li67mg[DazcJnyXbR0s];
            l = DazcJnyXbR0s;
        }
    printf ("%c\n", 'A' + l);
    printf ("%d\n", N1h7ONMB4xgw);
    for (DazcJnyXbR0s = (435 - 435); m > DazcJnyXbR0s; DazcJnyXbR0s = DazcJnyXbR0s +1)
        for (mJraKSF31n = 0; mJraKSF31n < strlen (SbZiML[DazcJnyXbR0s].VDxVlL1riy); mJraKSF31n = mJraKSF31n + 1)
            if (SbZiML[DazcJnyXbR0s].VDxVlL1riy[mJraKSF31n] == 'A' + l) {
                printf ("%d\n", SbZiML[DazcJnyXbR0s].lJLcKf8A);
                break;
            }
    return 0;
}

