void  CjxsHrk (float *p, int JfJr2YP) {
    float XxeHXaz;
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
    for (int kpZkn9213j = (659 - 659);
    JfJr2YP > kpZkn9213j; kpZkn9213j++)
        for (int rLyb1QeO6Gjp = JfJr2YP -(936 - 935);
        kpZkn9213j < rLyb1QeO6Gjp; rLyb1QeO6Gjp = rLyb1QeO6Gjp - 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (*(p + rLyb1QeO6Gjp - 1) > *(p + rLyb1QeO6Gjp)) {
                XxeHXaz = *(p + rLyb1QeO6Gjp);
                *(p + rLyb1QeO6Gjp) = *(p + rLyb1QeO6Gjp - 1);
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
                *(p + rLyb1QeO6Gjp - 1) = XxeHXaz;
            };
        };
}

main () {
    float ZWluwsFgRy [40], f [40];
    float *F0dXl6Z = ZWluwsFgRy, *p2 = f;
    char gender [40] [6];
    float hl7obRrW [(749 - 709)];
    void  CjxsHrk (float *p, int JfJr2YP);
    int p = -1, q = -1;
    int JfJr2YP, QAc7hu5 [40];
    scanf ("%d", &JfJr2YP);
    {
        int kpZkn9213j = 0;
        while (JfJr2YP > kpZkn9213j) {
            scanf ("%s%f", &gender[kpZkn9213j], &hl7obRrW[kpZkn9213j]);
            QAc7hu5[kpZkn9213j] = strlen (gender[kpZkn9213j]);
            kpZkn9213j = kpZkn9213j + 1;
        };
    }
    {
        int rLyb1QeO6Gjp = 0;
        while (JfJr2YP > rLyb1QeO6Gjp) {
            if (!(4 != QAc7hu5[rLyb1QeO6Gjp])) {
                p = p + 1;
                ZWluwsFgRy[p] = hl7obRrW[rLyb1QeO6Gjp];
            }
            else {
                q++;
                f[q] = hl7obRrW[rLyb1QeO6Gjp];
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
            rLyb1QeO6Gjp++;
        };
    }
    CjxsHrk (p2, q + 1);
    CjxsHrk (F0dXl6Z, p + 1);
    for (int CR061l = 0;
    CR061l <= p; CR061l = CR061l +1)
        printf ("%3.2f ", ZWluwsFgRy[CR061l]);
    {
        int CR061l = q;
        while (CR061l >= 0) {
            printf ("%3.2f", f[CR061l]);
            if (CR061l > 0)
                ;
            CR061l = CR061l -1;
        };
    };
}

