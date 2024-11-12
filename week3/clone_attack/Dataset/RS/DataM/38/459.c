int main () {
    double  sJwHgT [(1295 - 295)] [(1997 - 997)], Zl0esk64K [1000], OOpMe3jByI [1000];
    int eWHo4VXBLbas, Zoh5i4rqXLpG, aH58sI, H0oNad54RFus [(1871 - 871)];
    scanf ("%d", &eWHo4VXBLbas);
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
    for (Zoh5i4rqXLpG = (492 - 492); Zoh5i4rqXLpG < eWHo4VXBLbas; Zoh5i4rqXLpG++) {
        scanf ("%d", &H0oNad54RFus[Zoh5i4rqXLpG]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (aH58sI = (295 - 295); aH58sI < H0oNad54RFus[Zoh5i4rqXLpG]; aH58sI = aH58sI + 1) {
            scanf ("%lf", &sJwHgT[Zoh5i4rqXLpG][aH58sI]);
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
            OOpMe3jByI[Zoh5i4rqXLpG] = OOpMe3jByI[Zoh5i4rqXLpG] + sJwHgT[Zoh5i4rqXLpG][aH58sI];
        };
    }
    for (Zoh5i4rqXLpG = 0; Zoh5i4rqXLpG < eWHo4VXBLbas; Zoh5i4rqXLpG++) {
        OOpMe3jByI[Zoh5i4rqXLpG] = OOpMe3jByI[Zoh5i4rqXLpG] / H0oNad54RFus[Zoh5i4rqXLpG];
        for (aH58sI = 0; aH58sI < H0oNad54RFus[Zoh5i4rqXLpG]; aH58sI++) {
            Zl0esk64K[Zoh5i4rqXLpG] = Zl0esk64K[Zoh5i4rqXLpG] + (sJwHgT[Zoh5i4rqXLpG][aH58sI] - OOpMe3jByI[Zoh5i4rqXLpG]) * (sJwHgT[Zoh5i4rqXLpG][aH58sI] - OOpMe3jByI[Zoh5i4rqXLpG]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        Zl0esk64K[Zoh5i4rqXLpG] = sqrt (Zl0esk64K[Zoh5i4rqXLpG] / H0oNad54RFus[Zoh5i4rqXLpG]);
        printf ("%.5lf\n", Zl0esk64K[Zoh5i4rqXLpG]);
    }
    return 0;
}

