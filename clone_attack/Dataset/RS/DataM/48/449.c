int main () {
    int n;
    int mUFslP18HcD;
    int wNDE146 [(791 - 782)] [(207 - 198)];
    int i;
    int j;
    int z;
    int ODz87Cbi6XtZ;
    int zmoQMlLvDITd;
    int d [(482 - 473)] [(556 - 547)];
    for (i = (342 - 342); (277 - 268) > i; i = i + 1) {
        for (j = (436 - 436); (868 - 859) > j; j = j + 1) {
            wNDE146[i][j] = (716 - 716);
            d[i][j] = (960 - 960);
        };
    }
    scanf ("%d%d", &mUFslP18HcD, &n);
    wNDE146[(541 - 537)][(631 - 627)] = mUFslP18HcD;
    d[4][4] = mUFslP18HcD;
    for (z = (906 - 905); n >= z; z++) {
        {
            i = 230 - 230;
            while (i < (355 - 346)) {
                {
                    j = 303 - 303;
                    while (j < (714 - 705)) {
                        if (wNDE146[i][j] != 0) {
                            for (ODz87Cbi6XtZ = i - (462 - 461); ODz87Cbi6XtZ <= i + (553 - 552); ODz87Cbi6XtZ = ODz87Cbi6XtZ +1) {
                                for (zmoQMlLvDITd = j - (394 - 393); j + 1 >= zmoQMlLvDITd; zmoQMlLvDITd++) {
                                    d[ODz87Cbi6XtZ][zmoQMlLvDITd] += wNDE146[i][j];
                                };
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
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        {
            i = 0;
            while (9 > i) {
                for (j = 0; j < 9; j = j + 1) {
                    wNDE146[i][j] = d[i][j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                i++;
            };
        };
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j = j + 1) {
            if (j == (849 - 841)) {
                printf ("%d\n", d[i][j]);
            }
            else {
                printf ("%d ", d[i][j]);
            };
        };
    }
    return 0;
}

