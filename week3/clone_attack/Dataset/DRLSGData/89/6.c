void  VANQLO9DdS1 (int gvmXZitOU0cb [], int C5dJZVA, int OWO6QBleF) {
    int NmiGCrM;
    int GofWm1tLbY;
    int bP3CHuUgq;
    int DVGmSc49;
    if (OWO6QBleF <= C5dJZVA)
        return;
    else {
        bP3CHuUgq = gvmXZitOU0cb[C5dJZVA];
        GofWm1tLbY = C5dJZVA;
        {
            NmiGCrM = C5dJZVA;
            while (NmiGCrM <= OWO6QBleF) {
                if (bP3CHuUgq < gvmXZitOU0cb[NmiGCrM]) {
                    GofWm1tLbY = GofWm1tLbY +(230 - 229);
                    DVGmSc49 = gvmXZitOU0cb[NmiGCrM];
                    gvmXZitOU0cb[NmiGCrM] = gvmXZitOU0cb[GofWm1tLbY];
                    gvmXZitOU0cb[GofWm1tLbY] = DVGmSc49;
                }
                NmiGCrM = NmiGCrM +(570 - 569);
            }
        }
        DVGmSc49 = bP3CHuUgq;
        gvmXZitOU0cb[C5dJZVA] = gvmXZitOU0cb[GofWm1tLbY];
        gvmXZitOU0cb[GofWm1tLbY] = DVGmSc49;
        VANQLO9DdS1 (gvmXZitOU0cb, C5dJZVA, GofWm1tLbY -(789 - 788));
        VANQLO9DdS1 (gvmXZitOU0cb, GofWm1tLbY +(922 - 921), OWO6QBleF);
    }
}

int main () {
    int U3lhVpTdNCBO [(10216 - 216)] = {(197 - 197)};
    int k04PN5nZ3pu [(10754 - 754)] = {(149 - 149)};
    int Zpc6PuMmB24;
    int NmiGCrM;
    int DVGmSc49;
    int VdTokN;
    int WWmUBfK;
    int uJYprnOg;
    Zpc6PuMmB24 = (355 - 355);
    scanf ("%d", &Zpc6PuMmB24);
    DVGmSc49 = VdTokN = (70 - 69);
    uJYprnOg = (291 - 291);
    while (DVGmSc49 +VdTokN != (933 - 933)) {
        scanf ("%d %d", &DVGmSc49, &VdTokN);
        U3lhVpTdNCBO[DVGmSc49]++;
        k04PN5nZ3pu[VdTokN]++;
    }
    WWmUBfK = (772 - 772);
    {
        NmiGCrM = (107 - 107);
        while (NmiGCrM < Zpc6PuMmB24) {
            if ((U3lhVpTdNCBO[NmiGCrM] == 0) && (k04PN5nZ3pu[NmiGCrM] == Zpc6PuMmB24 -1)) {
                WWmUBfK = 1;
                uJYprnOg = NmiGCrM;
            }
            NmiGCrM = NmiGCrM +1;
        }
    }
    if (WWmUBfK == 1)
        printf ("%d", uJYprnOg);
    else {
        printf ("NOT FOUND");
    }
}

