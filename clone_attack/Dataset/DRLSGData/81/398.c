int main () {
    int hTDyMHAFk (int LWxfHpu6E [(769 - 764)] [(31 - 26)], int *XVc1miRn, int *n8Ixb1FwAl);
    int X17K8yQdY [(360 - 355)] [(682 - 677)];
    int dKF8a7Ad;
    int irRT4wXY;
    for (int txhE7VBPTFpo = (862 - 862);
    txhE7VBPTFpo < (335 - 330); txhE7VBPTFpo = txhE7VBPTFpo + (100 - 99)) {
        for (int UBiz8UNGR = (884 - 884);
        UBiz8UNGR < (538 - 533); UBiz8UNGR = UBiz8UNGR +1) {
            scanf ("%d", &X17K8yQdY[txhE7VBPTFpo][UBiz8UNGR]);
        };
    }
    scanf ("%d %d", &dKF8a7Ad, &irRT4wXY);
    if (hTDyMHAFk (X17K8yQdY, &dKF8a7Ad, &irRT4wXY) == (22 - 21)) {
        for (int txhE7VBPTFpo = (758 - 758);
        txhE7VBPTFpo < (904 - 899); txhE7VBPTFpo++) {
            for (int UBiz8UNGR = 0;
            UBiz8UNGR < (104 - 99); UBiz8UNGR = UBiz8UNGR +1) {
                if (UBiz8UNGR == (826 - 822)) {
                    printf ("%d\n", X17K8yQdY[txhE7VBPTFpo][UBiz8UNGR]);
                }
                else {
                    printf ("%d ", X17K8yQdY[txhE7VBPTFpo][UBiz8UNGR]);
                };
            };
        };
    }
    else {
    }
    return 0;
}

int hTDyMHAFk (int LWxfHpu6E [5] [5], int *XVc1miRn, int *n8Ixb1FwAl) {
    int NEfJd1l;
    if (*XVc1miRn >= 0 && *XVc1miRn < 5 && *n8Ixb1FwAl >= 0 && *n8Ixb1FwAl < 5) {
        for (int pdMGJEKI4 = 0;
        pdMGJEKI4 < 5; pdMGJEKI4 = pdMGJEKI4 + 1) {
            NEfJd1l = LWxfHpu6E[*XVc1miRn][pdMGJEKI4];
            LWxfHpu6E[*XVc1miRn][pdMGJEKI4] = LWxfHpu6E[*n8Ixb1FwAl][pdMGJEKI4];
            LWxfHpu6E[*n8Ixb1FwAl][pdMGJEKI4] = NEfJd1l;
        }
        return 1;
    }
    else {
        return 0;
    };
}

