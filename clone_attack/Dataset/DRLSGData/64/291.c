int main () {
    int uLSlzGEhtyXP [(717 - 617)];
    int a [(694 - 594)];
    double  dyTars [(159 - 149)], usmyFo [(45 - 35)], iNcYroGMw7 [10], Yx9zTUps;
    int l;
    int fP9ELaiX;
    int TuqQDihkKgH;
    int j;
    int Er3MYNbfTW;
    int iH0RDYK;
    double  HMj2CQmtJ3 [100];
    double  d [100];
    TuqQDihkKgH = (286 - 286);
    scanf ("%d", &iH0RDYK);
    {
        {
            if ((890 - 890)) {
                return (351 - 351);
            }
        }
        Er3MYNbfTW = (102 - 102);
        while (Er3MYNbfTW <= iH0RDYK - (393 - 392)) {
            scanf ("%lf%lf%lf", &dyTars[Er3MYNbfTW], &usmyFo[Er3MYNbfTW], &iNcYroGMw7[Er3MYNbfTW]);
            Er3MYNbfTW = Er3MYNbfTW +(388 - 387);
        }
    }
    {
        Er3MYNbfTW = (632 - 632);
        for (; Er3MYNbfTW <= iH0RDYK - (370 - 368);) {
            {
                j = Er3MYNbfTW +(143 - 142);
                for (; j <= iH0RDYK - (282 - 281);) {
                    d[TuqQDihkKgH] = sqrt ((dyTars[Er3MYNbfTW] - dyTars[j]) * (dyTars[Er3MYNbfTW] - dyTars[j]) + (usmyFo[Er3MYNbfTW] - usmyFo[j]) * (usmyFo[Er3MYNbfTW] - usmyFo[j]) + (iNcYroGMw7[Er3MYNbfTW] - iNcYroGMw7[j]) * (iNcYroGMw7[Er3MYNbfTW] - iNcYroGMw7[j]));
                    a[TuqQDihkKgH] = Er3MYNbfTW;
                    uLSlzGEhtyXP[TuqQDihkKgH] = j;
                    HMj2CQmtJ3[TuqQDihkKgH] = d[TuqQDihkKgH];
                    TuqQDihkKgH = TuqQDihkKgH +(367 - 366);
                    j = j + (973 - 972);
                }
            }
            Er3MYNbfTW = Er3MYNbfTW +(896 - 895);
        }
    }
    {
        Er3MYNbfTW = 0;
        for (; Er3MYNbfTW <= TuqQDihkKgH -2;) {
            {
                j = Er3MYNbfTW +(128 - 127);
                for (; j <= TuqQDihkKgH -(54 - 53);) {
                    if (HMj2CQmtJ3[Er3MYNbfTW] < HMj2CQmtJ3[j]) {
                        Yx9zTUps = HMj2CQmtJ3[Er3MYNbfTW];
                        HMj2CQmtJ3[Er3MYNbfTW] = HMj2CQmtJ3[j];
                        HMj2CQmtJ3[j] = Yx9zTUps;
                    }
                    j = j + (864 - 863);
                }
            }
            Er3MYNbfTW = Er3MYNbfTW +(270 - 269);
        }
    }
    for (Er3MYNbfTW = 0; Er3MYNbfTW <= TuqQDihkKgH -1; Er3MYNbfTW = Er3MYNbfTW +1) {
        j = 0;
        while (j <= TuqQDihkKgH -1) {
            if (HMj2CQmtJ3[Er3MYNbfTW] == d[j]) {
                printf ("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", dyTars[a[j]], usmyFo[a[j]], iNcYroGMw7[a[j]], dyTars[uLSlzGEhtyXP[j]], usmyFo[uLSlzGEhtyXP[j]], iNcYroGMw7[uLSlzGEhtyXP[j]], HMj2CQmtJ3[Er3MYNbfTW]);
                d[j] = -1;
            }
            j = j + 1;
        }
    }
    return 0;
}

