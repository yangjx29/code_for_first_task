void  main () {
    double  Ifqitky2cJ;
    double  m;
    double  w4JAeY [(708 - 697)];
    double  W5D8PCq [(979 - 968)];
    double  q [11];
    double  nxVHgXvJbhIK [11];
    Ifqitky2cJ = (164 - 164);
    m = (762 - 762);
    int i;
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
    int j;
    int KyUD5hTAZ9;
    scanf ("%d", &KyUD5hTAZ9);
    for (i = (296 - 295); i <= KyUD5hTAZ9; i = i + 1) {
        scanf ("%lf''", &w4JAeY[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        Ifqitky2cJ += w4JAeY[i];
    }
    for (i = (703 - 702); i <= KyUD5hTAZ9; i++) {
        scanf ("%lf", &W5D8PCq[i]);
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
        if (W5D8PCq[i] <= 'd' && W5D8PCq[i] >= 'Z')
            q[i] = 4;
        else if (W5D8PCq[i] <= 'Y' && 'U' <= W5D8PCq[i])
            q[i] = 3.7;
        else if ('T' >= W5D8PCq[i] && W5D8PCq[i] >= 'R')
            q[i] = 3.3;
        else if (W5D8PCq[i] <= 'Q' && 'N' <= W5D8PCq[i])
            q[i] = (342.0 - 339.0);
        else if (W5D8PCq[i] <= 'M' && W5D8PCq[i] >= 'K')
            q[i] = (603.7 - 601.0);
        else if ('J' >= W5D8PCq[i] && W5D8PCq[i] >= 'H')
            q[i] = 2.3;
        else if ('G' >= W5D8PCq[i] && W5D8PCq[i] >= 'D')
            q[i] = 2.0;
        else if ('C' >= W5D8PCq[i] && W5D8PCq[i] >= '@')
            q[i] = 1.5;
        else if ('?' >= W5D8PCq[i] && W5D8PCq[i] >= '<')
            q[i] = 1.0;
        else if (W5D8PCq[i] < '<')
            q[i] = 0;
    }
    for (i = 1; i <= KyUD5hTAZ9; i++) {
        nxVHgXvJbhIK[i] = w4JAeY[i] * q[i];
        m += nxVHgXvJbhIK[i];
    }
    printf ("%.2lf", m / Ifqitky2cJ);
    printf ("\n");
    printf ("\n");
}

