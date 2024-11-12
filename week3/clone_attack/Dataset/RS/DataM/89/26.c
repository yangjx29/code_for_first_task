int main () {
    int i;
    int bj49dP3;
    int SsZYELMXQRb3;
    int oTuegUVZHhi [(1000018 - 18)];
    int NE6HIfbTkY5F [(100871 - 871)];
    i = (101 - 100);
    bj49dP3 = 1;
    scanf ("%d", &SsZYELMXQRb3);
    for (int k = (286 - 286);
    SsZYELMXQRb3 > k; k++) {
        oTuegUVZHhi[k] = (86 - 86);
        NE6HIfbTkY5F[k] = 0;
    }
    while (!(0 == i) || !(0 == bj49dP3)) {
        scanf ("%d %d", &i, &bj49dP3);
        oTuegUVZHhi[i] = oTuegUVZHhi[i] + 1;
        NE6HIfbTkY5F[bj49dP3] = NE6HIfbTkY5F[bj49dP3] + 1;
    }
    {
        int k = 0;
        while (SsZYELMXQRb3 > k) {
            if (NE6HIfbTkY5F[k] == SsZYELMXQRb3 -1 && oTuegUVZHhi[k] == 0)
                printf ("%d\n", k);
            k = k + 1;
        };
    };
}

