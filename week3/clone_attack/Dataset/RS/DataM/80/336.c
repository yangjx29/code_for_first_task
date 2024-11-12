int main () {
    int n4jEMaPpl7 [13] [32];
    int px1FPEfsvY [373];
    int uXEF26Ls;
    int j;
    int k;
    int y1;
    int NbHGmz;
    int d1;
    int P7BzOVyewXAo;
    int nn7UPS3yxYK;
    int d2;
    int lSv9etnHC;
    int x1;
    int nJyXADtOn;
    int Rz7Tup8vUy;
    int vF40CJ8k3;
    int fuhao;
    scanf ("%d%d%d", &y1, &NbHGmz, &d1);
    x1 = (NbHGmz -1) * 31 + d1;
    scanf ("%d%d%d", &P7BzOVyewXAo, &nn7UPS3yxYK, &d2);
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
    nJyXADtOn = (nn7UPS3yxYK - 1) * 31 + d2;
    {
        uXEF26Ls = 747 - 746;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (13 > uXEF26Ls) {
            {
                j = 1;
                while (32 > j) {
                    n4jEMaPpl7[uXEF26Ls][j] = 1;
                    j++;
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
            uXEF26Ls = uXEF26Ls + 1;
        };
    }
    n4jEMaPpl7[(952 - 950)][(102 - 73)] = (937 - 937);
    n4jEMaPpl7[2][30] = (348 - 348);
    n4jEMaPpl7[2][(767 - 736)] = (585 - 585);
    n4jEMaPpl7[4][31] = 0;
    n4jEMaPpl7[6][31] = 0;
    n4jEMaPpl7[9][31] = 0;
    n4jEMaPpl7[11][31] = 0;
    {
        uXEF26Ls = 1;
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
        k = 1;
        while (13 > uXEF26Ls) {
            {
                j = 1;
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
                while (32 > j) {
                    px1FPEfsvY[k] = n4jEMaPpl7[uXEF26Ls][j];
                    k = k + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    j++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            uXEF26Ls++;
        };
    }
    fuhao = 1;
    if (nJyXADtOn < x1) {
        fuhao = x1;
        x1 = nJyXADtOn;
        nJyXADtOn = fuhao;
        fuhao = -1;
    }
    {
        k = x1;
        lSv9etnHC = 0;
        while (nJyXADtOn > k) {
            lSv9etnHC = (lSv9etnHC + px1FPEfsvY[k]);
            k++;
        };
    }
    lSv9etnHC = (379 - 14) * (P7BzOVyewXAo -y1) + lSv9etnHC * fuhao;
    {
        uXEF26Ls = y1 + 1;
        Rz7Tup8vUy = 0;
        while (P7BzOVyewXAo > uXEF26Ls) {
            if (!(0 != uXEF26Ls % 4) && !(0 == uXEF26Ls % 100))
                Rz7Tup8vUy = Rz7Tup8vUy +1;
            if (!(0 != uXEF26Ls % 400))
                Rz7Tup8vUy = Rz7Tup8vUy +1;
            uXEF26Ls++;
        };
    }
    if ((!(0 != y1 % 4) && !(0 == y1 % 100)) || (!(0 != y1 % 400))) {
        if (!(1 != NbHGmz))
            Rz7Tup8vUy = Rz7Tup8vUy +1;
        if (NbHGmz == 2 && d1 <= 29)
            Rz7Tup8vUy = Rz7Tup8vUy +1;
    }
    if ((P7BzOVyewXAo % 4 == 0 && P7BzOVyewXAo % 100 != 0) || (P7BzOVyewXAo % 400 == 0)) {
        if (nn7UPS3yxYK >= (554 - 551))
            Rz7Tup8vUy = Rz7Tup8vUy +1;
        if (nn7UPS3yxYK == 2 && d2 == 29)
            Rz7Tup8vUy = Rz7Tup8vUy +1;
    }
    lSv9etnHC = lSv9etnHC + Rz7Tup8vUy;
    printf ("%d", lSv9etnHC);
    return 0;
}

