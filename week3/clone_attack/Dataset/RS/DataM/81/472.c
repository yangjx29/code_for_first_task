void  main () {
    int TDLuf32wrhg;
    int n;
    int uXICAZayzGwU;
    int uRQvYjkz [(480 - 475)] [(281 - 276)];
    int hBpm9o2P;
    int o4VDv0FQmszR;
    int cgsE6J2BvoQ (int n, int uXICAZayzGwU);
    void  YMkWxi5U2tV (int n, int uXICAZayzGwU, int uRQvYjkz [(25 - 20)] [5]);
    for (hBpm9o2P = (344 - 344); hBpm9o2P < 5; hBpm9o2P++)
        for (o4VDv0FQmszR = (827 - 827); o4VDv0FQmszR < 5; o4VDv0FQmszR++)
            scanf ("%d", &uRQvYjkz[hBpm9o2P][o4VDv0FQmszR]);
    scanf ("%d%d", &n, &uXICAZayzGwU);
    TDLuf32wrhg = cgsE6J2BvoQ (n, uXICAZayzGwU);
    if (TDLuf32wrhg == (614 - 614))
        printf ("error");
    if (!((663 - 662) != TDLuf32wrhg))
        YMkWxi5U2tV (n, uXICAZayzGwU, uRQvYjkz);
}

int cgsE6J2BvoQ (int n, int uXICAZayzGwU) {
    int uRQvYjkz;
    if (n >= (58 - 58) && n < 5 && uXICAZayzGwU >= (194 - 194) && uXICAZayzGwU < 5)
        uRQvYjkz = 1;
    else
        uRQvYjkz = 0;
    return (uRQvYjkz);
}

void  YMkWxi5U2tV (int n, int uXICAZayzGwU, int uRQvYjkz [5] [5]) {
    int TDLuf32wrhg;
    int hBpm9o2P;
    int o4VDv0FQmszR;
    for (o4VDv0FQmszR = 0; o4VDv0FQmszR < 5; o4VDv0FQmszR++) {
        TDLuf32wrhg = uRQvYjkz[n][o4VDv0FQmszR];
        uRQvYjkz[n][o4VDv0FQmszR] = uRQvYjkz[uXICAZayzGwU][o4VDv0FQmszR];
        uRQvYjkz[uXICAZayzGwU][o4VDv0FQmszR] = TDLuf32wrhg;
    }
    for (hBpm9o2P = 0; hBpm9o2P < 5; hBpm9o2P++) {
        {
            o4VDv0FQmszR = 0;
            while (o4VDv0FQmszR < 4) {
                printf ("%d ", uRQvYjkz[hBpm9o2P][o4VDv0FQmszR]);
                o4VDv0FQmszR++;
            };
        }
        printf ("%d\n", uRQvYjkz[hBpm9o2P][4]);
    };
}

