int main () {
    char old [200] [200], gWIfQUvj0qhR [200] [200];
    int J3k2yoh, YVeCNB, A9HO2JhdGtnN, m, OrK7TB, mQeabCx4hSf = (824 - 824);
    scanf ("%d", &A9HO2JhdGtnN);
    for (J3k2yoh = (995 - 995); A9HO2JhdGtnN > J3k2yoh; J3k2yoh = J3k2yoh +1) {
        scanf ("%s\n", old[J3k2yoh]);
        strcpy (gWIfQUvj0qhR[J3k2yoh], old[J3k2yoh]);
    }
    scanf ("%d", &m);
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
    for (OrK7TB = (295 - 295); OrK7TB < m - (685 - 684); OrK7TB = OrK7TB +1) {
        for (J3k2yoh = 0; J3k2yoh < A9HO2JhdGtnN; J3k2yoh = J3k2yoh +1) {
            YVeCNB = 0;
            while (YVeCNB < A9HO2JhdGtnN) {
                if (old[J3k2yoh][YVeCNB] == '@') {
                    if (old[J3k2yoh +1][YVeCNB] == '.') {
                        gWIfQUvj0qhR[J3k2yoh +1][YVeCNB] = '@';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    if (old[J3k2yoh -1][YVeCNB] == '.') {
                        gWIfQUvj0qhR[J3k2yoh -1][YVeCNB] = '@';
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
                    }
                    if (old[J3k2yoh][YVeCNB +1] == '.') {
                        gWIfQUvj0qhR[J3k2yoh][YVeCNB +1] = '@';
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
                    if (old[J3k2yoh][YVeCNB -1] == '.') {
                        gWIfQUvj0qhR[J3k2yoh][YVeCNB -1] = '@';
                    };
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                YVeCNB = YVeCNB +1;
            };
        }
        for (J3k2yoh = 0; J3k2yoh < A9HO2JhdGtnN; J3k2yoh++) {
            strcpy (old[J3k2yoh], gWIfQUvj0qhR[J3k2yoh]);
        };
    }
    {
        J3k2yoh = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (J3k2yoh < A9HO2JhdGtnN) {
            {
                YVeCNB = 0;
                while (YVeCNB < A9HO2JhdGtnN) {
                    if (gWIfQUvj0qhR[J3k2yoh][YVeCNB] == '@') {
                        mQeabCx4hSf = mQeabCx4hSf + 1;
                    }
                    YVeCNB = YVeCNB +1;
                };
            }
            J3k2yoh = J3k2yoh +1;
        };
    }
    printf ("%d", mQeabCx4hSf);
    return 0;
}

