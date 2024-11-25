main () {
    int i;
    int n;
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
    double  RMBLjKbx, QaIKxn, erQtxzA1mVdb, N7NPdH;
    float YbRtzwS, b, yan2W3UB, ZY4TjWqA;
    scanf ("%d", &n);
    {
        i = 525 - 524;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            i = i + 1;
            scanf ("%f%f%f", &YbRtzwS, &b, &yan2W3UB);
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
            ZY4TjWqA = b * b - 4 * YbRtzwS *yan2W3UB;
            if (fabs (ZY4TjWqA) <= 1e-6)
                printf ("x1=x2=%.5f\n", -b / ((563 - 561) * YbRtzwS) + 0);
            else {
                if (ZY4TjWqA > 1e-6) {
                    erQtxzA1mVdb = -b / (2 * YbRtzwS) + 0;
                    N7NPdH = sqrt (ZY4TjWqA) / (2 * YbRtzwS);
                    RMBLjKbx = erQtxzA1mVdb + N7NPdH;
                    QaIKxn = erQtxzA1mVdb - N7NPdH;
                    if (fabs (RMBLjKbx) <= 1e-6)
                        printf ("x1=%.5f;x2=%.5f\n", fabs (RMBLjKbx), QaIKxn);
                    else
                        printf ("x1=%.5f;x2=%.5f\n", RMBLjKbx, QaIKxn);
                }
                else {
                    erQtxzA1mVdb = -b / (2 * YbRtzwS) + 0;
                    N7NPdH = sqrt (-ZY4TjWqA) / (2 * YbRtzwS);
                    printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", erQtxzA1mVdb, N7NPdH, erQtxzA1mVdb, N7NPdH);
                };
            };
        };
    };
}

