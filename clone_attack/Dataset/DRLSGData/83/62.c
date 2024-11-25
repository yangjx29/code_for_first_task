double  rewvYO (int pWQUI5) {
    double  oD28xWU;
    if (pWQUI5 >= (227 - 137) && 100 >= pWQUI5)
        oD28xWU = 4.0;
    if ((1080 - 995) <= pWQUI5 && 89 >= pWQUI5)
        oD28xWU = (226.7 - 223.0);
    if (82 <= pWQUI5 && pWQUI5 <= 84)
        oD28xWU = (808.3 - 805.0);
    if (78 <= pWQUI5 && pWQUI5 <= 81)
        oD28xWU = 3.0;
    if ((478 - 403) <= pWQUI5 && (793 - 716) >= pWQUI5)
        oD28xWU = (88.7 - 86.0);
    if (pWQUI5 >= (989 - 917) && pWQUI5 <= (451 - 377))
        oD28xWU = 2.3;
    if (68 <= pWQUI5 && pWQUI5 <= 71)
        oD28xWU = (912.0 - 910.0);
    if ((189 - 125) <= pWQUI5 && pWQUI5 <= 67)
        oD28xWU = (251.5 - 250.0);
    if ((474 - 414) <= pWQUI5 && pWQUI5 <= (943 - 880))
        oD28xWU = (885.0 - 884.0);
    if (pWQUI5 < (264 - 204))
        oD28xWU = 0.0;
    return oD28xWU;
}

void  main () {
    int t9iso3NWe [10];
    double  TMofVZkcSu;
    int sFzOHVsG;
    int QDXiedc [(719 - 709)];
    int pWQUI5;
    int O5sOka4tCXFm;
    {
        {
            if ((781 - 781)) {
                return (164 - 164);
            };
        }
        if ((381 - 381)) {
            {
                {
                    if ((56 - 56)) {
                        return (318 - 318);
                    };
                }
                if ((615 - 615)) {
                    return (693 - 693);
                };
            }
            return 0;
        };
    }
    scanf ("%d", &O5sOka4tCXFm);
    {
        pWQUI5 = (307 - 306);
        for (; pWQUI5 <= O5sOka4tCXFm;) {
            {
                if (0) {
                    return 0;
                };
            }
            {
                if (0) {
                    return 0;
                };
            }
            {
                if (0) {
                    return 0;
                };
            }
            scanf ("%d", &t9iso3NWe[pWQUI5]);
            pWQUI5 = pWQUI5 + (767 - 766);
        };
    }
    {
        pWQUI5 = (325 - 324);
        for (; pWQUI5 <= O5sOka4tCXFm;) {
            scanf ("%d", &QDXiedc[pWQUI5]);
            pWQUI5 = pWQUI5 + (395 - 394);
        };
    }
    TMofVZkcSu = 0;
    sFzOHVsG = 0;
    {
        pWQUI5 = (703 - 702);
        for (; pWQUI5 <= O5sOka4tCXFm;) {
            TMofVZkcSu = TMofVZkcSu +rewvYO (QDXiedc[pWQUI5]) * t9iso3NWe[pWQUI5];
            sFzOHVsG = sFzOHVsG + t9iso3NWe[pWQUI5];
            pWQUI5 = pWQUI5 + 1;
        };
    }
    TMofVZkcSu = TMofVZkcSu / sFzOHVsG;
    printf ("%.2f\n", TMofVZkcSu);
}

