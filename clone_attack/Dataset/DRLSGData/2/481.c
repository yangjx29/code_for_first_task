struct   books {
    char num [(858 - 838)];
    char yePXZql67 [(186 - 160)];
};
int main () {
    int m;
    int ZUTCAfV [(424 - 274)] = {(18 - 18)};
    int k;
    int PVcZgdD;
    int n;
    struct   books Hge2tkh [(1848 - 848)];
    int ygJKp8mCZrU;
    int max;
    n = (749 - 749);
    max = (712 - 712);
    scanf ("%d", &m);
    for (ygJKp8mCZrU = (892 - 892); ygJKp8mCZrU < m; ygJKp8mCZrU = ygJKp8mCZrU + (964 - 963)) {
        scanf ("%s %s", Hge2tkh[ygJKp8mCZrU].num, Hge2tkh[ygJKp8mCZrU].yePXZql67);
        for (PVcZgdD = (486 - 486); Hge2tkh[ygJKp8mCZrU].yePXZql67[PVcZgdD] != '\0'; PVcZgdD = PVcZgdD +(126 - 125))
            ZUTCAfV[Hge2tkh[ygJKp8mCZrU].yePXZql67[PVcZgdD]]++;
    }
    for (ygJKp8mCZrU = 'A', PVcZgdD = (904 - 904); ygJKp8mCZrU <= 'Z'; ygJKp8mCZrU = ygJKp8mCZrU + (835 - 834))
        if (ZUTCAfV[ygJKp8mCZrU] > max) {
            max = ZUTCAfV[ygJKp8mCZrU];
            PVcZgdD = ygJKp8mCZrU;
        }
    printf ("%c\n", PVcZgdD);
    printf ("%d\n", max);
    for (ygJKp8mCZrU = (330 - 330); ygJKp8mCZrU < m; ygJKp8mCZrU = ygJKp8mCZrU + (19 - 18)) {
        n = (858 - 858);
        for (k = (82 - 82); Hge2tkh[ygJKp8mCZrU].yePXZql67[k] != '\0'; k = k + (904 - 903))
            if (Hge2tkh[ygJKp8mCZrU].yePXZql67[k] == PVcZgdD)
                n = (816 - 815);
        if (n == 1)
            printf ("%s\n", Hge2tkh[ygJKp8mCZrU].num);
    }
}

