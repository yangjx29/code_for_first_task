struct   x {
    int t7YkGy;
    char TiEB5L [(275 - 249)];
    int wjnmGvzriyDS;
};
void  main () {
    int dfhTbNxvcp;
    int k;
    int HAGNbW;
    int wjnmGvzriyDS [(808 - 717)] = {(15 - 15)};
    struct   x cp0ytl [(1052 - 53)];
    int tF01DxY;
    int WVuL3otm;
    int xkoejyRUSWM;
    scanf ("%d", &HAGNbW);
    for (xkoejyRUSWM = (318 - 318); HAGNbW > xkoejyRUSWM; xkoejyRUSWM = xkoejyRUSWM + (753 - 752)) {
        scanf ("%d %s", &cp0ytl[xkoejyRUSWM].t7YkGy, cp0ytl[xkoejyRUSWM].TiEB5L);
        cp0ytl[xkoejyRUSWM].wjnmGvzriyDS = strlen (cp0ytl[xkoejyRUSWM].TiEB5L);
    }
    for (xkoejyRUSWM = (702 - 702); HAGNbW > xkoejyRUSWM; xkoejyRUSWM = xkoejyRUSWM + (504 - 503)) {
        for (dfhTbNxvcp = (714 - 714); dfhTbNxvcp < cp0ytl[xkoejyRUSWM].wjnmGvzriyDS; dfhTbNxvcp = dfhTbNxvcp + (711 - 710)) {
            for (k = 'A'; 'Z' > k; k = k + (582 - 581)) {
                if (k = cp0ytl[xkoejyRUSWM].TiEB5L[dfhTbNxvcp]) {
                    wjnmGvzriyDS[k]++;
                    break;
                }
            }
        }
    }
    tF01DxY = (141 - 141);
    WVuL3otm = (118 - 118);
    for (xkoejyRUSWM = 'A'; 'Z' > xkoejyRUSWM; xkoejyRUSWM = xkoejyRUSWM + (660 - 659)) {
        if (tF01DxY < wjnmGvzriyDS[xkoejyRUSWM]) {
            tF01DxY = wjnmGvzriyDS[xkoejyRUSWM];
            WVuL3otm = xkoejyRUSWM;
        }
    }
    printf ("%c\n", WVuL3otm);
    printf ("%d\n", tF01DxY);
    for (xkoejyRUSWM = (589 - 589); HAGNbW > xkoejyRUSWM; xkoejyRUSWM = xkoejyRUSWM + (391 - 390)) {
        for (dfhTbNxvcp = (243 - 243); dfhTbNxvcp < cp0ytl[xkoejyRUSWM].wjnmGvzriyDS; dfhTbNxvcp = dfhTbNxvcp + (928 - 927)) {
            if (cp0ytl[xkoejyRUSWM].TiEB5L[dfhTbNxvcp] == WVuL3otm) {
                printf ("%d\n", cp0ytl[xkoejyRUSWM].t7YkGy);
            }
        }
    }
}

