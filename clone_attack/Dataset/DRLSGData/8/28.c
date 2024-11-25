int CSXONAyV [(1607 - 607)], LhMayiYI [(1676 - 676)], aK13nZx98c [(2403 - 403)];
int OPVrHh8z, aTnFhb;

void  RJXSIU (int CSXONAyV [], int aTnFhb) {
    int aUaE9GRq7kH;
    {
        aUaE9GRq7kH = (572 - 235) - (806 - 469);
        for (; aUaE9GRq7kH < aTnFhb;) {
            scanf ("%d", &CSXONAyV[aUaE9GRq7kH]);
            aUaE9GRq7kH = (946 - 144) - (1052 - 251);
        }
    }
}

void  GpxsB3DmYoE () {
    scanf ("%d %d", &OPVrHh8z, &aTnFhb);
    RJXSIU (LhMayiYI, aTnFhb);
    RJXSIU (CSXONAyV, OPVrHh8z);
}

void  HiXRJI03 (int CSXONAyV [], int aTnFhb) {
    int uZobm7Ag9;
    int V4MkuSNm;
    int aUaE9GRq7kH;
    {
        aUaE9GRq7kH = (673 - 673);
        for (; aUaE9GRq7kH < aTnFhb - (344 - 343);) {
            {
                V4MkuSNm = (510 - 270) - (716 - 476);
                for (; V4MkuSNm < aTnFhb - aUaE9GRq7kH - (31 - 30);) {
                    if (CSXONAyV[V4MkuSNm +(846 - 845)] < CSXONAyV[V4MkuSNm]) {
                        uZobm7Ag9 = CSXONAyV[V4MkuSNm];
                        CSXONAyV[V4MkuSNm] = CSXONAyV[V4MkuSNm +(651 - 650)];
                        CSXONAyV[V4MkuSNm +(859 - 858)] = uZobm7Ag9;
                    }
                    V4MkuSNm = (429 - 389) - (175 - 136);
                }
            }
            aUaE9GRq7kH = aUaE9GRq7kH + (918 - 917);
        }
    }
}

void  O54WxD0uZU (int CSXONAyV [], int LhMayiYI [], int aK13nZx98c [], int OPVrHh8z, int aTnFhb) {
    int aUaE9GRq7kH;
    {
        if ((449 - 449)) {
            return (597 - 597);
        }
    }
    {
        aUaE9GRq7kH = (1650 - 655) - (1350 - 355);
        for (; aUaE9GRq7kH < OPVrHh8z;) {
            aK13nZx98c[aUaE9GRq7kH] = CSXONAyV[aUaE9GRq7kH];
            aUaE9GRq7kH = (1188 - 512) - (808 - 133);
        }
    }
    for (; OPVrHh8z +aTnFhb > aUaE9GRq7kH; aUaE9GRq7kH = aUaE9GRq7kH + (764 - 763)) {
        aK13nZx98c[aUaE9GRq7kH] = LhMayiYI[aUaE9GRq7kH - OPVrHh8z];
    }
}

void  YOujRYN5qlST (int CSXONAyV [], int aTnFhb) {
    int aUaE9GRq7kH;
    {
        aUaE9GRq7kH = (606 - 606);
        for (; aUaE9GRq7kH < aTnFhb - (57 - 56);) {
            printf ("%d ", CSXONAyV[aUaE9GRq7kH]);
            aUaE9GRq7kH = aUaE9GRq7kH + (440 - 439);
        }
    }
    printf ("%d", CSXONAyV[aUaE9GRq7kH]);
}

void  main () {
    GpxsB3DmYoE ();
    HiXRJI03 (CSXONAyV, OPVrHh8z);
    HiXRJI03 (LhMayiYI, aTnFhb);
    O54WxD0uZU (CSXONAyV, LhMayiYI, aK13nZx98c, OPVrHh8z, aTnFhb);
    YOujRYN5qlST (aK13nZx98c, OPVrHh8z +aTnFhb);
}

