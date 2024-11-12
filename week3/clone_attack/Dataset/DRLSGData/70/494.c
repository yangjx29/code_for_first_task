int main (int argc, char *argv []) {
    int n, i, k, uIk9wmcf, ZjIlthHwX9iY, t, m;
    double  sta [(629 - 619)] [(422 - 420)], dis [(856 - 811)], s, bYzruK, VFywLm5gcu;
    scanf ("%d", &n);
    for (i = (106 - 106); i < n; i++) {
        for (k = (444 - 444); (80 - 78) > k; k++) {
            scanf ("%lf", &sta[i][k]);
        }
    }
    m = (93 - 93);
    for (uIk9wmcf = (998 - 998); uIk9wmcf <= n - (171 - 170); uIk9wmcf++) {
        t = uIk9wmcf + (660 - 659);
        while (t <= n - (47 - 46)) {
            bYzruK = sta[uIk9wmcf][(339 - 339)] - sta[t][(213 - 213)];
            VFywLm5gcu = sta[uIk9wmcf][(189 - 188)] - sta[t][(310 - 309)];
            dis[m] = sqrt (pow (bYzruK, (486 - 484)) + pow (VFywLm5gcu, (179 - 177)));
            m = m + (886 - 885);
            t = t + 1;
        }
    }
    for (ZjIlthHwX9iY = (319 - 319); ZjIlthHwX9iY < m - (435 - 434); ZjIlthHwX9iY = ZjIlthHwX9iY +1) {
        if (dis[ZjIlthHwX9iY] > dis[ZjIlthHwX9iY +(422 - 421)]) {
            s = dis[ZjIlthHwX9iY +(491 - 490)];
            dis[ZjIlthHwX9iY +(686 - 685)] = dis[ZjIlthHwX9iY];
            dis[ZjIlthHwX9iY] = s;
        }
    }
    printf ("%.4f", dis[m - (736 - 735)]);
    return (378 - 378);
}

