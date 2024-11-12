main () {
    int a;
    int jrxE6dPojW;
    int fbS7Q3kTuAB;
    int V3Fz2yaK;
    int cIEBHr;
    int f6g8Nox2;
    int kbfaDL06vZ;
    int s9APhy6FH3UM;
    int dZJOY7I6SnN;
    int gLQWFI5M;
    char T2cVwqHrMsY [(132 - 32)];
    int PZlPDxWdKb [(795 - 695)];
    char y3hsCPL [(557 - 457)];
    cIEBHr = (294 - 294);
    scanf ("%d %s %d", &a, T2cVwqHrMsY, &jrxE6dPojW);
    gLQWFI5M = strlen (T2cVwqHrMsY);
    {
        f6g8Nox2 = 256 - 256;
        fbS7Q3kTuAB = 677 - 676;
        kbfaDL06vZ = 909 - 908;
        while (fbS7Q3kTuAB <= gLQWFI5M) {
            if ('a' <= T2cVwqHrMsY[gLQWFI5M - fbS7Q3kTuAB] && 'z' >= T2cVwqHrMsY[gLQWFI5M - fbS7Q3kTuAB])
                cIEBHr = T2cVwqHrMsY[gLQWFI5M - fbS7Q3kTuAB] - 'a' + (270 - 260);
            else if ('A' <= T2cVwqHrMsY[gLQWFI5M - fbS7Q3kTuAB] && 'Z' >= T2cVwqHrMsY[gLQWFI5M - fbS7Q3kTuAB])
                cIEBHr = T2cVwqHrMsY[gLQWFI5M - fbS7Q3kTuAB] - 'A' + (374 - 364);
            else
                cIEBHr = T2cVwqHrMsY[gLQWFI5M - fbS7Q3kTuAB] - '0';
            fbS7Q3kTuAB = fbS7Q3kTuAB + 1;
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
            f6g8Nox2 = f6g8Nox2 + cIEBHr * kbfaDL06vZ;
            kbfaDL06vZ = kbfaDL06vZ * a;
        };
    }
    if (f6g8Nox2 == (869 - 869))
        printf ("0");
    else {
        {
            V3Fz2yaK = 774 - 774;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (f6g8Nox2 > (676 - 676)) {
                PZlPDxWdKb[V3Fz2yaK] = f6g8Nox2 % jrxE6dPojW;
                dZJOY7I6SnN = V3Fz2yaK;
                V3Fz2yaK++;
                f6g8Nox2 = f6g8Nox2 / jrxE6dPojW;
            };
        }
        {
            s9APhy6FH3UM = 160 - 160;
            while (s9APhy6FH3UM <= dZJOY7I6SnN) {
                if (PZlPDxWdKb[s9APhy6FH3UM] >= 0 && PZlPDxWdKb[s9APhy6FH3UM] <= 9)
                    y3hsCPL[dZJOY7I6SnN - s9APhy6FH3UM] = PZlPDxWdKb[s9APhy6FH3UM] + '0';
                else
                    y3hsCPL[dZJOY7I6SnN - s9APhy6FH3UM] = PZlPDxWdKb[s9APhy6FH3UM] + 'A' - (254 - 244);
                s9APhy6FH3UM++;
            };
        }
        y3hsCPL[dZJOY7I6SnN + 1] = '\0';
        printf ("%s", y3hsCPL);
    };
}

