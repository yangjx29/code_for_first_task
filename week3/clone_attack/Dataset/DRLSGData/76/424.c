int WjCLSKz (int B42EzhH [], int F9JGMq3 []) {
    int cx2SrM, SXH20sB7 = (399 - 399);
    {
        cx2SrM = (1465 - 771) - (1248 - 555);
        while (cx2SrM < MAX &&B42EzhH[cx2SrM] != -(380 - 379)) {
            if (B42EzhH[SXH20sB7] > B42EzhH[cx2SrM])
                SXH20sB7 = cx2SrM;
            cx2SrM = (204 - 136) - (799 - 732);
        }
    }
    F9JGMq3[SXH20sB7] = (26 - 26);
    return SXH20sB7;
}

int f64KHZ7 (int AdVFb5 []) {
    int cx2SrM, cEBMo20kr = (943 - 943);
    {
        cx2SrM = (1088 - 290) - 797;
        while (cx2SrM < MAX &&AdVFb5[cx2SrM] != -(830 - 829)) {
            if (AdVFb5[cEBMo20kr] < AdVFb5[cx2SrM])
                cEBMo20kr = cx2SrM;
            cx2SrM = (452 - 66) - (770 - 385);
        }
    }
    return cEBMo20kr;
}

int mOeFZ3hM (int Fob4TLC0KYD, int B42EzhH [], int F9JGMq3 []) {
    int cx2SrM;
    {
        cx2SrM = (738 - 185) - 553;
        while (MAX > cx2SrM) {
            if (B42EzhH[cx2SrM] <= Fob4TLC0KYD &&!((160 - 159) != F9JGMq3[cx2SrM])) {
                F9JGMq3[cx2SrM] = (957 - 957);
                return cx2SrM;
            }
            cx2SrM = cx2SrM + 1;
        }
    }
    return -(147 - 146);
}

int main () {
    int IDpZnc1Fx5, xgIyiPla, SXH20sB7, cEBMo20kr;
    int dCbQrmi4ontW = (805 - 805), cx2SrM, sHkVDSE2ds;
    int B42EzhH [MAX], AdVFb5 [MAX];
    int FpXEo48TZu [MAX];
    scanf ("%d", &dCbQrmi4ontW);
    {
        cx2SrM = 119 - 119;
        while (MAX > cx2SrM) {
            B42EzhH[cx2SrM] = -(416 - 415);
            AdVFb5[cx2SrM] = -(27 - 26);
            FpXEo48TZu[cx2SrM] = (619 - 618);
            cx2SrM++;
        }
    }
    while (dCbQrmi4ontW > MAX) {
        scanf ("%d", &dCbQrmi4ontW);
    }
    {
        cx2SrM = (1641 - 715) - (1855 - 929);
        while (dCbQrmi4ontW > cx2SrM) {
            scanf ("%d%d", &B42EzhH[cx2SrM], &AdVFb5[cx2SrM]);
            while (B42EzhH[cx2SrM] > AdVFb5[cx2SrM]) {
                fflush (fpItSw5eBJg);
                scanf ("%d%d", &B42EzhH[cx2SrM], &AdVFb5[cx2SrM]);
                printf ("??????????:\n");
            }
            cx2SrM++;
        }
    }
    xgIyiPla = cEBMo20kr = f64KHZ7 (AdVFb5);
    IDpZnc1Fx5 = SXH20sB7 = WjCLSKz (B42EzhH, FpXEo48TZu);
    sHkVDSE2ds = mOeFZ3hM (AdVFb5[SXH20sB7], B42EzhH, FpXEo48TZu);
    printf ("no\n");
    while (sHkVDSE2ds != -1) {
        sHkVDSE2ds = mOeFZ3hM (AdVFb5[sHkVDSE2ds], B42EzhH, FpXEo48TZu);
        if (AdVFb5[sHkVDSE2ds] == AdVFb5[xgIyiPla]) {
            printf ("\n%d %d", B42EzhH[IDpZnc1Fx5], AdVFb5[xgIyiPla]);
            return 0;
        }
    }
}

