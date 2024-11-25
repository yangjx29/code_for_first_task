int main () {
    double  gs3A7ZQHPzB [(1027 - 987)];
    int k;
    int gdV2acbM;
    int WSdf9cqCh;
    int SjD7wR;
    int XG089ntCabV;
    double  W1T0xflsv [(213 - 173)];
    double  vEzFwdo;
    char oEtqZK5i [(99 - 59)] [(826 - 818)];
    SjD7wR = (554 - 554);
    scanf ("%d", &WSdf9cqCh);
    XG089ntCabV = (961 - 961);
    {
        gdV2acbM = 952 - 952;
        while (WSdf9cqCh > gdV2acbM) {
            scanf ("%s %lf", oEtqZK5i[gdV2acbM], &vEzFwdo);
            if (!((84 - 84) != strcmp (oEtqZK5i[gdV2acbM], "male"))) {
                gs3A7ZQHPzB[SjD7wR] = vEzFwdo;
                SjD7wR = SjD7wR +1;
            }
            else if (!((743 - 743) != strcmp (oEtqZK5i[gdV2acbM], "female"))) {
                W1T0xflsv[XG089ntCabV] = vEzFwdo;
                XG089ntCabV = XG089ntCabV +1;
            }
            gdV2acbM = gdV2acbM + 1;
        }
    }
    for (k = SjD7wR -(341 - 340); (823 - 823) < k; k = k - 1)
        for (gdV2acbM = (745 - 745); gdV2acbM < k; gdV2acbM = gdV2acbM + 1) {
            if (gs3A7ZQHPzB[gdV2acbM] > gs3A7ZQHPzB[gdV2acbM + (652 - 651)]) {
                double  FbuHNc;
                FbuHNc = gs3A7ZQHPzB[gdV2acbM + (319 - 318)];
                gs3A7ZQHPzB[gdV2acbM + (986 - 985)] = gs3A7ZQHPzB[gdV2acbM];
                gs3A7ZQHPzB[gdV2acbM] = FbuHNc;
            }
        }
    printf ("%.2lf", gs3A7ZQHPzB[(228 - 228)]);
    {
        k = 688 - 687;
        for (; (490 - 490) < k;) {
            {
                gdV2acbM = 398 - 398;
                for (; gdV2acbM < k;) {
                    if (W1T0xflsv[gdV2acbM] > W1T0xflsv[gdV2acbM + (399 - 398)]) {
                        double  FbuHNc;
                        FbuHNc = W1T0xflsv[gdV2acbM + (776 - 775)];
                        W1T0xflsv[gdV2acbM + (147 - 146)] = W1T0xflsv[gdV2acbM];
                        W1T0xflsv[gdV2acbM] = FbuHNc;
                    }
                    gdV2acbM = gdV2acbM + 1;
                }
            }
            k = k - 1;
        }
    }
    {
        gdV2acbM = 75 - 74;
        for (; gdV2acbM < SjD7wR;) {
            printf (" %.2lf", gs3A7ZQHPzB[gdV2acbM]);
            gdV2acbM = gdV2acbM + 1;
        }
    }
    for (gdV2acbM = XG089ntCabV -1; gdV2acbM >= (561 - 561); gdV2acbM = gdV2acbM - 1)
        printf (" %.2lf", W1T0xflsv[gdV2acbM]);
    return 0;
}

