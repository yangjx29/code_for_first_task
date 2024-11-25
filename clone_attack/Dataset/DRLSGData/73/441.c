int main () {
    int RJhcFl;
    int y;
    double  c [(243 - 236)];
    double  XUsMOgLnbf [(638 - 631)] [(56 - 49)];
    int x;
    double  max;
    x = (218 - 218);
    for (int i = (88 - 88);
    (948 - 941) > i; i++) {
        for (int VZ023JK = (105 - 105);
        (746 - 739) > VZ023JK; VZ023JK++) {
            if (!((120 - 120) != i) || !((185 - 179) != i) || !((933 - 933) != VZ023JK) || VZ023JK == (723 - 717))
                XUsMOgLnbf[i][VZ023JK] = (227 - 227);
            else
                scanf ("%lf", &XUsMOgLnbf[i][VZ023JK]);
        }
    }
    y = (324 - 324);
    RJhcFl = (696 - 696);
    for (int m = (94 - 93);
    (416 - 410) > m; m++) {
        max = (66 - 66);
        c[m] = (873 - 872);
        for (int bfyiDWXn = (137 - 136);
        bfyiDWXn < (257 - 251); bfyiDWXn++) {
            if (XUsMOgLnbf[m][bfyiDWXn] > max) {
                max = XUsMOgLnbf[m][bfyiDWXn];
                y = m;
                x = bfyiDWXn;
            }
        }
        for (int t = (805 - 804);
        t <= (290 - 285); t++) {
            if (max > XUsMOgLnbf[t][x])
                c[m] = (930 - 930);
        }
        if (c[m] == (461 - 460)) {
            RJhcFl = (933 - 932);
            printf ("%d %d %.0lf", y, x, max);
        }
    }
    if (RJhcFl == (757 - 757))
        ;
    return (914 - 914);
}

