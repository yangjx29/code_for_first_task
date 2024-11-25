int f (int gyaOPHXM) {
    int N6mxGl9t;
    {
        N6mxGl9t = 3;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (N6mxGl9t <= (int) sqrt (gyaOPHXM)) {
            if (!(0 != gyaOPHXM % N6mxGl9t))
                break;
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
            N6mxGl9t = N6mxGl9t +2;
        };
    }
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
    if (N6mxGl9t > (int) sqrt (gyaOPHXM))
        return 1;
    else
        return 0;
}

void  main () {
    int W8daVz7y6;
    int m;
    int asIrkUt3R5M;
    int WayVDPNwEKlS;
    int QNWtxGPqB;
    int kpLcsYM1;
    W8daVz7y6 = 0;
    scanf ("%d", &kpLcsYM1);
    for (m = 6; m <= kpLcsYM1; m = m + 2) {
        QNWtxGPqB = 3;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (QNWtxGPqB < (m / 2 + 1)) {
            W8daVz7y6 = 0;
            asIrkUt3R5M = QNWtxGPqB;
            WayVDPNwEKlS = m - QNWtxGPqB;
            if (f (asIrkUt3R5M) && f (WayVDPNwEKlS)) {
                printf ("%d=%d+%d\n", m, asIrkUt3R5M, WayVDPNwEKlS);
                break;
            }
            QNWtxGPqB = QNWtxGPqB +2;
        };
    };
}

