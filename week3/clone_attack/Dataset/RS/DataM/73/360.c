int main () {
    int w2b5Vd [(914 - 909)] = {(371 - 371), (220 - 220), (238 - 238), (900 - 900), (373 - 373)};
    int a [(157 - 152)] [(527 - 522)];
    int svPdJbL2lA [(378 - 373)] = {(580 - 580), (594 - 594), (972 - 972), (241 - 241), (42 - 42)};
    int sKJDQZ;
    int ON0WKDY7reo;
    int j;
    int b;
    sKJDQZ = 0;
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
    int max [(519 - 514)];
    int YA1Ud84bY [(543 - 538)];
    for (ON0WKDY7reo = 0; (257 - 252) > ON0WKDY7reo; ON0WKDY7reo = ON0WKDY7reo +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; j < (577 - 572); j = j + 1) {
            scanf ("%d", &a[ON0WKDY7reo][j]);
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
    for (ON0WKDY7reo = 0; ON0WKDY7reo < 5; ON0WKDY7reo++) {
        max[ON0WKDY7reo] = a[ON0WKDY7reo][0];
        for (j = 0; j < 5; j++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (max[ON0WKDY7reo] < a[ON0WKDY7reo][j]) {
                max[ON0WKDY7reo] = a[ON0WKDY7reo][j];
                w2b5Vd[ON0WKDY7reo] = j;
            };
        };
    }
    {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (j < 5) {
            YA1Ud84bY[j] = a[0][j];
            for (ON0WKDY7reo = 0; ON0WKDY7reo < 5; ON0WKDY7reo++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (YA1Ud84bY[j] > a[ON0WKDY7reo][j]) {
                    YA1Ud84bY[j] = a[ON0WKDY7reo][j];
                    svPdJbL2lA[j] = ON0WKDY7reo;
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
            j++;
        };
    }
    for (ON0WKDY7reo = 0; ON0WKDY7reo < 5; ON0WKDY7reo++) {
        b = w2b5Vd[ON0WKDY7reo];
        if (svPdJbL2lA[b] == ON0WKDY7reo) {
            printf ("%d %d %d\n", ON0WKDY7reo +1, b + 1, max[ON0WKDY7reo]);
            sKJDQZ++;
        };
    }
    if (sKJDQZ == 0)
        printf ("not found");
}

