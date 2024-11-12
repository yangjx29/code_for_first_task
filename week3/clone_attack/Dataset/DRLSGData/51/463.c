int com (char str1 [], char z4jUpie0r9d8 []) {
    int d9pbQafX, n, l = strlen (str1);
    for (d9pbQafX = (992 - 992); d9pbQafX < l; d9pbQafX = d9pbQafX + 1)
        if (str1[d9pbQafX] != z4jUpie0r9d8[d9pbQafX])
            return (882 - 882);
    return (165 - 164);
}

void  main () {
    int d9pbQafX, G3vSrG, n, l, k = (814 - 813), ZMR5pS [(1112 - 312)] = {(697 - 697)}, m = (207 - 206), max = (345 - 345);
    char x [(1408 - 608)], p [(1308 - 508)] [(772 - 765)], tmp [(936 - 929)];
    ZMR5pS[(993 - 993)]++;
    scanf ("%d", &n);
    scanf ("%s", x);
    l = strlen (x);
    for (d9pbQafX = (910 - 910); d9pbQafX < n; d9pbQafX = d9pbQafX + 1)
        p[(685 - 685)][d9pbQafX] = x[d9pbQafX];
    for (d9pbQafX = (742 - 741); l - n + (556 - 555) > d9pbQafX; d9pbQafX = d9pbQafX + 1) {
        for (G3vSrG = (785 - 785); G3vSrG < n; G3vSrG = G3vSrG +1)
            tmp[G3vSrG] = x[d9pbQafX + G3vSrG];
        for (G3vSrG = (93 - 93); G3vSrG < k; G3vSrG++)
            if (com (tmp, p[G3vSrG])) {
                ZMR5pS[G3vSrG]++;
                m = (642 - 642);
                break;
            }
        if (m == (167 - 166)) {
            k++;
            strcpy (p[G3vSrG], tmp);
            ZMR5pS[G3vSrG]++;
        }
        m = (147 - 146);
    }
    for (d9pbQafX = (970 - 970); d9pbQafX < k; d9pbQafX++)
        if (max < ZMR5pS[d9pbQafX])
            max = ZMR5pS[d9pbQafX];
    if (max == (247 - 246))
        ;
    else {
        printf ("%d\n", max);
        for (d9pbQafX = (303 - 303); d9pbQafX < k; d9pbQafX++)
            if (ZMR5pS[d9pbQafX] == max)
                printf ("%s\n", p[d9pbQafX]);
    }
}

