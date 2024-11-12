int main () {
    double  PyfJHCZM;
    int libkEJU;
    int kZ93t7m;
    int uswN2DLoBr;
    int QgCSnI;
    int zT8zByvI;
    libkEJU = 0;
    kZ93t7m = 0;
    char sSCIfTh5 [501], z1H3VXp [501];
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
    scanf ("%lf", &PyfJHCZM);
    scanf ("%s", sSCIfTh5);
    scanf ("%s", z1H3VXp);
    uswN2DLoBr = strlen (sSCIfTh5);
    zT8zByvI = strlen (z1H3VXp);
    if (!(zT8zByvI == uswN2DLoBr)) {
        libkEJU = 1;
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
    if (!(0 != libkEJU)) {
        for (QgCSnI = 0; sSCIfTh5[QgCSnI] != '\0' && !('\0' == z1H3VXp[QgCSnI]); QgCSnI++) {
            if (((!('A' == sSCIfTh5[QgCSnI])) && (!('T' == sSCIfTh5[QgCSnI])) && (!('C' == sSCIfTh5[QgCSnI])) && (!('G' == sSCIfTh5[QgCSnI]))) || ((z1H3VXp[QgCSnI] != 'A') && (z1H3VXp[QgCSnI] != 'T') && (z1H3VXp[QgCSnI] != 'C') && (z1H3VXp[QgCSnI] != 'G'))) {
                libkEJU = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            }
            if (sSCIfTh5[QgCSnI] == z1H3VXp[QgCSnI]) {
                kZ93t7m++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            };
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
        if ((1.0 * kZ93t7m / uswN2DLoBr) > PyfJHCZM &&libkEJU == 0) {
            printf ("yes");
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else if (libkEJU == 0) {
            printf ("no");
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
    }
    if (libkEJU == 1) {
        printf ("error");
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
    return 0;
}

