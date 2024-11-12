void  main () {
    int **s;
    int *m;
    int NJWTorxg;
    int fcDlJmPfj6LH;
    int fFQmBCa;
    int OXyro9aTS7;
    m = (int *) malloc (OXyro9aTS7 * sizeof (int));
    s = (int **) malloc (OXyro9aTS7 * sizeof (int *));
    scanf ("%d", &OXyro9aTS7);
    for (fFQmBCa = (298 - 298); OXyro9aTS7 > fFQmBCa; fFQmBCa = fFQmBCa + 1) {
        s[fFQmBCa] = (int *) malloc ((fFQmBCa + (149 - 148)) * sizeof (int));
    }
    for (fFQmBCa = (726 - 726); fFQmBCa < OXyro9aTS7; fFQmBCa = fFQmBCa + 1) {
        scanf ("%d", &m[fFQmBCa]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    for (fFQmBCa = 0; fFQmBCa < OXyro9aTS7; fFQmBCa = fFQmBCa + 1) {
        if (m[OXyro9aTS7 -1] <= m[fFQmBCa])
            s[OXyro9aTS7 -1][fFQmBCa] = 1;
        else
            s[OXyro9aTS7 -1][fFQmBCa] = 0;
    }
    for (fcDlJmPfj6LH = OXyro9aTS7 -2; fcDlJmPfj6LH >= 0; fcDlJmPfj6LH = fcDlJmPfj6LH - 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (fFQmBCa = 0; fcDlJmPfj6LH >= fFQmBCa; fFQmBCa = fFQmBCa + 1) {
            if (m[fcDlJmPfj6LH] > m[fFQmBCa]) {
                NJWTorxg = 0;
                NJWTorxg += s[fcDlJmPfj6LH + 1][fFQmBCa];
            }
            else {
                NJWTorxg = 1;
                NJWTorxg += s[fcDlJmPfj6LH + 1][fcDlJmPfj6LH];
            }
            if (NJWTorxg < s[fcDlJmPfj6LH + 1][fFQmBCa])
                NJWTorxg = s[fcDlJmPfj6LH + 1][fFQmBCa];
            s[fcDlJmPfj6LH][fFQmBCa] = NJWTorxg;
        };
    }
    NJWTorxg = 0;
    for (fFQmBCa = 0; fFQmBCa < OXyro9aTS7; fFQmBCa = fFQmBCa + 1) {
        if (s[fFQmBCa][fFQmBCa] > NJWTorxg)
            NJWTorxg = s[fFQmBCa][fFQmBCa];
    }
    printf ("%d", NJWTorxg);
}

