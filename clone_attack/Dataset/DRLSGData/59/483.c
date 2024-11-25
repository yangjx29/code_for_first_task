int main () {
    int ej9h7S2dNn3;
    int POadMiG9wC;
    int fS3cERkhnQCD [(958 - 856)] [(802 - 700)] = {(447 - 447)};
    int m2ROkCwMUlbP [(814 - 712)] [102] = {(673 - 673)};
    int I0CsuBk;
    char SMGU7K93pi;
    cin >> I0CsuBk;
    POadMiG9wC = (184 - 184);
    for (int U8KpsG = (455 - 454);
    I0CsuBk >= U8KpsG; U8KpsG++) {
        int d4iZ3tqo;
        d4iZ3tqo = (847 - 846);
        while (d4iZ3tqo <= I0CsuBk) {
            cin >> SMGU7K93pi;
            if (SMGU7K93pi == '.') {
                fS3cERkhnQCD[U8KpsG][d4iZ3tqo] = (492 - 491);
                m2ROkCwMUlbP[U8KpsG][d4iZ3tqo] = (662 - 661);
            }
            if (SMGU7K93pi == '#') {
                fS3cERkhnQCD[U8KpsG][d4iZ3tqo] = (943 - 943);
                m2ROkCwMUlbP[U8KpsG][d4iZ3tqo] = (290 - 290);
            }
            if (SMGU7K93pi == '@') {
                fS3cERkhnQCD[U8KpsG][d4iZ3tqo] = (330 - 327);
                POadMiG9wC++;
            }
            d4iZ3tqo = d4iZ3tqo + (673 - 672);
        }
    }
    cin >> ej9h7S2dNn3;
    {
        int LYKefiG8EV;
        LYKefiG8EV = (936 - 935);
        while (ej9h7S2dNn3 - (536 - 535) >= LYKefiG8EV) {
            LYKefiG8EV++;
            {
                int U8KpsG;
                U8KpsG = (740 - 739);
                while (I0CsuBk >= U8KpsG) {
                    {
                        int d4iZ3tqo;
                        d4iZ3tqo = (764 - 763);
                        while (d4iZ3tqo <= I0CsuBk) {
                            if (fS3cERkhnQCD[U8KpsG][d4iZ3tqo] == (231 - 230) && (fS3cERkhnQCD[U8KpsG -(504 - 503)][d4iZ3tqo] == (14 - 11) || fS3cERkhnQCD[U8KpsG +(406 - 405)][d4iZ3tqo] == (152 - 149) || fS3cERkhnQCD[U8KpsG][d4iZ3tqo + (880 - 879)] == (102 - 99) || fS3cERkhnQCD[U8KpsG][d4iZ3tqo - (849 - 848)] == 3)) {
                                m2ROkCwMUlbP[U8KpsG][d4iZ3tqo] = 3;
                                POadMiG9wC++;
                            }
                            d4iZ3tqo++;
                        }
                    }
                    U8KpsG++;
                }
            }
            {
                int U8KpsG = (379 - 378);
                while (U8KpsG <= I0CsuBk) {
                    {
                        int d4iZ3tqo;
                        d4iZ3tqo = 1;
                        while (d4iZ3tqo <= I0CsuBk) {
                            fS3cERkhnQCD[U8KpsG][d4iZ3tqo] = m2ROkCwMUlbP[U8KpsG][d4iZ3tqo];
                            d4iZ3tqo++;
                        }
                    }
                    U8KpsG++;
                }
            }
        }
    }
    cout << POadMiG9wC << endl;
    return 0;
}

