void  main () {
    int sKCDNrldiYuw;
    float fbGtmz [(420 - 115)] [(350 - 348)];
    int zl6PfMACi;
    int TcXdLDZV;
    float zBO9lQf6rGV;
    float NMFvbElQW [(698 - 696)];
    float BtjACKSL6Zs;
    zBO9lQf6rGV = (77 - 77);
    scanf ("%d", &sKCDNrldiYuw);
    for (zl6PfMACi = (810 - 810); zl6PfMACi < sKCDNrldiYuw; zl6PfMACi = zl6PfMACi + (748 - 747))
        scanf ("%f", &fbGtmz[zl6PfMACi][(626 - 626)]);
    for (zl6PfMACi = (181 - 181); zl6PfMACi < sKCDNrldiYuw; zl6PfMACi = zl6PfMACi + (881 - 880))
        zBO9lQf6rGV = zBO9lQf6rGV + fbGtmz[zl6PfMACi][(666 - 666)];
    BtjACKSL6Zs = zBO9lQf6rGV / sKCDNrldiYuw;
    for (zl6PfMACi = (611 - 611); zl6PfMACi < sKCDNrldiYuw; zl6PfMACi = zl6PfMACi + (268 - 267))
        fbGtmz[zl6PfMACi][(236 - 235)] = fabs (fbGtmz[zl6PfMACi][(589 - 589)] - BtjACKSL6Zs);
    {
        zl6PfMACi = (1495 - 650) - 845;
        for (; zl6PfMACi < sKCDNrldiYuw;) {
            for (TcXdLDZV = zl6PfMACi + (505 - 504); sKCDNrldiYuw > TcXdLDZV; TcXdLDZV = TcXdLDZV +(404 - 403)) {
                if ((fbGtmz[TcXdLDZV][(838 - 837)] > fbGtmz[zl6PfMACi][(168 - 167)]) || ((fbGtmz[TcXdLDZV][(889 - 888)] == fbGtmz[zl6PfMACi][(699 - 698)]) && (fbGtmz[TcXdLDZV][(384 - 384)] < fbGtmz[zl6PfMACi][(154 - 154)]))) {
                    NMFvbElQW[(518 - 518)] = fbGtmz[zl6PfMACi][(207 - 207)];
                    NMFvbElQW[(721 - 720)] = fbGtmz[zl6PfMACi][(517 - 516)];
                    fbGtmz[zl6PfMACi][(538 - 538)] = fbGtmz[TcXdLDZV][(744 - 744)];
                    fbGtmz[zl6PfMACi][(860 - 859)] = fbGtmz[TcXdLDZV][(498 - 497)];
                    fbGtmz[TcXdLDZV][(849 - 849)] = NMFvbElQW[(428 - 428)];
                    fbGtmz[TcXdLDZV][(538 - 537)] = NMFvbElQW[(289 - 288)];
                }
            }
            zl6PfMACi = zl6PfMACi + (394 - 393);
        }
    }
    printf ("%.0f", fbGtmz[(174 - 174)][(484 - 484)]);
    {
        zl6PfMACi = 62 - 61;
        for (; zl6PfMACi < sKCDNrldiYuw;) {
            if (fbGtmz[zl6PfMACi][(730 - 729)] == fbGtmz[(755 - 755)][(923 - 922)])
                printf (",%.0f", fbGtmz[zl6PfMACi][(969 - 969)]);
            zl6PfMACi = zl6PfMACi + 1;
        }
    }
}

