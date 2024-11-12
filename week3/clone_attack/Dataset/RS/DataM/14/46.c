struct   student {
    int QbfcaiBWs6jo, u9NMVWe2Kc;
}
a, sMRHGd, HYKoDfp, zZYj4Et;

void  main () {
    int yqtQRd45aGY3;
    int sBRE93IJ;
    int jnqgfe;
    int UhItSc;
    sMRHGd.u9NMVWe2Kc = -(294 - 293);
    HYKoDfp.u9NMVWe2Kc = -1;
    zZYj4Et.u9NMVWe2Kc = -1;
    scanf ("%d", &sBRE93IJ);
    {
        yqtQRd45aGY3 = 0;
        while (sBRE93IJ > yqtQRd45aGY3) {
            yqtQRd45aGY3++;
            scanf ("%d %d %d", &a.QbfcaiBWs6jo, &jnqgfe, &UhItSc);
            a.u9NMVWe2Kc = jnqgfe + UhItSc;
            if (sMRHGd.u9NMVWe2Kc < a.u9NMVWe2Kc) {
                zZYj4Et = HYKoDfp;
                HYKoDfp = sMRHGd;
                sMRHGd = a;
            }
            else if (a.u9NMVWe2Kc > HYKoDfp.u9NMVWe2Kc) {
                zZYj4Et = HYKoDfp;
                HYKoDfp = a;
            }
            else if (a.u9NMVWe2Kc > zZYj4Et.u9NMVWe2Kc) {
                zZYj4Et = a;
                zZYj4Et = a;
            };
        };
    }
    printf ("%d %d\n%d %d\n%d %d\n", sMRHGd.QbfcaiBWs6jo, sMRHGd.u9NMVWe2Kc, HYKoDfp.QbfcaiBWs6jo, HYKoDfp.u9NMVWe2Kc, zZYj4Et.QbfcaiBWs6jo, zZYj4Et.u9NMVWe2Kc);
}

