int main () {
    int b9nG3QMFYuN, VqGQZVhOTmg, k1jQUPo9ZFk = (566 - 566), jmDGguSVJYt = (726 - 726), QEwVJRvIat;
    double  ddl5mWFr4;
    double  AQXDaoZUJwe;
    ddl5mWFr4 = 0;
    AQXDaoZUJwe = 0;
    double  bIhkbZKm [(979 - 939)] = {0};
    double  Gk2SzWt [40] = {0};
    char u2Q8UFPB [40] = "male";
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
    char Z0ypt19QP [40] = "female";
    scanf ("%d", &b9nG3QMFYuN);
    {
        VqGQZVhOTmg = 29 - 28;
        while (VqGQZVhOTmg <= b9nG3QMFYuN) {
            char xB0YTjuKtQ [40];
            VqGQZVhOTmg = VqGQZVhOTmg +1;
            scanf ("%s", xB0YTjuKtQ);
            scanf ("%lf", &ddl5mWFr4);
            if (strcmp (xB0YTjuKtQ, u2Q8UFPB) == 0) {
                bIhkbZKm[k1jQUPo9ZFk] = ddl5mWFr4;
                k1jQUPo9ZFk = k1jQUPo9ZFk + 1;
            }
            else {
                if (strcmp (xB0YTjuKtQ, Z0ypt19QP) == 0) {
                    Gk2SzWt[jmDGguSVJYt] = ddl5mWFr4;
                    jmDGguSVJYt = jmDGguSVJYt + 1;
                };
            };
        };
    }
    {
        VqGQZVhOTmg = 775 - 774;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (VqGQZVhOTmg <= k1jQUPo9ZFk) {
            {
                QEwVJRvIat = 0;
                while (QEwVJRvIat < k1jQUPo9ZFk - VqGQZVhOTmg) {
                    if (bIhkbZKm[QEwVJRvIat] > bIhkbZKm[QEwVJRvIat +1]) {
                        AQXDaoZUJwe = bIhkbZKm[QEwVJRvIat];
                        bIhkbZKm[QEwVJRvIat] = bIhkbZKm[QEwVJRvIat +1];
                        bIhkbZKm[QEwVJRvIat +1] = AQXDaoZUJwe;
                    }
                    QEwVJRvIat = QEwVJRvIat +1;
                };
            }
            VqGQZVhOTmg = VqGQZVhOTmg +1;
        };
    }
    {
        VqGQZVhOTmg = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (VqGQZVhOTmg <= jmDGguSVJYt) {
            {
                QEwVJRvIat = 0;
                while (QEwVJRvIat < jmDGguSVJYt - VqGQZVhOTmg) {
                    if (Gk2SzWt[QEwVJRvIat] > Gk2SzWt[QEwVJRvIat +1]) {
                        AQXDaoZUJwe = Gk2SzWt[QEwVJRvIat];
                        Gk2SzWt[QEwVJRvIat] = Gk2SzWt[QEwVJRvIat +1];
                        Gk2SzWt[QEwVJRvIat +1] = AQXDaoZUJwe;
                    }
                    QEwVJRvIat = QEwVJRvIat +1;
                };
            }
            VqGQZVhOTmg = VqGQZVhOTmg +1;
        };
    }
    printf ("%.2lf", bIhkbZKm[0]);
    {
        VqGQZVhOTmg = 1;
        while (VqGQZVhOTmg < k1jQUPo9ZFk) {
            printf (" %.2lf", bIhkbZKm[VqGQZVhOTmg]);
            VqGQZVhOTmg = VqGQZVhOTmg +1;
        };
    }
    for (VqGQZVhOTmg = jmDGguSVJYt - 1; VqGQZVhOTmg >= 0; VqGQZVhOTmg = VqGQZVhOTmg -1) {
        printf (" %.2lf", Gk2SzWt[VqGQZVhOTmg]);
    }
    return 0;
}

