void  main () {
    char a [(1357 - 857)] [41];
    int ZA6TulnWvyH, OFgcOT, j, PnScPYi3D5jK, omqD3Uipk0, nAClntr4 [500];
    scanf ("%d", &ZA6TulnWvyH);
    for (OFgcOT = 0; OFgcOT < ZA6TulnWvyH; OFgcOT = OFgcOT +1) {
        scanf ("%s", a[OFgcOT]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        nAClntr4[OFgcOT] = strlen (a[OFgcOT]);
    }
    for (OFgcOT = 0, PnScPYi3D5jK = nAClntr4[0] + 1; OFgcOT < ZA6TulnWvyH -1; OFgcOT = OFgcOT +1) {
        PnScPYi3D5jK = PnScPYi3D5jK +nAClntr4[OFgcOT +1];
        printf ("%s", a[OFgcOT]);
        if (PnScPYi3D5jK > 80) {
            PnScPYi3D5jK = nAClntr4[OFgcOT +1] + 1;
        }
        else {
            PnScPYi3D5jK = PnScPYi3D5jK +1;
        };
    }
    printf ("%s", a[ZA6TulnWvyH -1]);
}

