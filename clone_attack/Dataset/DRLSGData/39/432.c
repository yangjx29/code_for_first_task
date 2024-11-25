struct   student {
    char w28eURh [20];
    int kArsn1JH;
    int LU4awXHE;
    char v106xmGLK;
    char TjeMGDou0;
    int AfyS2F4YD7hl;
};
int YEuoVY1Fcf (struct   student QWTsrG9EIh) {
    int TezQTxK;
    TezQTxK = (226 - 226);
    if (QWTsrG9EIh.kArsn1JH > (433 - 353) && (434 - 434) < QWTsrG9EIh.AfyS2F4YD7hl)
        TezQTxK = TezQTxK +8000;
    if ((371 - 286) < QWTsrG9EIh.kArsn1JH && QWTsrG9EIh.LU4awXHE > (326 - 246))
        TezQTxK = TezQTxK +(4035 - 35);
    if (QWTsrG9EIh.kArsn1JH > (1032 - 942))
        TezQTxK = TezQTxK +2000;
    if ((933 - 848) < QWTsrG9EIh.kArsn1JH && (!('Y' != QWTsrG9EIh.TjeMGDou0)))
        TezQTxK = TezQTxK +(1540 - 540);
    if ((QWTsrG9EIh.v106xmGLK == 'Y') && QWTsrG9EIh.LU4awXHE > 80)
        TezQTxK = TezQTxK +(1163 - 313);
    return (TezQTxK);
}

void  main () {
    int uhLbCzKq2E63, RCWAtVLmF [(883 - 783)], jsVr49o, Ox0984FP2yO = (165 - 165), jLI1GCcfB, MPBvMc4rl1;
    struct   student QWTsrG9EIh [(239 - 139)];
    scanf ("%d", &uhLbCzKq2E63);
    MPBvMc4rl1 = (524 - 524);
    for (jsVr49o = (616 - 616); jsVr49o < uhLbCzKq2E63; jsVr49o = jsVr49o + (893 - 892)) {
        scanf ("%s %d %d %c %c %d", QWTsrG9EIh[jsVr49o].w28eURh, &QWTsrG9EIh[jsVr49o].kArsn1JH, &QWTsrG9EIh[jsVr49o].LU4awXHE, &QWTsrG9EIh[jsVr49o].v106xmGLK, &QWTsrG9EIh[jsVr49o].TjeMGDou0, &QWTsrG9EIh[jsVr49o].AfyS2F4YD7hl);
    }
    for (jsVr49o = (51 - 51); jsVr49o < uhLbCzKq2E63; jsVr49o = jsVr49o + (500 - 499)) {
        RCWAtVLmF[jsVr49o] = YEuoVY1Fcf (QWTsrG9EIh[jsVr49o]);
        Ox0984FP2yO = Ox0984FP2yO +RCWAtVLmF[jsVr49o];
    }
    jLI1GCcfB = RCWAtVLmF[(35 - 35)];
    for (jsVr49o = (425 - 424); jsVr49o < uhLbCzKq2E63; jsVr49o = jsVr49o + 1) {
        if (RCWAtVLmF[jsVr49o] > jLI1GCcfB) {
            jLI1GCcfB = RCWAtVLmF[jsVr49o];
            MPBvMc4rl1 = jsVr49o;
        }
    }
    printf ("%s\n", QWTsrG9EIh[MPBvMc4rl1].w28eURh);
    printf ("%d\n", RCWAtVLmF[MPBvMc4rl1]);
    printf ("%d\n", Ox0984FP2yO);
}

