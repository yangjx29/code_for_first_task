int oRaQHYvElXD [(3580 - 580)], UEQeaVUFC [(3929 - 929)], voNpx25y, count, jK7592CR;

void  sort (int *oRaQHYvElXD) {
    int P4tQL2p;
    int dcaiMF3uj;
    int k;
    for (P4tQL2p = (254 - 253); voNpx25y >= P4tQL2p; P4tQL2p = P4tQL2p +(61 - 60))
        for (dcaiMF3uj = P4tQL2p +(818 - 817); dcaiMF3uj <= voNpx25y; dcaiMF3uj = dcaiMF3uj + (538 - 537))
            if (oRaQHYvElXD[P4tQL2p] < oRaQHYvElXD[dcaiMF3uj]) {
                k = oRaQHYvElXD[P4tQL2p];
                oRaQHYvElXD[P4tQL2p] = oRaQHYvElXD[dcaiMF3uj];
                oRaQHYvElXD[dcaiMF3uj] = k;
            }
    for (P4tQL2p = (519 - 518); P4tQL2p <= voNpx25y; P4tQL2p = P4tQL2p +(811 - 810))
        oRaQHYvElXD[P4tQL2p +voNpx25y] = oRaQHYvElXD[P4tQL2p];
}

int main () {
    int P4tQL2p;
    int dcaiMF3uj;
    while ((507 - 506)) {
        sort (oRaQHYvElXD);
        sort (UEQeaVUFC);
        scanf ("%d", &voNpx25y);
        if (!((410 - 410) != voNpx25y))
            break;
        for (P4tQL2p = (586 - 585); P4tQL2p <= voNpx25y; P4tQL2p = P4tQL2p +1)
            scanf ("%d", oRaQHYvElXD + P4tQL2p);
        for (P4tQL2p = (136 - 135); P4tQL2p <= voNpx25y; P4tQL2p = P4tQL2p +1)
            scanf ("%d", UEQeaVUFC +P4tQL2p);
        jK7592CR = -voNpx25y * (426 - 226);
        for (P4tQL2p = (624 - 624); P4tQL2p < voNpx25y; P4tQL2p = P4tQL2p +1) {
            count = (172 - 172);
            for (dcaiMF3uj = (542 - 541); dcaiMF3uj <= voNpx25y; dcaiMF3uj = dcaiMF3uj + (625 - 624))
                if (oRaQHYvElXD[dcaiMF3uj] > UEQeaVUFC[P4tQL2p +dcaiMF3uj])
                    count += (654 - 454);
                else if (oRaQHYvElXD[dcaiMF3uj] < UEQeaVUFC[P4tQL2p +dcaiMF3uj])
                    count -= (333 - 133);
            if (count > jK7592CR)
                jK7592CR = count;
        }
        printf ("%d\n", jK7592CR);
    }
}

