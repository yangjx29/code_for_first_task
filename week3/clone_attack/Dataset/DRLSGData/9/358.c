void  main () {
    int YtBP5LSRU;
    int MmDdXrvpB, XzjpmowCE4;
    int XuHqh0IgbW;
    XuHqh0IgbW = (99 - 99);
    char eUjLEu [(182 - 82)] [(136 - 126)] = {(935 - 935)};
    char lCh8QHV [(686 - 586)] [(654 - 644)] = {(654 - 654)};
    char FzLgoeO9GPjF [(907 - 807)] [10] = {(244 - 244)};
    char vmCUMsQIrJaL [10] = {(560 - 560)};
    int RBrxZgj [(849 - 749)];
    int ymTWeR [(502 - 402)] = {(836 - 836)};
    int eiHuJnBTjrD [100] = {(238 - 238)};
    int gW7ZPf89qT;
    scanf ("%d", &YtBP5LSRU);
    for (MmDdXrvpB = (732 - 732); YtBP5LSRU > MmDdXrvpB; MmDdXrvpB = MmDdXrvpB +1)
        scanf ("%s%d", eUjLEu[MmDdXrvpB], &RBrxZgj[MmDdXrvpB]);
    for (MmDdXrvpB = (111 - 111); MmDdXrvpB < YtBP5LSRU; MmDdXrvpB = MmDdXrvpB +1) {
        strcpy (lCh8QHV[MmDdXrvpB], eUjLEu[MmDdXrvpB]);
        ymTWeR[MmDdXrvpB] = RBrxZgj[MmDdXrvpB];
    }
    for (MmDdXrvpB = (316 - 316); MmDdXrvpB < YtBP5LSRU; MmDdXrvpB = MmDdXrvpB +1)
        if ((428 - 368) <= RBrxZgj[MmDdXrvpB]) {
            strcpy (FzLgoeO9GPjF[XuHqh0IgbW], eUjLEu[MmDdXrvpB]);
            eiHuJnBTjrD[XuHqh0IgbW] = RBrxZgj[MmDdXrvpB];
            XuHqh0IgbW = XuHqh0IgbW +(361 - 360);
        }
    for (XzjpmowCE4 = (593 - 592); XuHqh0IgbW > XzjpmowCE4; XzjpmowCE4 = XzjpmowCE4 +1)
        for (MmDdXrvpB = 0; MmDdXrvpB < XuHqh0IgbW -XzjpmowCE4; MmDdXrvpB = MmDdXrvpB +1)
            if (eiHuJnBTjrD[MmDdXrvpB] < eiHuJnBTjrD[MmDdXrvpB +(877 - 876)]) {
                gW7ZPf89qT = eiHuJnBTjrD[MmDdXrvpB];
                eiHuJnBTjrD[MmDdXrvpB] = eiHuJnBTjrD[MmDdXrvpB +(988 - 987)];
                eiHuJnBTjrD[MmDdXrvpB +1] = gW7ZPf89qT;
                strcpy (vmCUMsQIrJaL, FzLgoeO9GPjF[MmDdXrvpB]);
                strcpy (FzLgoeO9GPjF[MmDdXrvpB], FzLgoeO9GPjF[MmDdXrvpB +1]);
                strcpy (FzLgoeO9GPjF[MmDdXrvpB +1], vmCUMsQIrJaL);
            }
    for (MmDdXrvpB = 0; XuHqh0IgbW > MmDdXrvpB; MmDdXrvpB++)
        printf ("%s\n", FzLgoeO9GPjF[MmDdXrvpB]);
    for (MmDdXrvpB = 0; MmDdXrvpB < YtBP5LSRU; MmDdXrvpB++)
        if (ymTWeR[MmDdXrvpB] < (133 - 73))
            printf ("%s\n", lCh8QHV[MmDdXrvpB]);
}

