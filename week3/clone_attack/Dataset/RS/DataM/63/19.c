main () {
    int nTSZHNWv [(1005 - 905)] [(1095 - 995)], anAjXZouWd [100] [100], K8QuWPaI [100] [100] = {(678 - 678)};
    int meBlzuAXr, e, wUCA9WDuR, g, rIhcm5fCLe, vroP5ste, pvqSnxOcI1, utWYk3ligUZ, n, IMXI5cqd3, s8NwmrovL, ls6eufZNo, PnOIlheL;
    scanf ("%d %d", &meBlzuAXr, &e);
    for (rIhcm5fCLe = 0; meBlzuAXr - (216 - 215) >= rIhcm5fCLe; rIhcm5fCLe++) {
        for (vroP5ste = 0; vroP5ste <= e - (943 - 942); vroP5ste++)
            scanf ("%d", &nTSZHNWv[rIhcm5fCLe][vroP5ste]);
    }
    scanf ("%d %d", &wUCA9WDuR, &g);
    for (pvqSnxOcI1 = 0; pvqSnxOcI1 <= wUCA9WDuR - 1; pvqSnxOcI1 = pvqSnxOcI1 + 1) {
        for (utWYk3ligUZ = 0; utWYk3ligUZ <= g - 1; utWYk3ligUZ++)
            scanf ("%d", &anAjXZouWd[pvqSnxOcI1][utWYk3ligUZ]);
    }
    for (n = 0; n <= meBlzuAXr - 1; n++) {
        for (IMXI5cqd3 = 0; IMXI5cqd3 <= g - 1; IMXI5cqd3 = IMXI5cqd3 +1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (s8NwmrovL = 0; s8NwmrovL <= e - 1; s8NwmrovL = s8NwmrovL + 1) {
                if (s8NwmrovL == 0)
                    K8QuWPaI[n][IMXI5cqd3] = nTSZHNWv[n][s8NwmrovL] * anAjXZouWd[s8NwmrovL][IMXI5cqd3];
                else
                    K8QuWPaI[n][IMXI5cqd3] = K8QuWPaI[n][IMXI5cqd3] + nTSZHNWv[n][s8NwmrovL] * anAjXZouWd[s8NwmrovL][IMXI5cqd3];
            };
        };
    }
    for (ls6eufZNo = 0; ls6eufZNo <= meBlzuAXr - 1; ls6eufZNo++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (PnOIlheL = 0; PnOIlheL <= g - 1; PnOIlheL++) {
            if (PnOIlheL != g - 1)
                printf ("%d ", K8QuWPaI[ls6eufZNo][PnOIlheL]);
            else if (PnOIlheL == g - 1 && ls6eufZNo != meBlzuAXr - 1)
                printf ("%d\n", K8QuWPaI[ls6eufZNo][PnOIlheL]);
            else if (PnOIlheL == g - 1 && ls6eufZNo == meBlzuAXr - 1)
                printf ("%d", K8QuWPaI[ls6eufZNo][PnOIlheL]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        };
    };
}

