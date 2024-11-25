int main () {
    int jTyAVpUDmqu, MzdfLBhF, kXltmOrLpI9 = 1, n, Z4Bm0tC, ohvWEzAO8GYw;
    char C4gOWf [256], s2 [256], zH7fUIg6v [256];
    scanf ("%s", C4gOWf);
    n = strlen (C4gOWf);
    scanf ("%s", s2);
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
    Z4Bm0tC = strlen (s2);
    scanf ("%s", zH7fUIg6v);
    {
        jTyAVpUDmqu = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > jTyAVpUDmqu) {
            if (C4gOWf[jTyAVpUDmqu] == s2[0]) {
                {
                    MzdfLBhF = 1;
                    while (MzdfLBhF < Z4Bm0tC) {
                        if (!(s2[MzdfLBhF] != C4gOWf[MzdfLBhF +jTyAVpUDmqu]))
                            kXltmOrLpI9 = kXltmOrLpI9 + 1;
                        MzdfLBhF = MzdfLBhF +1;
                    };
                }
                if (!(Z4Bm0tC != kXltmOrLpI9)) {
                    {
                        ohvWEzAO8GYw = 0;
                        while (jTyAVpUDmqu > ohvWEzAO8GYw) {
                            printf ("%c", C4gOWf[ohvWEzAO8GYw]);
                            ohvWEzAO8GYw = ohvWEzAO8GYw + 1;
                        };
                    }
                    {
                        ohvWEzAO8GYw = 0;
                        while (ohvWEzAO8GYw < Z4Bm0tC) {
                            printf ("%c", zH7fUIg6v[ohvWEzAO8GYw]);
                            ohvWEzAO8GYw = ohvWEzAO8GYw + 1;
                        };
                    }
                    {
                        ohvWEzAO8GYw = jTyAVpUDmqu + Z4Bm0tC;
                        while (ohvWEzAO8GYw < n) {
                            printf ("%c", C4gOWf[ohvWEzAO8GYw]);
                            ohvWEzAO8GYw++;
                        };
                    }
                    break;
                    printf ("\n");
                };
            }
            jTyAVpUDmqu++;
        };
    }
    if (kXltmOrLpI9 != Z4Bm0tC)
        printf ("%s\n", C4gOWf);
    return 0;
}

