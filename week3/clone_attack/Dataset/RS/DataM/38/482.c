int main () {
    int m;
    int YNCqzbL;
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
    scanf ("%d", &m);
    {
        YNCqzbL = 198 - 198;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (YNCqzbL < m) {
            double  BpqD5v4;
            double  a;
            double  kOCLgN [100];
            double  *p;
            BpqD5v4 = (657 - 657);
            a = (263 - 263);
            int pECM1q3Zv;
            int SOEB4v;
            YNCqzbL++;
            p = &kOCLgN[0];
            scanf ("%d", &pECM1q3Zv);
            {
                SOEB4v = 0;
                while (SOEB4v < pECM1q3Zv) {
                    scanf ("%lf ", p + SOEB4v);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    SOEB4v = SOEB4v +1;
                };
            }
            {
                SOEB4v = 0;
                while (SOEB4v < pECM1q3Zv) {
                    a += *(p + SOEB4v);
                    SOEB4v = SOEB4v +1;
                };
            }
            a = a / pECM1q3Zv;
            {
                SOEB4v = 0;
                while (SOEB4v < pECM1q3Zv) {
                    BpqD5v4 = BpqD5v4 +(*(p + SOEB4v) - a) * (*(p + SOEB4v) - a);
                    SOEB4v++;
                };
            }
            BpqD5v4 = BpqD5v4 / pECM1q3Zv;
            BpqD5v4 = pow (BpqD5v4, 0.5);
            printf ("%.5lf\n", BpqD5v4);
        };
    }
    return 0;
}

