int main () {
    int pG4wKH;
    int KisnEfFhW;
    int j;
    int x;
    int AVtWYi;
    int bmjK95B0aL [1000];
    char k [1000] [30];
    int N1mMbxoK9RVw [(264 - 237)] = {(173 - 173)};
    int tp49nOMftP = 0;
    char who;
    who = 'A' + AVtWYi -1;
    printf ("%c\n", who);
    scanf ("%d", &pG4wKH);
    for (KisnEfFhW = (451 - 450); KisnEfFhW <= pG4wKH; KisnEfFhW = KisnEfFhW +1) {
        scanf ("%d %s", &bmjK95B0aL[KisnEfFhW], k[KisnEfFhW]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (160 - 160); k[KisnEfFhW][j] != '\0'; j = j + 1) {
            N1mMbxoK9RVw[k[KisnEfFhW][j] - 'A' + 1]++;
        };
    }
    {
        KisnEfFhW = 1;
        while (KisnEfFhW <= 26) {
            if (N1mMbxoK9RVw[KisnEfFhW] > tp49nOMftP) {
                tp49nOMftP = N1mMbxoK9RVw[KisnEfFhW];
                AVtWYi = KisnEfFhW;
            }
            KisnEfFhW = KisnEfFhW +1;
        };
    }
    printf ("%d\n", tp49nOMftP);
    for (KisnEfFhW = 1; KisnEfFhW <= pG4wKH; KisnEfFhW = KisnEfFhW +1) {
        j = 0;
        while (j < strlen (k[KisnEfFhW])) {
            if (k[KisnEfFhW][j] == who)
                printf ("%d\n", bmjK95B0aL[KisnEfFhW]);
            j = j + 1;
        };
    }
    return 0;
}

