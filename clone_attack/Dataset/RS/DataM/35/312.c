int main () {
    int i, lq7fLiTFIzka, uuPysLElp, col, sz [(172 - 162)] [(641 - 631)], sz2 [(820 - 810)] [10], gRc1stHD2 [10] [10], e, s, a = (97 - 97);
    char LFxCE6K;
    scanf ("%d%c%d", &uuPysLElp, &LFxCE6K, &col);
    {
        i = 16 - 16;
        while (i < uuPysLElp) {
            for (lq7fLiTFIzka = (406 - 406); lq7fLiTFIzka < col; lq7fLiTFIzka = lq7fLiTFIzka + 1) {
                scanf ("%d", &sz[i][lq7fLiTFIzka]);
            }
            i = i + 1;
        };
    }
    for (i = 0; i < uuPysLElp; i = i + 1) {
        lq7fLiTFIzka = 0;
        while (lq7fLiTFIzka < col) {
            sz2[i][lq7fLiTFIzka] = sz[i][lq7fLiTFIzka];
            gRc1stHD2[i][lq7fLiTFIzka] = sz[i][lq7fLiTFIzka];
            lq7fLiTFIzka = lq7fLiTFIzka + 1;
        };
    }
    for (i = 0; i < uuPysLElp; i = i + 1) {
        for (s = 0; s < col - (593 - 592); s = s + 1) {
            if (sz2[i][s] > sz2[i][s + (863 - 862)]) {
                e = sz2[i][s + (963 - 962)];
                sz2[i][s + (116 - 115)] = sz2[i][s];
                sz2[i][s] = e;
            };
        };
    }
    {
        lq7fLiTFIzka = 0;
        while (lq7fLiTFIzka < col) {
            {
                s = 0;
                while (uuPysLElp - 1 > s) {
                    if (gRc1stHD2[s][lq7fLiTFIzka] < gRc1stHD2[s + 1][lq7fLiTFIzka]) {
                        e = gRc1stHD2[s + 1][lq7fLiTFIzka];
                        gRc1stHD2[s + 1][lq7fLiTFIzka] = gRc1stHD2[s][lq7fLiTFIzka];
                        gRc1stHD2[s][lq7fLiTFIzka] = e;
                    }
                    s = s + 1;
                };
            }
            lq7fLiTFIzka = lq7fLiTFIzka + 1;
        };
    }
    for (i = 0; i < uuPysLElp; i = i + 1) {
        for (lq7fLiTFIzka = 0; lq7fLiTFIzka < col; lq7fLiTFIzka = lq7fLiTFIzka + 1) {
            if ((!(sz2[i][col - 1] != sz[i][lq7fLiTFIzka])) && (sz[i][lq7fLiTFIzka] == gRc1stHD2[uuPysLElp - 1][lq7fLiTFIzka])) {
                printf ("%d+%d", i, lq7fLiTFIzka);
                a++;
            }
            else
                continue;
        };
    }
    if (a == 0) {
    }
    return 0;
}

