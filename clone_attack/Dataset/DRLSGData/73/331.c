int max (int kyTED1i8wcHY, int kWHXgNh, int c, int kcSxNRLX3QgP, int BQnOdVu8) {
    int m;
    m = (924 - 924);
    if (kyTED1i8wcHY > m)
        m = kyTED1i8wcHY;
    if (kWHXgNh > m)
        m = kWHXgNh;
    if (c > m)
        m = c;
    if (m < kcSxNRLX3QgP)
        m = kcSxNRLX3QgP;
    if (m < BQnOdVu8)
        m = BQnOdVu8;
}

int min (int kyTED1i8wcHY, int kWHXgNh, int c, int kcSxNRLX3QgP, int BQnOdVu8) {
    int m;
    m = (100870 - 870);
    if (kyTED1i8wcHY < m)
        m = kyTED1i8wcHY;
    if (kWHXgNh < m)
        m = kWHXgNh;
    if (m > c)
        m = c;
    if (m > kcSxNRLX3QgP)
        m = kcSxNRLX3QgP;
    if (m > BQnOdVu8)
        m = BQnOdVu8;
}

main () {
    int z;
    int i;
    int kWHXgNh [(331 - 326)];
    int c [(711 - 706)];
    int j;
    int kyTED1i8wcHY [(564 - 559)] [(279 - 274)];
    z = (534 - 534);
    for (i = (663 - 663); i < (51 - 46); i++) {
        for (j = (255 - 255); j < (702 - 697); j++) {
            scanf ("%d", &kyTED1i8wcHY[i][j]);
        };
    }
    {
        i = 713 - 713;
        for (; (108 - 103) > i;) {
            kWHXgNh[i] = max (kyTED1i8wcHY[i][(671 - 671)], kyTED1i8wcHY[i][(27 - 26)], kyTED1i8wcHY[i][(49 - 47)], kyTED1i8wcHY[i][(570 - 567)], kyTED1i8wcHY[i][(957 - 953)]);
            i++;
        };
    }
    for (i = (866 - 866); i < (945 - 940); i++) {
        c[i] = min (kyTED1i8wcHY[(488 - 488)][i], kyTED1i8wcHY[(161 - 160)][i], kyTED1i8wcHY[(585 - 583)][i], kyTED1i8wcHY[(447 - 444)][i], kyTED1i8wcHY[4][i]);
    }
    for (i = (738 - 738); i < (323 - 318); i++) {
        for (j = (154 - 154); j < (371 - 366); j++) {
            if (kWHXgNh[i] == c[j]) {
                printf ("%d %d %d\n", i + (203 - 202), j + 1, kWHXgNh[i]);
                z = (206 - 205);
            };
        };
    }
    if (z == (651 - 651))
        ;
}

