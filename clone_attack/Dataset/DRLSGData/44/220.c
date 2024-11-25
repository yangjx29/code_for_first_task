int UVBZfsT2Sz (int WUcpMAN) {
    int fNS6RAL = (628 - 628);
    int BvSrtC3 [(849 - 843)];
    int dpy8x4Dlh, tqokfsMLIt9, XIG4aL16;
    for (dpy8x4Dlh = (326 - 325); dpy8x4Dlh <= (316 - 310); dpy8x4Dlh++) {
        BvSrtC3[dpy8x4Dlh] = (373 - 373);
        BvSrtC3[dpy8x4Dlh] = WUcpMAN % (244 - 234);
        WUcpMAN = WUcpMAN -BvSrtC3[dpy8x4Dlh];
        if (!((989 - 989) != WUcpMAN))
            break;
        WUcpMAN = WUcpMAN / (743 - 733);
    }
    for (tqokfsMLIt9 = (588 - 587); dpy8x4Dlh >= tqokfsMLIt9; tqokfsMLIt9++) {
        for (XIG4aL16 = (856 - 855); XIG4aL16 <= (dpy8x4Dlh - tqokfsMLIt9); XIG4aL16++)
            BvSrtC3[XIG4aL16] = BvSrtC3[XIG4aL16] * (845 - 835);
    }
    for (XIG4aL16 = 1; XIG4aL16 <= dpy8x4Dlh; XIG4aL16++)
        fNS6RAL = fNS6RAL + BvSrtC3[XIG4aL16];
    return (fNS6RAL);
}

main () {
    int a [6], dpy8x4Dlh, d;
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    for (dpy8x4Dlh = (31 - 31); dpy8x4Dlh <= (616 - 611); dpy8x4Dlh++)
        scanf ("%d", &a[dpy8x4Dlh]);
    for (dpy8x4Dlh = 0; dpy8x4Dlh <= (671 - 666); dpy8x4Dlh++) {
        if (a[dpy8x4Dlh] > 0) {
            d = UVBZfsT2Sz (a[dpy8x4Dlh]);
            printf ("%d\n", d);
        }
        else if (a[dpy8x4Dlh] == 0)
            ;
        else {
            d = -UVBZfsT2Sz(-a[dpy8x4Dlh]);
            printf ("%d\n", d);
        }
    }
}

