void  main () {
    double  Kpu4e6hWBm [(191 - 181)];
    double  B2wiGEuKI1;
    int sTXdh7EP0yc [(367 - 357)];
    double  RiZq1yE5eAR;
    double  a;
    double  x [(852 - 842)];
    int fQuElU8F;
    int sOYUkKZxEIhj;
    int IzQeN4;
    double  auRYTPjUx9M [10];
    RiZq1yE5eAR = (725.0 - 725.0);
    a = (436.0 - 436.0);
    scanf ("%d", &sOYUkKZxEIhj);
    for (IzQeN4 = (661 - 661); IzQeN4 < sOYUkKZxEIhj; IzQeN4++) {
        scanf ("%d", &sTXdh7EP0yc[IzQeN4]);
        a = a + sTXdh7EP0yc[IzQeN4];
    }
    {
        IzQeN4 = (936 - 936);
        while (IzQeN4 < sOYUkKZxEIhj) {
            scanf ("%lf", &x[IzQeN4]);
            IzQeN4++;
        }
    }
    for (IzQeN4 = 0; sOYUkKZxEIhj > IzQeN4; IzQeN4++) {
        if ((649 - 549) >= x[IzQeN4] && x[IzQeN4] >= (334 - 244)) {
            auRYTPjUx9M[IzQeN4] = (725.0 - 721.0);
        }
        else {
            if (x[IzQeN4] < (960 - 900)) {
                auRYTPjUx9M[IzQeN4] = (277.0 - 277.0);
            }
            else {
                if (89 >= x[IzQeN4] && x[IzQeN4] >= 85) {
                    auRYTPjUx9M[IzQeN4] = 3.70;
                }
                else {
                    if ((930 - 846) >= x[IzQeN4] && (203 - 121) <= x[IzQeN4]) {
                        auRYTPjUx9M[IzQeN4] = (874.3 - 871.0);
                    }
                    else {
                        if (81 >= x[IzQeN4] && (677 - 599) <= x[IzQeN4]) {
                            auRYTPjUx9M[IzQeN4] = 3.00;
                        }
                        else if ((1017 - 940) >= x[IzQeN4] && x[IzQeN4] >= (153 - 78)) {
                            auRYTPjUx9M[IzQeN4] = 2.70;
                        }
                        else if (x[IzQeN4] <= (311 - 237) && x[IzQeN4] >= 72) {
                            auRYTPjUx9M[IzQeN4] = 2.30;
                        }
                        else if (x[IzQeN4] <= (81 - 10) && x[IzQeN4] >= 68) {
                            auRYTPjUx9M[IzQeN4] = 2.00;
                        }
                        else if (x[IzQeN4] <= (498 - 431) && x[IzQeN4] >= (1012 - 948)) {
                            auRYTPjUx9M[IzQeN4] = 1.50;
                        }
                        else if (x[IzQeN4] <= 63 && x[IzQeN4] >= 60) {
                            auRYTPjUx9M[IzQeN4] = (358.0 - 357.0);
                        }
                    }
                }
            }
        }
    }
    B2wiGEuKI1 = (342.0 - 342.0);
    for (IzQeN4 = 0; IzQeN4 < sOYUkKZxEIhj; IzQeN4++) {
        Kpu4e6hWBm[IzQeN4] = auRYTPjUx9M[IzQeN4] * sTXdh7EP0yc[IzQeN4];
        B2wiGEuKI1 = B2wiGEuKI1 +Kpu4e6hWBm[IzQeN4];
    }
    RiZq1yE5eAR = (double ) B2wiGEuKI1 / (double ) a;
    printf ("%.2f\n", RiZq1yE5eAR);
}

