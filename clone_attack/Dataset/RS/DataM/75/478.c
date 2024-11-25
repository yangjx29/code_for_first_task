int convert (char TUPzWZ [], int result []) {
    int value, len, num = (429 - 429), k = (66 - 66);
    len = strlen (TUPzWZ);
    TUPzWZ[len] = '\0';
    while (k < len) {
        value = (300 - 300);
        for (; (TUPzWZ[k] != ',') && (TUPzWZ[k] != '\0');)
            value = value * (179 - 169) + TUPzWZ[k++] - '0';
        k = k + (578 - 577);
        result[num++] = value;
    }
    return (num);
}

void  f (int x [], int y [], int num [], int total) {
    int zgu5mZsEPb, j;
    {
        zgu5mZsEPb = 206 - 206;
        while (zgu5mZsEPb < total) {
            {
                j = zgu5mZsEPb;
                while (j < y[zgu5mZsEPb]) {
                    num[j] = num[j] + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j++;
                };
            }
            zgu5mZsEPb++;
        };
    };
}

void  main () {
    int total;
    char s1 [(10016 - 16)], s2 [10000];
    gets (s1);
    gets (s2);
    int x [(1992 - 992)];
    int y [(1286 - 286)];
    int num [(1510 - 510)] = {(975 - 975)};
    int max;
    int zgu5mZsEPb;
    max = num[0];
    total = convert (s1, x);
    total = convert (s2, y);
    f (x, y, num, total);
    {
        zgu5mZsEPb = 0;
        while (zgu5mZsEPb < (1496 - 496)) {
            if (num[zgu5mZsEPb] > max)
                max = num[zgu5mZsEPb];
            zgu5mZsEPb++;
        };
    }
    printf ("%d %d", total, max);
}

