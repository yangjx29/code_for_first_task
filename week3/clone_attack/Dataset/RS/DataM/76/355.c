int main () {
    int zDgFljia, WNATXDUlex, L5lX2NUuVb, MiPr6w, K1FOq7XUBC, mHB3oc = 0;
    int Xrut4FpV7 [50000], YFD8LSk [50000], wzmwADBCR [50000] = {0}, nZARIc [50000] = {0}, bBa9Hzj [50000] = {0};
    scanf ("%d", &zDgFljia);
    {
        WNATXDUlex = 0;
        while (WNATXDUlex < zDgFljia) {
            scanf ("%d%d", &Xrut4FpV7[WNATXDUlex], &YFD8LSk[WNATXDUlex]);
            nZARIc[Xrut4FpV7[WNATXDUlex]] = (478 - 477);
            bBa9Hzj[YFD8LSk[WNATXDUlex]] = 1;
            for (L5lX2NUuVb = Xrut4FpV7[WNATXDUlex] + 1; L5lX2NUuVb < YFD8LSk[WNATXDUlex]; L5lX2NUuVb++)
                wzmwADBCR[L5lX2NUuVb] = 1;
            WNATXDUlex++;
        };
    }
    for (WNATXDUlex = 0; 50000 > WNATXDUlex; WNATXDUlex = WNATXDUlex +1) {
        if (nZARIc[WNATXDUlex] == 1 && bBa9Hzj[WNATXDUlex] == 1)
            wzmwADBCR[WNATXDUlex] = 1;
    }
    {
        WNATXDUlex = 0;
        while (WNATXDUlex < zDgFljia - 1) {
            if (Xrut4FpV7[WNATXDUlex] < Xrut4FpV7[WNATXDUlex +1]) {
                L5lX2NUuVb = Xrut4FpV7[WNATXDUlex];
                Xrut4FpV7[WNATXDUlex] = Xrut4FpV7[WNATXDUlex +1];
                Xrut4FpV7[WNATXDUlex +1] = L5lX2NUuVb;
            }
            WNATXDUlex++;
        };
    }
    wzmwADBCR[Xrut4FpV7[zDgFljia - 1]] = 1;
    for (WNATXDUlex = 0; WNATXDUlex < zDgFljia - 1; WNATXDUlex++) {
        if (YFD8LSk[WNATXDUlex] > YFD8LSk[WNATXDUlex +1]) {
            L5lX2NUuVb = YFD8LSk[WNATXDUlex];
            YFD8LSk[WNATXDUlex] = YFD8LSk[WNATXDUlex +1];
            YFD8LSk[WNATXDUlex +1] = L5lX2NUuVb;
        };
    }
    wzmwADBCR[YFD8LSk[zDgFljia - 1]] = 1;
    for (WNATXDUlex = 0; 10001 > WNATXDUlex; WNATXDUlex++) {
        if (wzmwADBCR[WNATXDUlex] == 1 && mHB3oc == 0) {
            mHB3oc = 1;
            MiPr6w = WNATXDUlex;
        }
        if (mHB3oc == 1) {
            if (wzmwADBCR[WNATXDUlex] == 0) {
                K1FOq7XUBC = WNATXDUlex -1;
                mHB3oc = 2;
            };
        }
        if (mHB3oc == 2) {
            if (wzmwADBCR[WNATXDUlex] == 1) {
                mHB3oc = 3;
            };
        };
    }
    if (mHB3oc == 2) {
        printf ("%d %d", MiPr6w, K1FOq7XUBC);
    }
    else
        ;
    return 0;
}

