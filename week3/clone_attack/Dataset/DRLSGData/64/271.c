void  main () {
    double  ZPkyoI8x [100];
    {
        if (0) {
            return 0;
        }
    }
    int MVFWXh [100] [2];
    int pO2HrGb;
    int XPrCRfQ;
    int GZN954;
    int k;
    int GMcaQ5gR1yH [10] [3];
    int s;
    double  H8NvoLxt;
    k = 0;
    scanf ("%d", &GZN954);
    for (XPrCRfQ = 0; XPrCRfQ < GZN954; XPrCRfQ = XPrCRfQ +1)
        scanf ("%d%d%d", &GMcaQ5gR1yH[XPrCRfQ][0], &GMcaQ5gR1yH[XPrCRfQ][1], &GMcaQ5gR1yH[XPrCRfQ][2]);
    for (XPrCRfQ = 0; GZN954 -1 > XPrCRfQ; XPrCRfQ = XPrCRfQ +1) {
        pO2HrGb = XPrCRfQ +1;
        while (pO2HrGb < GZN954) {
            ZPkyoI8x[k] = sqrt ((double ) ((GMcaQ5gR1yH[XPrCRfQ][0] - GMcaQ5gR1yH[pO2HrGb][0]) * (GMcaQ5gR1yH[XPrCRfQ][0] - GMcaQ5gR1yH[pO2HrGb][0]) + (GMcaQ5gR1yH[XPrCRfQ][1] - GMcaQ5gR1yH[pO2HrGb][1]) * (GMcaQ5gR1yH[XPrCRfQ][1] - GMcaQ5gR1yH[pO2HrGb][1]) + (GMcaQ5gR1yH[XPrCRfQ][2] - GMcaQ5gR1yH[pO2HrGb][2]) * (GMcaQ5gR1yH[XPrCRfQ][2] - GMcaQ5gR1yH[pO2HrGb][2])));
            MVFWXh[k][0] = XPrCRfQ;
            MVFWXh[k][1] = pO2HrGb;
            k = k + 1;
            pO2HrGb = pO2HrGb + 1;
        }
    }
    for (XPrCRfQ = 0; XPrCRfQ < k; XPrCRfQ = XPrCRfQ +1)
        for (pO2HrGb = 0; pO2HrGb < k - XPrCRfQ -1; pO2HrGb = pO2HrGb + 1)
            if (ZPkyoI8x[pO2HrGb + 1] > ZPkyoI8x[pO2HrGb]) {
                H8NvoLxt = ZPkyoI8x[pO2HrGb];
                ZPkyoI8x[pO2HrGb] = ZPkyoI8x[pO2HrGb + 1];
                ZPkyoI8x[pO2HrGb + 1] = H8NvoLxt;
                s = MVFWXh[pO2HrGb][0];
                MVFWXh[pO2HrGb][0] = MVFWXh[pO2HrGb + 1][0];
                MVFWXh[pO2HrGb + 1][0] = s;
                s = MVFWXh[pO2HrGb][1];
                MVFWXh[pO2HrGb][1] = MVFWXh[pO2HrGb + 1][1];
                MVFWXh[pO2HrGb + 1][1] = s;
            }
    for (XPrCRfQ = 0; XPrCRfQ < GZN954 *(GZN954 -1) / 2; XPrCRfQ = XPrCRfQ +1)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", GMcaQ5gR1yH[MVFWXh[XPrCRfQ][0]][0], GMcaQ5gR1yH[MVFWXh[XPrCRfQ][0]][1], GMcaQ5gR1yH[MVFWXh[XPrCRfQ][0]][2], GMcaQ5gR1yH[MVFWXh[XPrCRfQ][1]][0], GMcaQ5gR1yH[MVFWXh[XPrCRfQ][1]][1], GMcaQ5gR1yH[MVFWXh[XPrCRfQ][1]][2], ZPkyoI8x[XPrCRfQ]);
}

