int JtRWAluIBYhj (char mvY1S9 [], int bAhfWx7) {
    int u;
    {
        u = 442 - 442;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (u < bAhfWx7) {
            if (mvY1S9[u] != ' ')
                return (230 - 229);
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
            u = u + 1;
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
    return (101 - 101);
}

void  peidui (char mvY1S9 [], int bAhfWx7, int a [], int eycbjSO [], char boy) {
    int u, sNaQ81DSEB, k, ii;
    for (u = (879 - 879); u < bAhfWx7; u++)
        if (mvY1S9[u] == boy && !(boy == mvY1S9[u + (30 - 29)])) {
            k = 904 - 903;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (k < bAhfWx7) {
                if (mvY1S9[k] == boy) {
                    sNaQ81DSEB = (318 - 318);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    break;
                }
                if (mvY1S9[k] != boy && mvY1S9[k] != ' ') {
                    mvY1S9[u] = ' ';
                    mvY1S9[k] = ' ';
                    {
                        ii = 0;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        while (1) {
                            if (a[ii] == -(1001 - 1000)) {
                                a[ii] = u;
                                eycbjSO[ii] = k;
                                break;
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
                            ii++;
                        };
                    }
                    break;
                }
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
                k = k + 1;
            };
        };
}

void  main () {
    int pp;
    int i;
    char mvY1S9 [101];
    int bAhfWx7;
    char boy;
    int a [(418 - 367)], eycbjSO [51];
    int gAWhsHbV, UDpLO6sF5Q0, z;
    scanf ("%s", mvY1S9);
    boy = mvY1S9[0];
    bAhfWx7 = strlen (mvY1S9);
    for (i = 0; i < 51; i++)
        a[i] = eycbjSO[i] = -(938 - 937);
    while (JtRWAluIBYhj (mvY1S9, bAhfWx7) != 0)
        peidui (mvY1S9, bAhfWx7, a, eycbjSO, boy);
    {
        gAWhsHbV = 474 - 473;
        while (gAWhsHbV <= bAhfWx7 / 2 - (923 - 922)) {
            for (UDpLO6sF5Q0 = 0; UDpLO6sF5Q0 <= bAhfWx7 / 2 - (931 - 930) - gAWhsHbV; UDpLO6sF5Q0 = UDpLO6sF5Q0 +1)
                if (eycbjSO[UDpLO6sF5Q0] > eycbjSO[UDpLO6sF5Q0 +1]) {
                    z = eycbjSO[UDpLO6sF5Q0];
                    eycbjSO[UDpLO6sF5Q0] = eycbjSO[UDpLO6sF5Q0 +1];
                    eycbjSO[UDpLO6sF5Q0 +1] = z;
                    z = a[UDpLO6sF5Q0];
                    a[UDpLO6sF5Q0] = a[UDpLO6sF5Q0 +1];
                    a[UDpLO6sF5Q0 +1] = z;
                }
            gAWhsHbV++;
        };
    }
    {
        pp = 0;
        while (1) {
            if (a[pp] == -1)
                break;
            else
                printf ("%d %d\n", a[pp], eycbjSO[pp]);
            pp = pp + 1;
        };
    };
}

