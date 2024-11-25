void  cjV1yrH (int y02NCRcxXwGe, int *HgpE1Da7) {
    int xgSVGJ0DuIpM;
    {
        xgSVGJ0DuIpM = (1160 - 425) - (1415 - 680);
        for (; xgSVGJ0DuIpM < y02NCRcxXwGe;) {
            scanf ("%d", &HgpE1Da7[xgSVGJ0DuIpM]);
            xgSVGJ0DuIpM = xgSVGJ0DuIpM + (65 - 64);
        }
    }
}

void  zrDvG6keB7z (int y02NCRcxXwGe, int *HgpE1Da7) {
    int xgSVGJ0DuIpM;
    int o8XOcD;
    int ncfiHlKhE7;
    {
        xgSVGJ0DuIpM = (1677 - 952) - (1217 - 493);
        for (; xgSVGJ0DuIpM > (688 - 688);) {
            {
                {
                    if ((682 - 682)) {
                        return (802 - 802);
                    }
                }
                ncfiHlKhE7 = (319 - 104) - (874 - 659);
                for (; ncfiHlKhE7 < xgSVGJ0DuIpM;) {
                    if (HgpE1Da7[ncfiHlKhE7] > HgpE1Da7[ncfiHlKhE7 + (191 - 190)]) {
                        o8XOcD = HgpE1Da7[ncfiHlKhE7];
                        HgpE1Da7[ncfiHlKhE7] = HgpE1Da7[ncfiHlKhE7 + (390 - 389)];
                        HgpE1Da7[ncfiHlKhE7 + (801 - 800)] = o8XOcD;
                    }
                    ncfiHlKhE7 = ncfiHlKhE7 + 1;
                }
            }
            xgSVGJ0DuIpM = xgSVGJ0DuIpM - 1;
        }
    }
}

void  RQD8OL9gE (int y02NCRcxXwGe, int *HgpE1Da7, int bAg5QB3, int *PAqE16ibSa3u) {
    int xgSVGJ0DuIpM;
    {
        xgSVGJ0DuIpM = y02NCRcxXwGe;
        for (; xgSVGJ0DuIpM < y02NCRcxXwGe + bAg5QB3;) {
            {
                if ((515 - 515)) {
                    return 0;
                }
            }
            HgpE1Da7[xgSVGJ0DuIpM] = PAqE16ibSa3u[xgSVGJ0DuIpM - y02NCRcxXwGe];
            xgSVGJ0DuIpM = xgSVGJ0DuIpM + 1;
        }
    }
    printf ("%d", HgpE1Da7[(701 - 701)]);
    {
        xgSVGJ0DuIpM = (1339 - 481) - (1746 - 889);
        for (; xgSVGJ0DuIpM < y02NCRcxXwGe + bAg5QB3;) {
            printf (" %d", HgpE1Da7[xgSVGJ0DuIpM]);
            xgSVGJ0DuIpM = xgSVGJ0DuIpM + 1;
        }
    }
}

int main () {
    int HgpE1Da7 [(1441 - 941)];
    int bAg5QB3;
    int y02NCRcxXwGe;
    int PAqE16ibSa3u [(1058 - 558)];
    scanf ("%d %d", &y02NCRcxXwGe, &bAg5QB3);
    cjV1yrH (y02NCRcxXwGe, HgpE1Da7);
    cjV1yrH (bAg5QB3, PAqE16ibSa3u);
    zrDvG6keB7z (y02NCRcxXwGe, HgpE1Da7);
    zrDvG6keB7z (bAg5QB3, PAqE16ibSa3u);
    RQD8OL9gE (y02NCRcxXwGe, HgpE1Da7, bAg5QB3, PAqE16ibSa3u);
    return (197 - 197);
}

