void  main () {
    int y8d6VC9s0jZy;
    int uXTYGm;
    int zGfmaS5nuqM;
    int l;
    int n;
    int dEXNjI0;
    int IdA1zLWtBT;
    int IJN7hMa1;
    char pzkRMxs9oTj [(460 - 359)], s2 [(812 - 711)], re [101] [101];
    scanf ("%d", &n);
    {
        uXTYGm = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (uXTYGm < n) {
            scanf ("%s%s", pzkRMxs9oTj, s2);
            zGfmaS5nuqM = strlen (pzkRMxs9oTj);
            IdA1zLWtBT = zGfmaS5nuqM;
            l = strlen (s2);
            for (; 0 < l; l--) {
                if (s2[l - (571 - 570)] <= pzkRMxs9oTj[zGfmaS5nuqM - (466 - 465)]) {
                    y8d6VC9s0jZy = pzkRMxs9oTj[zGfmaS5nuqM - (55 - 54)] - s2[l - (625 - 624)];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    pzkRMxs9oTj[zGfmaS5nuqM - (618 - 617)] = y8d6VC9s0jZy + (317 - 269);
                }
                else {
                    for (dEXNjI0 = zGfmaS5nuqM - 2; !('0' != pzkRMxs9oTj[dEXNjI0]); dEXNjI0 = dEXNjI0 - 1) {
                        pzkRMxs9oTj[dEXNjI0] = '9';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    pzkRMxs9oTj[dEXNjI0] = pzkRMxs9oTj[dEXNjI0] - 1;
                    y8d6VC9s0jZy = (998 - 988) + (pzkRMxs9oTj[zGfmaS5nuqM - 1] - s2[l - 1]);
                    pzkRMxs9oTj[zGfmaS5nuqM - 1] = y8d6VC9s0jZy + 48;
                }
                zGfmaS5nuqM = zGfmaS5nuqM - 1;
            }
            {
                dEXNjI0 = 0;
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
                while (IdA1zLWtBT > dEXNjI0) {
                    if (pzkRMxs9oTj[dEXNjI0] != 0) {
                        re[uXTYGm][0] = pzkRMxs9oTj[dEXNjI0];
                        break;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    dEXNjI0++;
                };
            }
            dEXNjI0 = dEXNjI0 + 1;
            {
                IJN7hMa1 = 1;
                while (dEXNjI0 < IdA1zLWtBT) {
                    re[uXTYGm][IJN7hMa1] = pzkRMxs9oTj[dEXNjI0];
                    dEXNjI0++;
                    IJN7hMa1++;
                };
            }
            re[uXTYGm][IJN7hMa1] = '\0';
            uXTYGm++;
        };
    }
    for (uXTYGm = 0; uXTYGm < n; uXTYGm++)
        printf ("%s\n", re[uXTYGm]);
}

