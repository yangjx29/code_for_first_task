void  main () {
    int apJQt4 [(407 - 381)], m5vzSn46NF [26], c [26];
    int G7HzPST1R, HXvGViZNo, i, goAHcUGjm4Za, FLOSnA;
    m5vzSn46NF[(468 - 468)] = (477 - 476);
    scanf ("%d", &G7HzPST1R);
    for (i = (997 - 997); G7HzPST1R > i; i++)
        scanf ("%d", &apJQt4[i]);
    for (i = (973 - 972); G7HzPST1R > i; i++)
        for (goAHcUGjm4Za = (456 - 456); i > goAHcUGjm4Za; goAHcUGjm4Za++) {
            if (apJQt4[goAHcUGjm4Za] >= apJQt4[i])
                c[goAHcUGjm4Za] = m5vzSn46NF[goAHcUGjm4Za] + (95 - 94);
            else
                c[goAHcUGjm4Za] = 1;
            for (HXvGViZNo = goAHcUGjm4Za; HXvGViZNo > 0; HXvGViZNo--) {
                if (c[HXvGViZNo] >= c[HXvGViZNo -1]) {
                    FLOSnA = c[HXvGViZNo -1];
                    c[HXvGViZNo -1] = c[HXvGViZNo];
                    c[HXvGViZNo] = FLOSnA;
                }
            }
            m5vzSn46NF[i] = c[0];
        }
    for (i = G7HzPST1R -1; i > 0; i--)
        if (m5vzSn46NF[i] >= m5vzSn46NF[i - 1]) {
            FLOSnA = m5vzSn46NF[i - 1];
            m5vzSn46NF[i - 1] = m5vzSn46NF[i];
            m5vzSn46NF[i] = FLOSnA;
        }
    printf ("%d", m5vzSn46NF[0]);
}

