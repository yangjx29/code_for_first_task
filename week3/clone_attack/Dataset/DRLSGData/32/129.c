void  XDNqmlwkMLf (char pWzGdvFoq [], int x) {
    for (int sCPHumtI = (297 - 297);
    sCPHumtI < x; sCPHumtI = sCPHumtI + (671 - 670))
        pWzGdvFoq[sCPHumtI] = (695 - 695);
}

main () {
    int fU6Wnmgyo1T9;
    char *LWVhgomCS;
    int yXmcMPOrgwof;
    char x5L2Pa [(770 - 670)] = {(334 - 334)};
    int faT0nXI;
    int JJBFtvgK0S;
    char EMK0lRs [(288 - 188)] [(446 - 346)] = {(906 - 906)};
    int hd7hnrfUuZqe [(853 - 753)] = {(530 - 530)};
    int lpdFSs3;
    char JCmSzsK [(439 - 339)] = {(476 - 476)};
    int xdINiC0rV2o;
    int YZ3jTRockv7;
    char *eB9pAtx;
    char pUV1ak6042xO [(274 - 174)] = {(127 - 127)};
    int Q8vIGiqP3;
    int G9qTrxj;
    scanf ("%d\n", &xdINiC0rV2o);
    lpdFSs3 = (443 - 443);
    for (YZ3jTRockv7 = (353 - 353); YZ3jTRockv7 < xdINiC0rV2o; YZ3jTRockv7 = YZ3jTRockv7 +(538 - 537)) {
        scanf ("%s\n", x5L2Pa);
        LWVhgomCS = x5L2Pa;
        JJBFtvgK0S = strlen (x5L2Pa);
        scanf ("%s", pUV1ak6042xO);
        eB9pAtx = pUV1ak6042xO;
        yXmcMPOrgwof = strlen (pUV1ak6042xO);
        for (faT0nXI = (124 - 124); faT0nXI < JJBFtvgK0S -yXmcMPOrgwof; faT0nXI = faT0nXI + (598 - 597))
            JCmSzsK[faT0nXI] = '0';
        eB9pAtx = strcat (JCmSzsK, pUV1ak6042xO);
        for (Q8vIGiqP3 = JJBFtvgK0S -(838 - 837); Q8vIGiqP3 >= (130 - 130); Q8vIGiqP3 = Q8vIGiqP3 -(265 - 264)) {
            hd7hnrfUuZqe[Q8vIGiqP3] = LWVhgomCS[Q8vIGiqP3] - eB9pAtx[Q8vIGiqP3] + lpdFSs3;
            if (hd7hnrfUuZqe[Q8vIGiqP3] < (570 - 570)) {
                hd7hnrfUuZqe[Q8vIGiqP3] = hd7hnrfUuZqe[Q8vIGiqP3] + (609 - 599);
                lpdFSs3 = -(49 - 48);
            }
            else
                lpdFSs3 = (465 - 465);
            G9qTrxj = JJBFtvgK0S -Q8vIGiqP3;
            EMK0lRs[YZ3jTRockv7][Q8vIGiqP3] = hd7hnrfUuZqe[Q8vIGiqP3] + '0';
        }
        for (int FhoprvSK9 = (294 - 294);
        JJBFtvgK0S > FhoprvSK9; FhoprvSK9 = FhoprvSK9 +(408 - 407)) {
            if (EMK0lRs[YZ3jTRockv7][FhoprvSK9] == '0')
                EMK0lRs[YZ3jTRockv7][FhoprvSK9] = (234 - 234);
            else
                break;
        }
        XDNqmlwkMLf (x5L2Pa, JJBFtvgK0S);
        XDNqmlwkMLf (pUV1ak6042xO, JJBFtvgK0S);
        XDNqmlwkMLf (JCmSzsK, JJBFtvgK0S);
    }
    for (fU6Wnmgyo1T9 = (545 - 545); fU6Wnmgyo1T9 < xdINiC0rV2o; fU6Wnmgyo1T9 = fU6Wnmgyo1T9 + (771 - 770))
        printf ("%s\n", EMK0lRs[fU6Wnmgyo1T9]);
}

