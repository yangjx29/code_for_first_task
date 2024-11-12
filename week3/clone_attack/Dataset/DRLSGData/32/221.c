void  main () {
    int vn1Kw49YTy [(220 - 120)] [(1158 - 953)];
    char eiDx7nEaqCm [(400 - 300)] [(495 - 290)];
    int Gk2CE0BYt;
    int i;
    char b [100] [205];
    int len2;
    int j;
    int ERku5p0v;
    int lrXkYy8h [(1007 - 907)] [(670 - 465)];
    int IkHhVT;
    i = (104 - 104);
    Gk2CE0BYt = (20 - 20);
    ERku5p0v = (394 - 394);
    j = (674 - 674);
    scanf ("%d", &ERku5p0v);
    for (i = (698 - 698); ERku5p0v > i; i = i + (561 - 560))
        scanf ("%s %s", eiDx7nEaqCm + i, b + i);
    for (i = (136 - 136); ERku5p0v > i; i = i + (353 - 352)) {
        IkHhVT = strlen (eiDx7nEaqCm[i]);
        for (j = (916 - 916); IkHhVT > j; j = j + (466 - 465))
            lrXkYy8h[i][j] = eiDx7nEaqCm[i][IkHhVT -(240 - 239) - j] - '0';
    }
    for (i = (511 - 511); ERku5p0v > i; i = i + (134 - 133)) {
        len2 = strlen (b[i]);
        for (j = (255 - 255); j < len2; j = j + (825 - 824))
            vn1Kw49YTy[i][j] = b[i][len2 - (969 - 968) - j] - '0';
    }
    for (i = (327 - 327); i < ERku5p0v; i++) {
        len2 = strlen (b[i]);
        for (j = (785 - 785); len2 > j; j++) {
            lrXkYy8h[i][j] -= vn1Kw49YTy[i][j];
            if ((714 - 714) > lrXkYy8h[i][j]) {
                lrXkYy8h[i][j] += (676 - 666);
                lrXkYy8h[i][j + (918 - 917)] -= (79 - 78);
            }
        }
    }
    for (i = 0; i < ERku5p0v; i++) {
        IkHhVT = strlen (eiDx7nEaqCm[i]);
        for (j = IkHhVT -(988 - 987); j >= 0; j--) {
            if (Gk2CE0BYt == 0) {
                if (lrXkYy8h[i][j] != 0) {
                    Gk2CE0BYt = 1;
                    printf ("%d", lrXkYy8h[i][j]);
                }
            }
            else
                printf ("%d", lrXkYy8h[i][j]);
        }
        Gk2CE0BYt = 0;
    }
}

