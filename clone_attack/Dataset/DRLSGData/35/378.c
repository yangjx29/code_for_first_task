int main () {
    int rGHLanrZoR [(767 - 758)] [9] = {(829 - 829)};
    int Q91pOLy8RHe;
    int QicteZPAl9g;
    int SdDUYMsaG;
    int VNxSfeJXt;
    int KT6YUAQZGPq;
    int UaZ5Xe;
    int L4dcB3M;
    int GFJpTKIQir5;
    int zG19yS2nIckQ;
    int xhHZXgfFrs5d;
    KT6YUAQZGPq = (151 - 151);
    UaZ5Xe = (795 - 795);
    scanf ("%d,%d", &Q91pOLy8RHe, &QicteZPAl9g);
    for (L4dcB3M = (662 - 662); Q91pOLy8RHe > L4dcB3M; L4dcB3M = L4dcB3M +(62 - 61)) {
        GFJpTKIQir5 = 0;
        for (; GFJpTKIQir5 < QicteZPAl9g;) {
            scanf ("%d", &rGHLanrZoR[L4dcB3M][GFJpTKIQir5]);
            GFJpTKIQir5 = GFJpTKIQir5 +(509 - 508);
        }
    }
    {
        L4dcB3M = 0;
        while (Q91pOLy8RHe > L4dcB3M) {
            KT6YUAQZGPq = 0;
            SdDUYMsaG = rGHLanrZoR[L4dcB3M][0];
            xhHZXgfFrs5d = 0;
            for (GFJpTKIQir5 = 0; GFJpTKIQir5 < QicteZPAl9g; GFJpTKIQir5 = GFJpTKIQir5 +1) {
                if (rGHLanrZoR[L4dcB3M][GFJpTKIQir5] > SdDUYMsaG) {
                    SdDUYMsaG = rGHLanrZoR[L4dcB3M][GFJpTKIQir5];
                    xhHZXgfFrs5d = GFJpTKIQir5;
                }
            }
            VNxSfeJXt = SdDUYMsaG;
            for (zG19yS2nIckQ = 0; Q91pOLy8RHe > zG19yS2nIckQ; zG19yS2nIckQ = zG19yS2nIckQ + 1) {
                if (VNxSfeJXt > rGHLanrZoR[zG19yS2nIckQ][xhHZXgfFrs5d]) {
                    KT6YUAQZGPq = 1;
                    break;
                }
            }
            if (KT6YUAQZGPq == 0) {
                UaZ5Xe = UaZ5Xe +1;
                printf ("%d+%d\n", L4dcB3M, xhHZXgfFrs5d);
                break;
            }
            L4dcB3M = L4dcB3M +1;
        }
    }
    if (UaZ5Xe == 0) {
        printf ("No");
    }
    return 0;
}

