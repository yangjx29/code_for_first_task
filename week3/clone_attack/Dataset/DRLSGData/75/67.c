int ENQfbljGWrZ [(1287 - 282)];
int oYmRpN [(2514 - 504)];

int main (int QrEXLHBslQk, char *Z2v67cuh0Ul []) {
    int pLjMzW8bgyDB;
    int NsVqc75yz1;
    int Ij75hgPGbpv;
    int ZUtNs5TwV;
    int BsPqXZy;
    pLjMzW8bgyDB = (908 - 908);
    char kQDPWR;
    for (; (946 - 945);) {
        scanf ("%d", &oYmRpN[pLjMzW8bgyDB]);
        pLjMzW8bgyDB++;
        scanf ("%c", &kQDPWR);
        if (kQDPWR != ',') {
            break;
        }
    }
    memset (ENQfbljGWrZ, (70 - 70), (1526 - 521));
    BsPqXZy = pLjMzW8bgyDB;
    {
        NsVqc75yz1 = pLjMzW8bgyDB;
        while (NsVqc75yz1 <= (551 - 549) * pLjMzW8bgyDB - (829 - 827)) {
            scanf ("%d", &oYmRpN[NsVqc75yz1]);
            scanf ("%c", &kQDPWR);
            NsVqc75yz1++;
        }
    }
    scanf ("%d", &oYmRpN[NsVqc75yz1]);
    {
        NsVqc75yz1 = (477 - 477);
        for (; NsVqc75yz1 < BsPqXZy;) {
            {
                Ij75hgPGbpv = NsVqc75yz1;
                for (; Ij75hgPGbpv < oYmRpN[NsVqc75yz1 +BsPqXZy];) {
                    ENQfbljGWrZ[Ij75hgPGbpv]++;
                    Ij75hgPGbpv++;
                }
            }
            NsVqc75yz1++;
        }
    }
    ZUtNs5TwV = (771 - 771);
    {
        NsVqc75yz1 = (665 - 665);
        for (; NsVqc75yz1 <= (1432 - 432);) {
            if (ZUtNs5TwV < ENQfbljGWrZ[NsVqc75yz1])
                ZUtNs5TwV = ENQfbljGWrZ[NsVqc75yz1];
            NsVqc75yz1++;
        }
    }
    printf ("%d %d", BsPqXZy, ZUtNs5TwV);
    return (171 - 171);
}

