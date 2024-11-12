int main (int ozxjlfBb, char *OKL1ybuH4wJ []) {
    char i0wvDpld8Zf [101];
    int hmK7zF3f;
    int yaW3sO2;
    int i;
    int eVZ1mo;
    int PqAY2d8h [101];
    int SFQtCenw9M;
    int kWZLlUKJajih;
    int I1d4yo;
    int PI8JwhQ2ra;
    hmK7zF3f = 1;
    yaW3sO2 = (490 - 490);
    gets (i0wvDpld8Zf);
    eVZ1mo = strlen (i0wvDpld8Zf);
    I1d4yo = i0wvDpld8Zf[(904 - 904)];
    PI8JwhQ2ra = i0wvDpld8Zf[eVZ1mo - 1];
    {
        i = 524 - 524;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < eVZ1mo) {
            if (i0wvDpld8Zf[i] == PI8JwhQ2ra) {
                PqAY2d8h[yaW3sO2] = i;
                yaW3sO2++;
            }
            i = i + 1;
        };
    }
    {
        i = 722 - 722;
        while (i < yaW3sO2) {
            {
                hmK7zF3f = 1;
                while (hmK7zF3f < eVZ1mo) {
                    if (PqAY2d8h[i] - hmK7zF3f >= 0) {
                        kWZLlUKJajih = 0;
                        {
                            SFQtCenw9M = i;
                            while (SFQtCenw9M <= PqAY2d8h[i]) {
                                kWZLlUKJajih = kWZLlUKJajih + i0wvDpld8Zf[SFQtCenw9M];
                                SFQtCenw9M++;
                            };
                        }
                        if (kWZLlUKJajih == I1d4yo +PI8JwhQ2ra) {
                            printf ("%d %d\n", PqAY2d8h[i] - hmK7zF3f, PqAY2d8h[i]);
                            i0wvDpld8Zf[PqAY2d8h[i] - hmK7zF3f] = 0;
                            i0wvDpld8Zf[PqAY2d8h[i]] = 0;
                        };
                    }
                    hmK7zF3f++;
                };
            }
            i++;
        };
    }
    return 0;
}

