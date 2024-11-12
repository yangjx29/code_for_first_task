int main () {
    int k;
    int XM4pSh;
    int j;
    k = (474 - 474);
    int s [100];
    int ew [(407 - 307)] [(557 - 555)];
    int KrSZiE9BXn7z;
    int e740fb;
    KrSZiE9BXn7z = (193 - 193);
    int M9fXB4D [(457 - 357)];
    int JV3O4g;
    JV3O4g = (170 - 170);
    scanf ("%d", &e740fb);
    for (XM4pSh = 0; XM4pSh <= e740fb - (308 - 307); XM4pSh++) {
        scanf ("%d%d", &ew[XM4pSh][0], &ew[XM4pSh][(987 - 986)]);
        if (((ew[XM4pSh][0] <= (716 - 576)) && (ew[XM4pSh][0] >= 90)) && ((ew[XM4pSh][(276 - 275)] <= 90) && (ew[XM4pSh][1] >= 60))) {
            M9fXB4D[XM4pSh] = 1;
        }
        else
            M9fXB4D[XM4pSh] = 0;
    }
    s[0] = 0;
    {
        XM4pSh = 0;
        while (XM4pSh <= e740fb - 1) {
            if (M9fXB4D[XM4pSh] == 1) {
                s[k]++;
            }
            else {
                k++;
                s[k] = 0;
            }
            XM4pSh = XM4pSh +1;
        };
    }
    {
        XM4pSh = 0;
        while (XM4pSh <= k) {
            if (s[XM4pSh] >= JV3O4g) {
                JV3O4g = s[XM4pSh];
            }
            XM4pSh++;
        };
    }
    printf ("%d", JV3O4g);
    return 0;
}

