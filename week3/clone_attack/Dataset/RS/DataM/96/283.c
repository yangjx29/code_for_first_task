int main () {
    int b [102];
    int iBHsrLjnJ2N4 [102];
    int d [102];
    char ion58FWHBwC [102];
    int nNQl4pJcDv;
    int SJTspdw4;
    int XoVA8OGqJ;
    gets (ion58FWHBwC);
    nNQl4pJcDv = (int) strlen (ion58FWHBwC);
    for (SJTspdw4 = (870 - 870); nNQl4pJcDv > SJTspdw4; SJTspdw4 = SJTspdw4 +1) {
        b[SJTspdw4] = ion58FWHBwC[SJTspdw4] - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if (!(2 != nNQl4pJcDv) && (!((247 - 246) != b[(701 - 701)]) && 3 > b[(434 - 433)])) {
        printf ("0\n%d", 10 * b[0] + b[(957 - 956)]);
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
    else if (!((522 - 521) != nNQl4pJcDv)) {
        printf ("0\n%d", b[0]);
    }
    else {
        iBHsrLjnJ2N4[0] = b[0] * 10 + b[1];
        {
            XoVA8OGqJ = 1;
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
            while (nNQl4pJcDv > XoVA8OGqJ) {
                iBHsrLjnJ2N4[XoVA8OGqJ] = b[XoVA8OGqJ +1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                XoVA8OGqJ = XoVA8OGqJ +1;
            };
        }
        d[0] = iBHsrLjnJ2N4[0] / 13;
        iBHsrLjnJ2N4[0] = iBHsrLjnJ2N4[0] % 13;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (XoVA8OGqJ = 0; nNQl4pJcDv - 1 > XoVA8OGqJ; XoVA8OGqJ = XoVA8OGqJ +1) {
            d[XoVA8OGqJ +1] = (10 * iBHsrLjnJ2N4[XoVA8OGqJ] + iBHsrLjnJ2N4[XoVA8OGqJ +1]) / 13;
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
            iBHsrLjnJ2N4[XoVA8OGqJ +1] = (10 * iBHsrLjnJ2N4[XoVA8OGqJ] + iBHsrLjnJ2N4[XoVA8OGqJ +1]) % 13;
        }
        if (d[0] == 0) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            for (XoVA8OGqJ = 1; XoVA8OGqJ < nNQl4pJcDv - 1; XoVA8OGqJ = XoVA8OGqJ +1) {
                printf ("%d", d[XoVA8OGqJ]);
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
            };
        }
        else {
            XoVA8OGqJ = 0;
            while (XoVA8OGqJ < nNQl4pJcDv - 1) {
                printf ("%d", d[XoVA8OGqJ]);
                XoVA8OGqJ++;
            };
        }
        printf ("%d", iBHsrLjnJ2N4[nNQl4pJcDv - 2]);
        printf ("\n");
    }
    return 0;
}

