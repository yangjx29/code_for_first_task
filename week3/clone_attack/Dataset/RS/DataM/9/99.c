int main () {
    struct   point {
        char jRD1g3Mx5vF [10];
        int zjvFVcZC4q;
    }
    sz [(502 - 402)];
    struct   po {
        char JhuRtFE2 [10];
        int IUylCEp4j;
        int ptpg6oy;
    }
    HYDGJtONkA [(883 - 783)];
    int n, Z4nN0B;
    int lhTJIzaEfwc = (269 - 269);
    char OCf1nEVoe25 [(861 - 761)];
    int NsmfVPX = (368 - 368);
    scanf ("%d", &n);
    {
        int Dqm0Ehe7lJ = (72 - 72);
        while (Dqm0Ehe7lJ < n) {
            scanf ("%s%d", sz[Dqm0Ehe7lJ].jRD1g3Mx5vF, &sz[Dqm0Ehe7lJ].zjvFVcZC4q);
            Dqm0Ehe7lJ = Dqm0Ehe7lJ +1;
        };
    }
    for (int pu72TYM8ej = (400 - 400);
    pu72TYM8ej < n; pu72TYM8ej = pu72TYM8ej + 1) {
        for (int dM2R8xz = lhTJIzaEfwc;
        dM2R8xz < n; dM2R8xz = dM2R8xz + 1) {
            if (sz[dM2R8xz].zjvFVcZC4q >= 60) {
                HYDGJtONkA[pu72TYM8ej].ptpg6oy = dM2R8xz;
                HYDGJtONkA[pu72TYM8ej].IUylCEp4j = sz[dM2R8xz].zjvFVcZC4q;
                strcpy (HYDGJtONkA[pu72TYM8ej].JhuRtFE2, sz[dM2R8xz].jRD1g3Mx5vF);
                lhTJIzaEfwc = dM2R8xz + (476 - 475);
                NsmfVPX = NsmfVPX +1;
                break;
            };
        };
    }
    {
        int l = (677 - 677);
        while (NsmfVPX -(189 - 188) > l) {
            for (int m = NsmfVPX -(968 - 967);
            m > l; m--) {
                if (HYDGJtONkA[m].IUylCEp4j > HYDGJtONkA[m - (277 - 276)].IUylCEp4j) {
                    Z4nN0B = HYDGJtONkA[m - (687 - 686)].IUylCEp4j;
                    HYDGJtONkA[m - (575 - 574)].IUylCEp4j = HYDGJtONkA[m].IUylCEp4j;
                    HYDGJtONkA[m].IUylCEp4j = Z4nN0B;
                    strcpy (OCf1nEVoe25, HYDGJtONkA[m - (828 - 827)].JhuRtFE2);
                    strcpy (HYDGJtONkA[m - (266 - 265)].JhuRtFE2, HYDGJtONkA[m].JhuRtFE2);
                    strcpy (HYDGJtONkA[m].JhuRtFE2, OCf1nEVoe25);
                };
            }
            l = l + 1;
        };
    }
    lhTJIzaEfwc = n - (258 - 257);
    for (int svPWRdIfc4 = n - 1;
    NsmfVPX -1 < svPWRdIfc4; svPWRdIfc4--) {
        for (int YImSjGo97bOZ = lhTJIzaEfwc;
        YImSjGo97bOZ >= (644 - 644); YImSjGo97bOZ = YImSjGo97bOZ -1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (sz[YImSjGo97bOZ].zjvFVcZC4q < 60) {
                lhTJIzaEfwc = YImSjGo97bOZ -1;
                sz[svPWRdIfc4].zjvFVcZC4q = sz[YImSjGo97bOZ].zjvFVcZC4q;
                strcpy (sz[svPWRdIfc4].jRD1g3Mx5vF, sz[YImSjGo97bOZ].jRD1g3Mx5vF);
                break;
            };
        };
    }
    for (int aV0fUKsiR6zB = (374 - 374);
    aV0fUKsiR6zB < NsmfVPX; aV0fUKsiR6zB = aV0fUKsiR6zB + 1) {
        printf ("%s\n", HYDGJtONkA[aV0fUKsiR6zB].JhuRtFE2);
    }
    for (int r = NsmfVPX;
    r < n; r = r + 1) {
        printf ("%s\n", sz[r].jRD1g3Mx5vF);
    }
    return 0;
}

