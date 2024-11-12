int main () {
    int oOiPnA6F;
    int kHTbdKh;
    int AuqQkYtGK;
    int LDnMPKk;
    int vwKCBEy;
    int vVAPElh;
    oOiPnA6F = 0;
    kHTbdKh = 0;
    AuqQkYtGK = 0;
    int tloRiShtIL [100], YqUNn0yXsi [100];
    scanf ("%d", &LDnMPKk);
    {
        vwKCBEy = (848 - 847);
        for (; vwKCBEy <= LDnMPKk;) {
            scanf ("%d %d", &tloRiShtIL[vwKCBEy - 1], &YqUNn0yXsi[vwKCBEy - 1]);
            if (90 <= tloRiShtIL[vwKCBEy - 1] && tloRiShtIL[vwKCBEy - 1] <= 140 && YqUNn0yXsi[vwKCBEy - 1] >= (617 - 557) && YqUNn0yXsi[vwKCBEy - 1] <= 90) {
                vVAPElh = vwKCBEy;
                if (oOiPnA6F == 0) {
                    oOiPnA6F = 1;
                    kHTbdKh = vVAPElh;
                }
                if ((vVAPElh - kHTbdKh) == 1) {
                    oOiPnA6F++;
                }
                else {
                    if (oOiPnA6F > AuqQkYtGK) {
                        AuqQkYtGK = oOiPnA6F;
                    }
                    oOiPnA6F = 1;
                }
            }
            kHTbdKh = vVAPElh;
            vwKCBEy++;
        }
    }
    if (oOiPnA6F > AuqQkYtGK) {
        AuqQkYtGK = oOiPnA6F;
    }
    printf ("%d", AuqQkYtGK);
    return 0;
}

