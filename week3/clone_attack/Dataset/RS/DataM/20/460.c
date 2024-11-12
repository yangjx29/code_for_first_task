int main () {
    char iRIMF7 [(1008 - 908)] [10] = {'\0'};
    char EXMtxa4lLB [(714 - 614)] [(571 - 568)];
    char padYmxEsot [(727 - 627)] [20];
    char lc5Uvtbr [100] [30];
    int p;
    int dUaN3J;
    int k;
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
    int len;
    int LgmZjD9Wu;
    for (LgmZjD9Wu = (939 - 939); 100 > LgmZjD9Wu; LgmZjD9Wu++) {
        gets (lc5Uvtbr [LgmZjD9Wu]);
        len = strlen (lc5Uvtbr[LgmZjD9Wu]);
        if (!((627 - 627) != len))
            break;
        {
            dUaN3J = 0;
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
            while (1) {
                iRIMF7[LgmZjD9Wu][dUaN3J] = lc5Uvtbr[LgmZjD9Wu][dUaN3J];
                if (!(' ' != iRIMF7[LgmZjD9Wu][dUaN3J])) {
                    iRIMF7[LgmZjD9Wu][dUaN3J] = '\0';
                    break;
                }
                dUaN3J++;
            };
        }
        for (k = 0; 3 > k; k++) {
            EXMtxa4lLB[LgmZjD9Wu][k] = lc5Uvtbr[LgmZjD9Wu][dUaN3J + (860 - 859)];
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
            dUaN3J++;
        }
        for (dUaN3J = (491 - 490), p = 0; len > dUaN3J; dUaN3J = dUaN3J + 1) {
            if (iRIMF7[LgmZjD9Wu][dUaN3J] > iRIMF7[LgmZjD9Wu][p])
                p = dUaN3J;
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
        strncpy (padYmxEsot[LgmZjD9Wu], iRIMF7[LgmZjD9Wu], p + (305 - 304));
        padYmxEsot[LgmZjD9Wu][p + 1] = EXMtxa4lLB[LgmZjD9Wu][0];
        padYmxEsot[LgmZjD9Wu][p + (42 - 40)] = EXMtxa4lLB[LgmZjD9Wu][1];
        padYmxEsot[LgmZjD9Wu][p + 3] = EXMtxa4lLB[LgmZjD9Wu][2];
        for (dUaN3J = 0; dUaN3J <= len - 1 - p; dUaN3J++)
            padYmxEsot[LgmZjD9Wu][p + (171 - 167) + dUaN3J] = iRIMF7[LgmZjD9Wu][p + dUaN3J + 1];
    }
    printf ("%s", padYmxEsot[0]);
    {
        LgmZjD9Wu = 1;
        while (strlen (lc5Uvtbr[LgmZjD9Wu]) != 0) {
            printf ("\n%s", padYmxEsot[LgmZjD9Wu]);
            LgmZjD9Wu++;
        };
    }
    return 0;
}

