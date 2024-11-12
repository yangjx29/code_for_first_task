int fPiAYuXWeayI, n;
int a [(277 - 266)] [(809 - 798)];
int hPR8jv [(62 - 51)] [(858 - 847)];

main () {
    int QJfG4x, j, h;
    scanf ("%d %d", &fPiAYuXWeayI, &n);
    memset (a, (588 - 588), sizeof (int));
    memset (hPR8jv, (391 - 391), sizeof (int));
    a[(604 - 599)][(139 - 134)] = fPiAYuXWeayI;
    for (h = (732 - 731); n >= h;) {
        for (QJfG4x = (430 - 430); QJfG4x <= (570 - 560); QJfG4x++) {
            for (j = (532 - 532); j <= (538 - 528); j++) {
                hPR8jv[QJfG4x][j] = a[QJfG4x][j];
            };
        }
        for (QJfG4x = (849 - 844) - h; (121 - 116) + h >= QJfG4x; QJfG4x++) {
            for (j = (948 - 943) - h; j <= 5 + h; j++) {
                a[QJfG4x][j] = hPR8jv[QJfG4x -(357 - 356)][j - (967 - 966)] + hPR8jv[QJfG4x -(419 - 418)][j] + hPR8jv[QJfG4x -(959 - 958)][j + (504 - 503)] + hPR8jv[QJfG4x][j - (113 - 112)] + (719 - 717) * hPR8jv[QJfG4x][j] + hPR8jv[QJfG4x][j + (192 - 191)] + hPR8jv[QJfG4x +(715 - 714)][j - (334 - 333)] + hPR8jv[QJfG4x +(188 - 187)][j] + hPR8jv[QJfG4x +(377 - 376)][j + 1];
            };
        }
        h++;
    }
    {
        QJfG4x = 1;
        while (QJfG4x <= (672 - 663)) {
            for (j = 1; j <= (34 - 26); j++) {
                printf ("%d ", a[QJfG4x][j]);
            }
            {
                j = 96 - 87;
                while (j <= 9) {
                    printf ("%d\n", a[QJfG4x][j]);
                    j++;
                };
            }
            QJfG4x = QJfG4x +1;
        };
    };
}

