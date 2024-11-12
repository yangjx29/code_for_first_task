int main (int tgKHhf05, char *argv []) {
    int j;
    int e8gLcdSe;
    int AZG8W7agOSl;
    int d;
    int s;
    int vNl078;
    int n2;
    int TIFUgrQMAfX;
    j = (268 - 268);
    e8gLcdSe = (730 - 730);
    int sVNIuZ [250] = {(774 - 774)};
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
    char G8z3cy [250];
    char VsvE0COaX [250];
    scanf ("%s%s", G8z3cy, VsvE0COaX);
    vNl078 = strlen (G8z3cy);
    n2 = strlen (VsvE0COaX);
    if (n2 < vNl078) {
        TIFUgrQMAfX = vNl078;
        d = vNl078 - n2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            AZG8W7agOSl = 945 - 944;
            while (AZG8W7agOSl -d >= (853 - 853)) {
                s = G8z3cy[AZG8W7agOSl] + VsvE0COaX[AZG8W7agOSl -d] - '0' - '0';
                if (s + j > (792 - 783)) {
                    sVNIuZ[AZG8W7agOSl] = s - 10 + j;
                    j = (102 - 101);
                }
                else {
                    sVNIuZ[AZG8W7agOSl] = s + j;
                    j = (565 - 565);
                }
                AZG8W7agOSl = AZG8W7agOSl -1;
            };
        }
        {
            AZG8W7agOSl = 362 - 361;
            while (0 <= AZG8W7agOSl) {
                s = G8z3cy[AZG8W7agOSl] + j - '0';
                if (s > 9) {
                    j = (409 - 408);
                    sVNIuZ[AZG8W7agOSl] = s - 10;
                }
                else {
                    j = 0;
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
                    sVNIuZ[AZG8W7agOSl] = s;
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
                AZG8W7agOSl = AZG8W7agOSl -1;
            };
        };
    }
    else {
        TIFUgrQMAfX = n2;
        d = n2 - vNl078;
        {
            AZG8W7agOSl = n2 - 1;
            while (AZG8W7agOSl -d >= 0) {
                s = VsvE0COaX[AZG8W7agOSl] + G8z3cy[AZG8W7agOSl -d] - '0' - '0';
                if (s + j > 9) {
                    sVNIuZ[AZG8W7agOSl] = s - 10 + j;
                    j = 1;
                }
                else {
                    sVNIuZ[AZG8W7agOSl] = s + j;
                    j = 0;
                }
                AZG8W7agOSl--;
            };
        }
        for (AZG8W7agOSl = d - 1; AZG8W7agOSl >= 0; AZG8W7agOSl = AZG8W7agOSl -1) {
            s = VsvE0COaX[AZG8W7agOSl] + j - '0';
            if (s > 9) {
                sVNIuZ[AZG8W7agOSl] = s - 10;
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
                j = 1;
            }
            else {
                j = 0;
                sVNIuZ[AZG8W7agOSl] = s;
            };
        };
    }
    if (j == 1) {
        printf ("1");
    }
    for (AZG8W7agOSl = 0; AZG8W7agOSl < TIFUgrQMAfX; AZG8W7agOSl = AZG8W7agOSl +1) {
        if (sVNIuZ[AZG8W7agOSl] != 0)
            e8gLcdSe = 1;
        if (e8gLcdSe == 1 || (e8gLcdSe == 0 && j == 1))
            printf ("%d", sVNIuZ[AZG8W7agOSl]);
    }
    if (e8gLcdSe == 0 && j == 0)
        ;
    return 0;
}

