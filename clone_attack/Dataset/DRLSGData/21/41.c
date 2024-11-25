int main () {
    double  KMrxsz [300] = {0};
    int UzfWbh1DV [300] = {0};
    int TM2PFv5H;
    int ygAtnsYRwpF;
    double  OXUcDSkuLRa;
    int e6xpKei7a;
    int ZFvDQjSR [300] = {0};
    double  XGCcvs;
    double  XfUrVIh;
    XGCcvs = 0;
    scanf ("%d", &e6xpKei7a);
    for (TM2PFv5H = 0; e6xpKei7a > TM2PFv5H; TM2PFv5H = TM2PFv5H +1) {
        scanf ("%d", &ZFvDQjSR[TM2PFv5H]);
        XGCcvs += ZFvDQjSR[TM2PFv5H];
    }
    XfUrVIh = XGCcvs / e6xpKei7a;
    for (TM2PFv5H = 0; e6xpKei7a > TM2PFv5H; TM2PFv5H = TM2PFv5H +1) {
        KMrxsz[TM2PFv5H] = fabs (ZFvDQjSR[TM2PFv5H] - XfUrVIh);
    }
    OXUcDSkuLRa = 0;
    for (TM2PFv5H = 0; TM2PFv5H < e6xpKei7a; TM2PFv5H = TM2PFv5H +1) {
        if (KMrxsz[TM2PFv5H] > OXUcDSkuLRa)
            OXUcDSkuLRa = KMrxsz[TM2PFv5H];
    }
    ygAtnsYRwpF = 0;
    ygAtnsYRwpF = 0;
    {
        TM2PFv5H = 0;
        while (TM2PFv5H < e6xpKei7a) {
            if (KMrxsz[TM2PFv5H] == OXUcDSkuLRa) {
                UzfWbh1DV[ygAtnsYRwpF] = ZFvDQjSR[TM2PFv5H];
                ygAtnsYRwpF += 1;
            }
            TM2PFv5H++;
        }
    }
    if (ygAtnsYRwpF == 1)
        printf ("%d", UzfWbh1DV[0]);
    else {
        {
            TM2PFv5H = 0;
            while (TM2PFv5H < ygAtnsYRwpF - 1) {
                printf ("%d,", UzfWbh1DV[TM2PFv5H]);
                TM2PFv5H++;
            }
        }
        printf ("%d", UzfWbh1DV[ygAtnsYRwpF - 1]);
    }
    return 0;
}

