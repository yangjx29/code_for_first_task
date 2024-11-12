int main () {
    char ePhGg3ctXrO [(308 - 206)] [102] = {(826 - 826)};
    int szs [102] [102] = {0};
    int OYiCmLNTj;
    int Uj2aC3lFk;
    int m;
    int ODUqd40;
    int igU3Yrz7fs;
    int PuBvNYyX;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    OYiCmLNTj = 0;
    scanf ("%d", &Uj2aC3lFk);
    for (ODUqd40 = (274 - 273); Uj2aC3lFk >= ODUqd40; ODUqd40++) {
        for (igU3Yrz7fs = (472 - 471); Uj2aC3lFk >= igU3Yrz7fs; igU3Yrz7fs++) {
            scanf (" %c", &ePhGg3ctXrO[ODUqd40][igU3Yrz7fs]);
            if (!('@' != ePhGg3ctXrO[ODUqd40][igU3Yrz7fs])) {
                OYiCmLNTj++;
            };
        };
    }
    scanf ("%d", &m);
    for (PuBvNYyX = 0; PuBvNYyX < m - (521 - 520); PuBvNYyX++) {
        for (ODUqd40 = (649 - 648); ODUqd40 <= Uj2aC3lFk; ODUqd40++) {
            for (igU3Yrz7fs = 1; Uj2aC3lFk >= igU3Yrz7fs; igU3Yrz7fs++) {
                if (!('@' != ePhGg3ctXrO[ODUqd40][igU3Yrz7fs])) {
                    szs[ODUqd40][igU3Yrz7fs] = 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            for (x = 0; x < 20; x++) {
                                y += x;
                            }
                            if (y > 30)
                                return y;
                        }
                    };
                };
            };
        }
        for (ODUqd40 = 1; ODUqd40 <= Uj2aC3lFk; ODUqd40++) {
            for (igU3Yrz7fs = 1; igU3Yrz7fs <= Uj2aC3lFk; igU3Yrz7fs++) {
                if (szs[ODUqd40][igU3Yrz7fs] == 1) {
                    if (ePhGg3ctXrO[ODUqd40 -1][igU3Yrz7fs] == '.') {
                        ePhGg3ctXrO[ODUqd40 -1][igU3Yrz7fs] = '@';
                        OYiCmLNTj++;
                    }
                    if (ePhGg3ctXrO[ODUqd40 +1][igU3Yrz7fs] == '.') {
                        ePhGg3ctXrO[ODUqd40 +1][igU3Yrz7fs] = '@';
                        OYiCmLNTj++;
                    }
                    if (ePhGg3ctXrO[ODUqd40][igU3Yrz7fs + 1] == '.') {
                        ePhGg3ctXrO[ODUqd40][igU3Yrz7fs + 1] = '@';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        OYiCmLNTj++;
                    }
                    if (ePhGg3ctXrO[ODUqd40][igU3Yrz7fs - 1] == '.') {
                        ePhGg3ctXrO[ODUqd40][igU3Yrz7fs - 1] = '@';
                        OYiCmLNTj++;
                    };
                };
            };
        };
    }
    printf ("%d", OYiCmLNTj);
    return 0;
}

