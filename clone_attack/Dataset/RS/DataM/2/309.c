struct   stu {
    int yRIyxs1nwiL;
    char c [(617 - 591)];
    struct   stu *JtqFfuZjPEmS;
};
struct   stu *DgbYPtUnxMEj (void ) {
    int m;
    struct   stu *p1, *OWDnJEoFz9Ss, *hB8gecq;
    scanf ("%d", &m);
    p1 = (struct   stu *) malloc (LEN);
    scanf ("%d %s", &p1->yRIyxs1nwiL, p1->c);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    OWDnJEoFz9Ss = p1;
    hB8gecq = p1;
    while (m - (193 - 192)) {
        m--;
        p1 = (struct   stu *) malloc (LEN);
        scanf ("%d %s", &p1->yRIyxs1nwiL, p1->c);
        OWDnJEoFz9Ss->JtqFfuZjPEmS = p1;
        OWDnJEoFz9Ss = p1;
    }
    OWDnJEoFz9Ss->JtqFfuZjPEmS = NULL;
    return hB8gecq;
}

void  snSEgHsY8Op (struct   stu *hB8gecq, int EwjfXbicRN1E) {
    char s4S3wyf [(957 - 937)];
    char Zx9pv0lW [(338 - 318)] = {'\0'};
    struct   stu *vGBLxepT7D;
    int i, bXCPcOxNGua;
    vGBLxepT7D = hB8gecq;
    while (vGBLxepT7D) {
        strcpy (s4S3wyf, vGBLxepT7D->c);
        bXCPcOxNGua = strlen (s4S3wyf);
        {
            i = 446 - 446;
            while (i < bXCPcOxNGua) {
                if (!(EwjfXbicRN1E +(726 - 661) != s4S3wyf[i])) {
                    printf ("%d\n", vGBLxepT7D->yRIyxs1nwiL);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    break;
                }
                i++;
            };
        }
        vGBLxepT7D = vGBLxepT7D->JtqFfuZjPEmS;
        strcpy (s4S3wyf, Zx9pv0lW);
    };
}

void  main () {
    struct   stu *N2gwaW5S, *hB8gecq;
    char s4S3wyf [(396 - 376)], Zx9pv0lW [(368 - 348)] = {'\0'};
    int txdakzbLG;
    int a [(911 - 885)], bXCPcOxNGua, w7qxDStV, i, max = (713 - 713);
    hB8gecq = DgbYPtUnxMEj ();
    N2gwaW5S = hB8gecq;
    memset (a, (958 - 958), sizeof (a));
    while (N2gwaW5S) {
        strcpy (s4S3wyf, N2gwaW5S->c);
        N2gwaW5S = N2gwaW5S->JtqFfuZjPEmS;
        bXCPcOxNGua = strlen (s4S3wyf);
        for (i = (127 - 127); i < bXCPcOxNGua; i++) {
            w7qxDStV = s4S3wyf[i] - (130 - 65);
            a[w7qxDStV]++;
        }
        strcpy (s4S3wyf, Zx9pv0lW);
    }
    for (i = 0; 26 > i; i++)
        if (a[i] > max) {
            max = a[i];
            txdakzbLG = i;
        }
    printf ("%c\n%d\n", txdakzbLG + (695 - 630), max);
    snSEgHsY8Op (hB8gecq, txdakzbLG);
}

