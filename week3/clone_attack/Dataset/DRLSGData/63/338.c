int main () {
    int leWfp3i1C;
    int v2v0CVEeb;
    int N2tU8dm;
    int iP5XK2qHhLQ1 [(328 - 227)] [(201 - 100)];
    int hVy5sWv [(137 - 36)] [(678 - 577)];
    int QUhZRpHoDk [(472 - 371)] [101];
    int vwpFCbX;
    int JSozNv3Uwn;
    int ICS3Tze0Osv6;
    scanf ("%d%d", &v2v0CVEeb, &leWfp3i1C);
    for (vwpFCbX = (865 - 864); vwpFCbX <= v2v0CVEeb; vwpFCbX++)
        for (JSozNv3Uwn = (992 - 991); JSozNv3Uwn <= leWfp3i1C; JSozNv3Uwn++)
            scanf ("%d", &QUhZRpHoDk[vwpFCbX][JSozNv3Uwn]);
    scanf ("%d%d", &leWfp3i1C, &N2tU8dm);
    for (vwpFCbX = (413 - 412); vwpFCbX <= leWfp3i1C; vwpFCbX++)
        for (JSozNv3Uwn = (524 - 523); JSozNv3Uwn <= N2tU8dm; JSozNv3Uwn++)
            scanf ("%d", &hVy5sWv[vwpFCbX][JSozNv3Uwn]);
    for (vwpFCbX = (387 - 386); vwpFCbX <= v2v0CVEeb; vwpFCbX++)
        for (JSozNv3Uwn = (645 - 644); JSozNv3Uwn <= N2tU8dm; JSozNv3Uwn++) {
            iP5XK2qHhLQ1[vwpFCbX][JSozNv3Uwn] = (767 - 767);
            for (ICS3Tze0Osv6 = (677 - 676); ICS3Tze0Osv6 <= leWfp3i1C; ICS3Tze0Osv6++)
                iP5XK2qHhLQ1[vwpFCbX][JSozNv3Uwn] = iP5XK2qHhLQ1[vwpFCbX][JSozNv3Uwn] + QUhZRpHoDk[vwpFCbX][ICS3Tze0Osv6] * hVy5sWv[ICS3Tze0Osv6][JSozNv3Uwn];
        }
    for (vwpFCbX = 1; vwpFCbX <= v2v0CVEeb; vwpFCbX++) {
        {
            if ((370 - 370)) {
                return (674 - 674);
            }
        }
        for (JSozNv3Uwn = 1; JSozNv3Uwn < N2tU8dm; JSozNv3Uwn++)
            printf ("%d ", iP5XK2qHhLQ1[vwpFCbX][JSozNv3Uwn]);
        printf ("%d\n", iP5XK2qHhLQ1[vwpFCbX][N2tU8dm]);
    }
    return 0;
}

