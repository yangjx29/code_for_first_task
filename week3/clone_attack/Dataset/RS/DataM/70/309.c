main () {
    double  CbBqmORFKpz;
    double  zxgCZAWU12T3 [500];
    double  dknJc47A1fX [500];
    double  mVHYlbECpF;
    double  GDSsGC;
    double  JK6d0utcnr;
    CbBqmORFKpz = 0;
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
    int luf6pgL, tfugOpbnitPE, faUjEHiX;
    scanf ("%d", &faUjEHiX);
    for (luf6pgL = 0; luf6pgL < faUjEHiX; luf6pgL++)
        scanf ("%lf %lf", &zxgCZAWU12T3[luf6pgL], &dknJc47A1fX[luf6pgL]);
    {
        luf6pgL = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (luf6pgL < faUjEHiX) {
            {
                tfugOpbnitPE = 0;
                while (tfugOpbnitPE < luf6pgL) {
                    GDSsGC = zxgCZAWU12T3[luf6pgL] - zxgCZAWU12T3[tfugOpbnitPE];
                    JK6d0utcnr = dknJc47A1fX[luf6pgL] - dknJc47A1fX[tfugOpbnitPE];
                    mVHYlbECpF = sqrt (GDSsGC *GDSsGC+JK6d0utcnr*JK6d0utcnr);
                    if (mVHYlbECpF > CbBqmORFKpz)
                        CbBqmORFKpz = mVHYlbECpF;
                    tfugOpbnitPE++;
                };
            }
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
            }
            luf6pgL++;
        };
    }
    printf ("%.4lf", CbBqmORFKpz);
    getchar ();
    getchar ();
}

