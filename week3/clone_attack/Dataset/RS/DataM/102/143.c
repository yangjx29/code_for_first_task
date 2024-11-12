int main () {
    int HhTuRPgQr;
    int gmXwOeAzi6Y;
    int F3oCeTVA;
    int xUIiVAae7OY;
    int lYUVpLa4;
    int oulfMKOmb;
    int MvZTNbFl;
    int db6IFcs;
    float iWgOKXB5Q2hV [(881 - 841)];
    float TWuBnL [(1005 - 965)];
    float eu6mR1Mz [40];
    float N9ldmARIs;
    char AOWKnM [7];
    scanf ("%d", &HhTuRPgQr);
    lYUVpLa4 = (692 - 692);
    oulfMKOmb = (251 - 251);
    for (gmXwOeAzi6Y = (656 - 656); gmXwOeAzi6Y < HhTuRPgQr; gmXwOeAzi6Y++) {
        scanf ("%s %f", AOWKnM, &iWgOKXB5Q2hV[gmXwOeAzi6Y]);
        if (AOWKnM[0] == 'm') {
            TWuBnL[lYUVpLa4] = iWgOKXB5Q2hV[gmXwOeAzi6Y];
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
            lYUVpLa4 = lYUVpLa4 + 1;
        }
        else {
            eu6mR1Mz[oulfMKOmb] = iWgOKXB5Q2hV[gmXwOeAzi6Y];
            oulfMKOmb = oulfMKOmb + 1;
        };
    }
    for (F3oCeTVA = 1; F3oCeTVA <= lYUVpLa4; F3oCeTVA = F3oCeTVA +1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (xUIiVAae7OY = 0; xUIiVAae7OY < lYUVpLa4 - F3oCeTVA; xUIiVAae7OY = xUIiVAae7OY + 1) {
            if (TWuBnL[xUIiVAae7OY] > TWuBnL[xUIiVAae7OY + 1]) {
                N9ldmARIs = TWuBnL[xUIiVAae7OY + 1];
                TWuBnL[xUIiVAae7OY + 1] = TWuBnL[xUIiVAae7OY];
                TWuBnL[xUIiVAae7OY] = N9ldmARIs;
            };
        };
    }
    for (MvZTNbFl = 1; MvZTNbFl <= oulfMKOmb; MvZTNbFl = MvZTNbFl +1) {
        for (db6IFcs = 0; db6IFcs < oulfMKOmb - MvZTNbFl; db6IFcs = db6IFcs + 1) {
            if (eu6mR1Mz[db6IFcs] < eu6mR1Mz[db6IFcs + 1]) {
                N9ldmARIs = eu6mR1Mz[db6IFcs + 1];
                eu6mR1Mz[db6IFcs + 1] = eu6mR1Mz[db6IFcs];
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
                eu6mR1Mz[db6IFcs] = N9ldmARIs;
            };
        };
    }
    for (F3oCeTVA = 0; F3oCeTVA < lYUVpLa4; F3oCeTVA = F3oCeTVA +1) {
        printf ("%.2f ", TWuBnL[F3oCeTVA]);
    }
    for (db6IFcs = 0; db6IFcs < oulfMKOmb; db6IFcs = db6IFcs + 1) {
        if (db6IFcs != oulfMKOmb - 1) {
            printf ("%.2f ", eu6mR1Mz[db6IFcs]);
        }
        else {
            printf ("%.2f", eu6mR1Mz[db6IFcs]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    return 0;
}

