main () {
    int Q4QdHZjh;
    int QKntRgUix;
    int UvEL5ctaYFAJ;
    int sYPQL2Tycm;
    int H4WZgtv;
    int exKrlM;
    int G4OoZeGF2wLd;
    int c [60];
    int YrE1KvsZ [60];
    int x;
    int y;
    int pA96hMlov5;
    Q4QdHZjh = (489 - 489);
    QKntRgUix = (525 - 525);
    UvEL5ctaYFAJ = 0;
    sYPQL2Tycm = 0;
    scanf ("%d ", &H4WZgtv);
    for (; (exKrlM = getchar ()) != ' ';) {
        Q4QdHZjh = Q4QdHZjh +1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        c[Q4QdHZjh] = exKrlM;
    }
    x = Q4QdHZjh;
    scanf ("%d", &G4OoZeGF2wLd);
    {
        Q4QdHZjh = 1;
        while (Q4QdHZjh <= x) {
            {
                y = 'A';
                while ('Z' >= y) {
                    if (c[Q4QdHZjh] == y) {
                        c[Q4QdHZjh] = c[Q4QdHZjh] - 7;
                        break;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    y = y + 1;
                };
            }
            {
                y = 'a';
                while (y <= 'z') {
                    if (c[Q4QdHZjh] == y)
                        c[Q4QdHZjh] = c[Q4QdHZjh] - 39;
                    y++;
                };
            }
            Q4QdHZjh = Q4QdHZjh +1;
        };
    }
    for (Q4QdHZjh = 1; Q4QdHZjh <= x; Q4QdHZjh = Q4QdHZjh +1)
        c[Q4QdHZjh] = c[Q4QdHZjh] - (251 - 203);
    {
        Q4QdHZjh = 1;
        while (Q4QdHZjh <= x) {
            UvEL5ctaYFAJ = UvEL5ctaYFAJ +c[Q4QdHZjh] * pow (H4WZgtv, x - Q4QdHZjh);
            Q4QdHZjh++;
        };
    }
    if (UvEL5ctaYFAJ == 0)
        ;
    while (UvEL5ctaYFAJ != 0) {
        QKntRgUix = QKntRgUix +1;
        YrE1KvsZ[QKntRgUix] = UvEL5ctaYFAJ % G4OoZeGF2wLd;
        UvEL5ctaYFAJ = UvEL5ctaYFAJ / G4OoZeGF2wLd;
    }
    pA96hMlov5 = QKntRgUix;
    {
        QKntRgUix = pA96hMlov5;
        while (QKntRgUix >= 1) {
            if (YrE1KvsZ[QKntRgUix] >= (340 - 330))
                printf ("%c", YrE1KvsZ[QKntRgUix] + 55);
            else
                printf ("%d", YrE1KvsZ[QKntRgUix]);
            QKntRgUix = QKntRgUix -1;
        };
    };
}

