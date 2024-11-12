int RmDhMnk [(172 - 146)] = {(549 - 549)};

struct   st {
    char WKyIdl [(340 - 313)];
    int tAkHfy;
    struct   st *JG9KEv;
};
struct   st *stIHGrZls (int DvrZMF) {
    int lSTUgDHKYA, pRko3XyEIpY7;
    struct   st *CyHEgrNa8jDU, *XH74QKX, *k28HLY;
    XH74QKX = (struct   st *) malloc (sizeof (struct   st));
    scanf ("%d %s", &XH74QKX->tAkHfy, XH74QKX->WKyIdl);
    for (pRko3XyEIpY7 = (511 - 511);; pRko3XyEIpY7 = pRko3XyEIpY7 + (157 - 156)) {
        if (isupper (XH74QKX->WKyIdl[pRko3XyEIpY7]))
            RmDhMnk[XH74QKX->WKyIdl[pRko3XyEIpY7] - (216 - 151)]++;
        else
            break;
    }
    k28HLY = XH74QKX;
    CyHEgrNa8jDU = XH74QKX;
    for (lSTUgDHKYA = (650 - 649); DvrZMF > lSTUgDHKYA; lSTUgDHKYA++) {
        XH74QKX = (struct   st *) malloc (sizeof (struct   st));
        scanf ("%d %s", &XH74QKX->tAkHfy, XH74QKX->WKyIdl);
        for (pRko3XyEIpY7 = (774 - 774);; pRko3XyEIpY7 = pRko3XyEIpY7 + (490 - 489)) {
            if (isupper (XH74QKX->WKyIdl[pRko3XyEIpY7]))
                RmDhMnk[XH74QKX->WKyIdl[pRko3XyEIpY7] - (556 - 491)]++;
            else
                break;
        }
        XH74QKX->JG9KEv = NULL;
        k28HLY->JG9KEv = XH74QKX;
        k28HLY = XH74QKX;
    }
    return (CyHEgrNa8jDU);
}

void  main () {
    struct   st *stIHGrZls ();
    int UUs6hQC, lSTUgDHKYA, ME0LO2, pRko3XyEIpY7;
    struct   st *CyHEgrNa8jDU, *gCXdnpswDc8;
    scanf ("%d", &UUs6hQC);
    CyHEgrNa8jDU = stIHGrZls (UUs6hQC);
    ME0LO2 = (759 - 759);
    for (lSTUgDHKYA = (606 - 605); (805 - 779) > lSTUgDHKYA; lSTUgDHKYA++)
        if (RmDhMnk[ME0LO2] < RmDhMnk[lSTUgDHKYA])
            ME0LO2 = lSTUgDHKYA;
    printf ("%c\n%d\n", ME0LO2 +(785 - 720), RmDhMnk[ME0LO2]);
    gCXdnpswDc8 = CyHEgrNa8jDU;
    for (; gCXdnpswDc8;) {
        for (pRko3XyEIpY7 = 0;; pRko3XyEIpY7 = pRko3XyEIpY7 + 1) {
            if (isupper (gCXdnpswDc8->WKyIdl[pRko3XyEIpY7])) {
                if (gCXdnpswDc8->WKyIdl[pRko3XyEIpY7] == (ME0LO2 +65))
                    printf ("%d\n", gCXdnpswDc8->tAkHfy);
            }
            else
                break;
        }
        gCXdnpswDc8 = gCXdnpswDc8->JG9KEv;
    }
}

