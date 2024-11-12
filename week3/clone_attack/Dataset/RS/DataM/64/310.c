int main () {
    int y4sYJAp1wSDE [60] [(579 - 577)];
    double  eWwOE8m7;
    int icaF568xpdL;
    int i;
    int j;
    int sJsWoNfL9p;
    int rJjz0KEBkx;
    int uyH0TsGBgC;
    int zb [(1005 - 995)] [3];
    double  d [(845 - 785)];
    sJsWoNfL9p = (721 - 721);
    scanf ("%d", &icaF568xpdL);
    for (i = (991 - 991); i < icaF568xpdL; i = i + 1) {
        for (j = (844 - 844); j < 3; j++) {
            scanf ("%d", &zb[i][j]);
        };
    }
    {
        i = 577 - 577;
        while (i < icaF568xpdL) {
            {
                j = 789 - 788;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (j < icaF568xpdL) {
                    d[sJsWoNfL9p] = sqrt (1.0 * ((zb[i][(495 - 495)] - zb[j][(502 - 502)]) * (zb[i][(484 - 484)] - zb[j][(239 - 239)]) + (zb[i][(449 - 448)] - zb[j][(840 - 839)]) * (zb[i][(785 - 784)] - zb[j][(461 - 460)]) + (zb[i][(484 - 482)] - zb[j][2]) * (zb[i][2] - zb[j][2])));
                    y4sYJAp1wSDE[sJsWoNfL9p][(581 - 581)] = i;
                    y4sYJAp1wSDE[sJsWoNfL9p][(220 - 219)] = j;
                    j = j + 1;
                    sJsWoNfL9p = sJsWoNfL9p + 1;
                };
            }
            i++;
        };
    }
    {
        j = 333 - 333;
        while (j < sJsWoNfL9p - (782 - 781)) {
            {
                i = 590 - 590;
                while (i < sJsWoNfL9p - j - (755 - 754)) {
                    if (d[i] < d[i + (681 - 680)]) {
                        eWwOE8m7 = d[i];
                        d[i] = d[i + (835 - 834)];
                        d[i + (898 - 897)] = eWwOE8m7;
                        rJjz0KEBkx = y4sYJAp1wSDE[i][(191 - 191)];
                        y4sYJAp1wSDE[i][(213 - 213)] = y4sYJAp1wSDE[i + (345 - 344)][(775 - 775)];
                        y4sYJAp1wSDE[i + (14 - 13)][0] = rJjz0KEBkx;
                        uyH0TsGBgC = y4sYJAp1wSDE[i][1];
                        y4sYJAp1wSDE[i][1] = y4sYJAp1wSDE[i + 1][1];
                        y4sYJAp1wSDE[i + 1][1] = uyH0TsGBgC;
                    }
                    i++;
                };
            }
            j = j + 1;
        };
    }
    {
        i = 0;
        while (i < sJsWoNfL9p) {
            printf ("(%d,%d,%d)", zb[y4sYJAp1wSDE[i][0]][0], zb[y4sYJAp1wSDE[i][0]][1], zb[y4sYJAp1wSDE[i][0]][2]);
            printf ("(%d,%d,%d)", zb[y4sYJAp1wSDE[i][1]][0], zb[y4sYJAp1wSDE[i][1]][1], zb[y4sYJAp1wSDE[i][1]][2]);
            printf ("=%.2f", d[i]);
            i++;
            printf ("-");
        };
    }
    return 0;
}

