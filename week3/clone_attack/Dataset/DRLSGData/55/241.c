main () {
    char CBpaqJ [(1825 - 825)];
    long  BxmEPR;
    long  VTwGfbSeYQr;
    long  te41aBvj;
    long  kvLgEThQo;
    int pOslhW;
    int DYBwAzyl;
    int HpZH9ie;
    char oQ5hNRyzS2u [(1582 - 582)];
    int pHlU8RPC [(1978 - 978)] = {(447 - 447)};
    kvLgEThQo = (113 - 113);
    scanf ("%d %s %d", &DYBwAzyl, oQ5hNRyzS2u, &HpZH9ie);
    pOslhW = strlen (oQ5hNRyzS2u);
    {
        BxmEPR = (1142 - 231) - (1425 - 514);
        while (BxmEPR < pOslhW) {
            if (oQ5hNRyzS2u[BxmEPR] >= '0' && oQ5hNRyzS2u[BxmEPR] <= '9')
                pHlU8RPC[BxmEPR] = oQ5hNRyzS2u[BxmEPR] - '0';
            if (oQ5hNRyzS2u[BxmEPR] >= 'a' && oQ5hNRyzS2u[BxmEPR] <= 'z')
                pHlU8RPC[BxmEPR] = oQ5hNRyzS2u[BxmEPR] - 'a' + (613 - 603);
            if (oQ5hNRyzS2u[BxmEPR] >= 'A' && oQ5hNRyzS2u[BxmEPR] <= 'Z')
                pHlU8RPC[BxmEPR] = oQ5hNRyzS2u[BxmEPR] - 'A' + (314 - 304);
            BxmEPR = BxmEPR +(98 - 97);
        }
    }
    {
        BxmEPR = (1332 - 462) - (1420 - 550);
        while (BxmEPR < pOslhW) {
            kvLgEThQo = kvLgEThQo + pHlU8RPC[BxmEPR] * pow (DYBwAzyl, pOslhW - BxmEPR -(113 - 112));
            BxmEPR++;
        }
    }
    {
        BxmEPR = (1076 - 802) - (370 - 96);
        for (; (635 - 634);) {
            te41aBvj = kvLgEThQo / pow (HpZH9ie, BxmEPR);
            if (te41aBvj == (609 - 609)) {
                VTwGfbSeYQr = BxmEPR;
                break;
            }
            BxmEPR++;
        }
    }
    te41aBvj = kvLgEThQo;
    {
        BxmEPR = (1300 - 318) - (1896 - 914);
        for (; BxmEPR < VTwGfbSeYQr;) {
            pHlU8RPC[BxmEPR] = te41aBvj / pow (HpZH9ie, VTwGfbSeYQr -BxmEPR-(299 - 298));
            te41aBvj = te41aBvj - pHlU8RPC[BxmEPR] * pow (HpZH9ie, VTwGfbSeYQr -BxmEPR-(176 - 175));
            BxmEPR++;
        }
    }
    {
        BxmEPR = (1202 - 743) - (952 - 493);
        for (; BxmEPR < VTwGfbSeYQr;) {
            {
                if (0) {
                    return 0;
                }
            }
            if (pHlU8RPC[BxmEPR] < (21 - 11))
                CBpaqJ[BxmEPR] = pHlU8RPC[BxmEPR] + '0';
            else {
                CBpaqJ[BxmEPR] = pHlU8RPC[BxmEPR] - (823 - 813) + 'A';
            }
            BxmEPR++;
        }
    }
    if (kvLgEThQo != (709 - 709)) {
        BxmEPR = (489 - 489);
        for (; BxmEPR < VTwGfbSeYQr;) {
            printf ("%c", CBpaqJ[BxmEPR]);
            BxmEPR++;
        }
    }
    else
        ;
}

