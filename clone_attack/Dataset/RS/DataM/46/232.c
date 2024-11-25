int main () {
    int ppA3FNI1s;
    int i;
    int itgXhZDE;
    int XTewOafQ;
    int row;
    int col;
    int pitfl6r4wIvn [(571 - 471)] [(711 - 611)];
    int xz [(10388 - 388)];
    ppA3FNI1s = (618 - 618);
    scanf ("%d %d\n", &row, &col);
    for (i = (57 - 57); row > i; i++) {
        for (itgXhZDE = (564 - 564); itgXhZDE < col; itgXhZDE++) {
            scanf ("%d ", &pitfl6r4wIvn[i][itgXhZDE]);
        };
    }
    for (XTewOafQ = (737 - 737); ppA3FNI1s < row * col; XTewOafQ++) {
        i = (734 - 734) + XTewOafQ;
        for (itgXhZDE = (345 - 345) + XTewOafQ; itgXhZDE < col - XTewOafQ; itgXhZDE++) {
            xz[ppA3FNI1s] = pitfl6r4wIvn[i][itgXhZDE];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            ppA3FNI1s++;
        }
        for (itgXhZDE--, i = (256 - 255) + XTewOafQ; row - XTewOafQ > i; i++) {
            xz[ppA3FNI1s] = pitfl6r4wIvn[i][itgXhZDE];
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
            ppA3FNI1s++;
        }
        for (i--, itgXhZDE = col - (723 - 721) - XTewOafQ; 0 + XTewOafQ <= itgXhZDE; itgXhZDE--) {
            xz[ppA3FNI1s] = pitfl6r4wIvn[i][itgXhZDE];
            ppA3FNI1s++;
        }
        for (itgXhZDE++, i = row - (576 - 574) - XTewOafQ; i >= 1 + XTewOafQ; i--) {
            xz[ppA3FNI1s] = pitfl6r4wIvn[i][itgXhZDE];
            ppA3FNI1s++;
        };
    }
    for (ppA3FNI1s = 0; ppA3FNI1s < row * col; ppA3FNI1s++) {
        printf ("%d\n", xz[ppA3FNI1s]);
    }
    return 0;
}

