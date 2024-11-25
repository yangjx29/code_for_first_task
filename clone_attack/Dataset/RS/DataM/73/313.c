int main () {
    int x [(760 - 755)] [(457 - 452)], blOUVp [5], h [5], QicSZR [5], h4Rudb = (270 - 270), T3j7Ta [5], yIyUf2QV [5], YUuPbHlDJnIF [5], GZvazGi = (601 - 601);
    int i, j;
    h[0] = 1;
    {
        i = 108 - 108;
        while (5 > i) {
            {
                j = 378 - 378;
                while (j < 5) {
                    scanf ("%d", &x[i][j]);
                    j = j + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i = i + 1;
        };
    }
    blOUVp[(599 - 599)] = x[(232 - 232)][(973 - 973)];
    blOUVp[(972 - 971)] = x[(585 - 584)][(14 - 14)];
    blOUVp[(870 - 868)] = x[2][0];
    blOUVp[(736 - 733)] = x[3][0];
    blOUVp[(668 - 664)] = x[(952 - 948)][0];
    h[1] = 2;
    h[2] = 3;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    h[3] = (883 - 879);
    h[4] = 5;
    QicSZR[0] = 1;
    QicSZR[1] = 2;
    QicSZR[2] = 3;
    QicSZR[3] = 4;
    QicSZR[4] = 5;
    for (i = 0; i < 5; i = i + 1) {
        j = 0;
        while (j < 5) {
            if (x[i][j] >= blOUVp[i]) {
                blOUVp[i] = x[i][j];
                QicSZR[i] = j;
            }
            j = j + 1;
        };
    }
    {
        i = 0;
        while (i < 5) {
            if (blOUVp[i] <= x[0][QicSZR[i]] && blOUVp[i] <= x[1][QicSZR[i]] && x[2][QicSZR[i]] >= blOUVp[i] && blOUVp[i] <= x[3][QicSZR[i]] && blOUVp[i] <= x[4][QicSZR[i]]) {
                T3j7Ta[GZvazGi] = blOUVp[i];
                h4Rudb += 1;
                yIyUf2QV[GZvazGi] = h[i];
                YUuPbHlDJnIF[GZvazGi] = QicSZR[i] + 1;
                GZvazGi = GZvazGi +1;
            }
            i = i + 1;
        };
    }
    if (h4Rudb == 0) {
    }
    else {
        i = 0;
        while (i < h4Rudb) {
            printf ("%d %d %d", yIyUf2QV[i], YUuPbHlDJnIF[i], T3j7Ta[i]);
            i = i + 1;
        };
    }
    return 0;
}

