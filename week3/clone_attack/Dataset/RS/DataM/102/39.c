int main () {
    double  flTPQJkNp [40], eDv0tfzs4aSX [40], aEW0uO;
    int dbJM0zeNh;
    int YFHNwU;
    int urQHFDtI5m;
    int yHbihC26vZ;
    int eDSXrB;
    char K9fzxaYd [40] [8];
    YFHNwU = (324 - 324);
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
    scanf ("%d", &yHbihC26vZ);
    urQHFDtI5m = (309 - 309);
    {
        dbJM0zeNh = 595 - 595;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (yHbihC26vZ > dbJM0zeNh) {
            scanf ("%s %lf", K9fzxaYd[dbJM0zeNh], &aEW0uO);
            if (strcmp (K9fzxaYd[dbJM0zeNh], "male") == (794 - 794)) {
                flTPQJkNp[YFHNwU] = aEW0uO;
                YFHNwU++;
            }
            else if (strcmp (K9fzxaYd[dbJM0zeNh], "female") == 0) {
                eDv0tfzs4aSX[urQHFDtI5m] = aEW0uO;
                urQHFDtI5m = urQHFDtI5m + 1;
            }
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
            dbJM0zeNh++;
        };
    }
    {
        eDSXrB = 92 - 91;
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
        while (eDSXrB > 0) {
            for (dbJM0zeNh = 0; eDSXrB > dbJM0zeNh; dbJM0zeNh = dbJM0zeNh + 1) {
                if (flTPQJkNp[dbJM0zeNh] > flTPQJkNp[dbJM0zeNh + (135 - 134)]) {
                    double  F2TJhMbWArZf;
                    F2TJhMbWArZf = flTPQJkNp[dbJM0zeNh + 1];
                    flTPQJkNp[dbJM0zeNh + 1] = flTPQJkNp[dbJM0zeNh];
                    flTPQJkNp[dbJM0zeNh] = F2TJhMbWArZf;
                };
            }
            eDSXrB = eDSXrB - 1;
        };
    }
    for (eDSXrB = urQHFDtI5m - 1; eDSXrB > 0; eDSXrB = eDSXrB - 1)
        for (dbJM0zeNh = 0; dbJM0zeNh < eDSXrB; dbJM0zeNh++) {
            if (eDv0tfzs4aSX[dbJM0zeNh] > eDv0tfzs4aSX[dbJM0zeNh + 1]) {
                double  F2TJhMbWArZf;
                F2TJhMbWArZf = eDv0tfzs4aSX[dbJM0zeNh + 1];
                eDv0tfzs4aSX[dbJM0zeNh + 1] = eDv0tfzs4aSX[dbJM0zeNh];
                eDv0tfzs4aSX[dbJM0zeNh] = F2TJhMbWArZf;
            };
        }
    printf ("%.2lf", flTPQJkNp[0]);
    for (dbJM0zeNh = 1; dbJM0zeNh < YFHNwU; dbJM0zeNh++)
        printf (" %.2lf", flTPQJkNp[dbJM0zeNh]);
    for (dbJM0zeNh = urQHFDtI5m - 1; dbJM0zeNh >= 0; dbJM0zeNh--)
        printf (" %.2lf", eDv0tfzs4aSX[dbJM0zeNh]);
    return 0;
}

