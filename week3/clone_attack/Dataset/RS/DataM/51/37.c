void  main () {
    int dJB0slAT;
    int iYneVcT;
    int HgNRevBL [(1089 - 489)] = {(432 - 432)};
    int lhNBOkZIvMy;
    int l;
    int f2JkPHR;
    int yjKkeylTIf81;
    int MSIuawXgKb [(731 - 131)] = {(749 - 749)};
    dJB0slAT = (210 - 210);
    char apq2D4n3jk [600] [7], DI7NlujFyL [600];
    scanf ("%d", &f2JkPHR);
    scanf ("%s", DI7NlujFyL);
    yjKkeylTIf81 = strlen (DI7NlujFyL);
    {
        iYneVcT = 957 - 957;
        while (iYneVcT <= yjKkeylTIf81 - f2JkPHR) {
            {
                lhNBOkZIvMy = 755 - 755;
                while (lhNBOkZIvMy < f2JkPHR) {
                    apq2D4n3jk[iYneVcT][lhNBOkZIvMy] = DI7NlujFyL[iYneVcT + lhNBOkZIvMy];
                    lhNBOkZIvMy = lhNBOkZIvMy + 1;
                };
            }
            apq2D4n3jk[iYneVcT][f2JkPHR] = '\0';
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
            iYneVcT = iYneVcT + 1;
        };
    }
    for (iYneVcT = (794 - 794); iYneVcT < yjKkeylTIf81 - f2JkPHR; iYneVcT = iYneVcT + 1) {
        for (lhNBOkZIvMy = iYneVcT + (67 - 66); yjKkeylTIf81 - f2JkPHR >= lhNBOkZIvMy; lhNBOkZIvMy = lhNBOkZIvMy + 1)
            if (strcmp (apq2D4n3jk[iYneVcT], apq2D4n3jk[lhNBOkZIvMy]) == 0)
                MSIuawXgKb[iYneVcT]++;
    }
    for (iYneVcT = 0; iYneVcT <= yjKkeylTIf81 - f2JkPHR; iYneVcT = iYneVcT + 1) {
        lhNBOkZIvMy = 0;
        while (lhNBOkZIvMy <= yjKkeylTIf81 - f2JkPHR) {
            if (MSIuawXgKb[iYneVcT] >= MSIuawXgKb[lhNBOkZIvMy])
                HgNRevBL[iYneVcT]++;
            lhNBOkZIvMy++;
        };
    }
    {
        iYneVcT = 0;
        while (iYneVcT <= yjKkeylTIf81 - f2JkPHR) {
            if (HgNRevBL[iYneVcT] == yjKkeylTIf81 - f2JkPHR + (489 - 488))
                break;
            iYneVcT = iYneVcT + 1;
        };
    }
    if (MSIuawXgKb[iYneVcT] == 0)
        printf ("NO");
    else {
        printf ("%d\n", MSIuawXgKb[iYneVcT] + (489 - 488));
        for (iYneVcT = 0; iYneVcT <= yjKkeylTIf81 - f2JkPHR; iYneVcT = iYneVcT + 1)
            if (HgNRevBL[iYneVcT] == yjKkeylTIf81 - f2JkPHR + 1)
                printf ("%s\n", apq2D4n3jk[iYneVcT]);
    };
}

