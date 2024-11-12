void  main () {
    int WxCdEqN5jbH;
    int YYnvux1r7;
    int t46gMR;
    int XD29x6eBc;
    int olHmpJZw;
    int gfBxJ3;
    scanf ("%d", &XD29x6eBc);
    scanf ("%d", &t46gMR);
    gfBxJ3 = YYnvux1r7 = WxCdEqN5jbH = t46gMR;
    {
        olHmpJZw = 895 - 894;
        while (XD29x6eBc > olHmpJZw) {
            olHmpJZw++;
            scanf ("%d", &t46gMR);
            if (WxCdEqN5jbH > t46gMR)
                WxCdEqN5jbH = t46gMR;
            if (YYnvux1r7 < t46gMR)
                YYnvux1r7 = t46gMR;
            gfBxJ3 = gfBxJ3 + t46gMR;
        };
    }
    if ((gfBxJ3 - XD29x6eBc *WxCdEqN5jbH) < (XD29x6eBc *YYnvux1r7-gfBxJ3))
        printf ("%d", YYnvux1r7);
    if ((XD29x6eBc *YYnvux1r7-gfBxJ3) < (gfBxJ3 - XD29x6eBc *WxCdEqN5jbH))
        printf ("%d", WxCdEqN5jbH);
    if ((XD29x6eBc *YYnvux1r7-gfBxJ3) == (gfBxJ3 - XD29x6eBc *WxCdEqN5jbH))
        printf ("%d,%d", WxCdEqN5jbH, YYnvux1r7);
}

