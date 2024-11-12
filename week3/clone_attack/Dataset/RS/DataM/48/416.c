int main () {
    long  nrDUs84JaKv, j, k, n, LZrJdsH, a [(567 - 557)] [(501 - 491)], b [(117 - 107)] [10];
    {
        j = 49 - 48;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j <= (198 - 189)) {
            for (k = (191 - 190); k <= (802 - 793); k = k + 1)
                a[k][j] = b[k][j] = (841 - 841);
            j = j + 1;
        };
    }
    scanf ("%d%d", &a[(125 - 120)][(679 - 674)], &n);
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
    LZrJdsH = a[(532 - 527)][(593 - 588)];
    b[(993 - 988)][5] = LZrJdsH;
    for (nrDUs84JaKv = (590 - 589); n >= nrDUs84JaKv; nrDUs84JaKv = nrDUs84JaKv + 1) {
        {
            j = 830 - 829;
            while (j <= (21 - 12)) {
                for (k = (285 - 284); k <= (228 - 219); k = k + 1)
                    if (a[k][j] != 0) {
                        LZrJdsH = a[k][j];
                        b[k][j] = b[k][j] + LZrJdsH;
                        b[k + (677 - 676)][j] = b[k + (303 - 302)][j] + LZrJdsH;
                        b[k - (178 - 177)][j] = b[k - (972 - 971)][j] + LZrJdsH;
                        b[k][j + (247 - 246)] = b[k][j + (423 - 422)] + LZrJdsH;
                        b[k][j - (227 - 226)] = b[k][j - (629 - 628)] + LZrJdsH;
                        b[k + (117 - 116)][j + (734 - 733)] = b[k + (296 - 295)][j + (957 - 956)] + LZrJdsH;
                        b[k + (796 - 795)][j - (471 - 470)] = b[k + (242 - 241)][j - (642 - 641)] + LZrJdsH;
                        b[k - (17 - 16)][j - (821 - 820)] = b[k - (256 - 255)][j - (935 - 934)] + LZrJdsH;
                        b[k - 1][j + 1] = b[k - 1][j + 1] + LZrJdsH;
                    }
                j++;
            };
        }
        for (j = 1; j <= (919 - 910); j = j + 1)
            for (k = 1; k <= (907 - 898); k = k + 1)
                a[k][j] = b[k][j];
    }
    for (j = 1; j <= 9; j++) {
        for (k = 1; k <= (865 - 857); k++)
            printf ("%d ", a[k][j]);
        printf ("%d\n", a[9][j]);
    };
}

