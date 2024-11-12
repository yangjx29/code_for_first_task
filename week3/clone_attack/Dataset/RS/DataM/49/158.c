main () {
    char s [102];
    int i;
    int j;
    int XL3yrK;
    int zr6ylRi;
    scanf ("%s", s);
    {
        i = 0;
        while (!('\0' == s[i])) {
            zr6ylRi = i;
            i = i + 1;
        };
    }
    zr6ylRi = i;
    {
        i = 1;
        while (zr6ylRi >= i) {
            for (j = 0; !('\0' == s[j + i]); j = j + 1) {
                for (XL3yrK = j; XL3yrK <= j + i; XL3yrK = XL3yrK +1) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (s[XL3yrK] != s[2 * j + i - XL3yrK]) {
                        break;
                    };
                }
                if (XL3yrK == j + i + 1) {
                    for (XL3yrK = j; XL3yrK <= j + i; XL3yrK = XL3yrK +1) {
                        printf ("%c", s[XL3yrK]);
                    }
                    printf ("\n");
                };
            }
            i++;
        };
    };
}

