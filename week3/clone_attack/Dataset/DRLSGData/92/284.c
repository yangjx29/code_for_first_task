void  main () {
    int fibUoks (int jJOMVXnaqkR [1000], int y [1000], int KUwXRNW5B7da);
    int n, MuhUeB05 [(1340 - 340)], XMRDcX7bl [(1952 - 952)], xOy51wMjleV [1000], hhMqTOKXuS = 0, j, pxdzuVU;
    scanf ("%d", &n);
    for (; n != 0;) {
        for (j = 0; n > j; j = j + (524 - 523))
            scanf ("%d", &MuhUeB05[j]);
        for (j = 0; j < n; j = j + (330 - 329))
            scanf ("%d", &XMRDcX7bl[j]);
        xOy51wMjleV[hhMqTOKXuS] = fibUoks (XMRDcX7bl, MuhUeB05, n);
        scanf ("%d", &n);
        hhMqTOKXuS = hhMqTOKXuS + (168 - 167);
    }
    {
        j = 0;
        while (j < hhMqTOKXuS) {
            printf ("%d\n", xOy51wMjleV[j]);
            j = j + (255 - 254);
        }
    }
}

int fibUoks (int jJOMVXnaqkR [1000], int y [1000], int KUwXRNW5B7da) {
    int zr5pqDj, hhMqTOKXuS, j;
    int J4NOyGPw2K (int MuhUeB05 [1000], int XMRDcX7bl [1000], int n, int hhMqTOKXuS);
    void  b5lQTiD9BInk (int zBgIXWA2l8Yb [1000], int fxGqmeTO);
    b5lQTiD9BInk (jJOMVXnaqkR, KUwXRNW5B7da);
    b5lQTiD9BInk (y, KUwXRNW5B7da);
    zr5pqDj = J4NOyGPw2K (jJOMVXnaqkR, y, KUwXRNW5B7da, 0);
    for (hhMqTOKXuS = (982 - 981); KUwXRNW5B7da > hhMqTOKXuS; hhMqTOKXuS = hhMqTOKXuS + (779 - 778)) {
        j = J4NOyGPw2K (jJOMVXnaqkR, y, KUwXRNW5B7da, hhMqTOKXuS);
        if (zr5pqDj < j)
            zr5pqDj = j;
    }
    return (zr5pqDj);
}

void  b5lQTiD9BInk (int zBgIXWA2l8Yb [1000], int fxGqmeTO) {
    int hhMqTOKXuS, j, UiWjtTy9;
    {
        hhMqTOKXuS = 0;
        for (; hhMqTOKXuS < fxGqmeTO;) {
            {
                j = hhMqTOKXuS + 1;
                for (; j < fxGqmeTO;) {
                    if (zBgIXWA2l8Yb[hhMqTOKXuS] < zBgIXWA2l8Yb[j]) {
                        UiWjtTy9 = zBgIXWA2l8Yb[hhMqTOKXuS];
                        zBgIXWA2l8Yb[hhMqTOKXuS] = zBgIXWA2l8Yb[j];
                        zBgIXWA2l8Yb[j] = UiWjtTy9;
                    }
                    j = j + 1;
                }
            }
            hhMqTOKXuS = hhMqTOKXuS + 1;
        }
    }
}

int J4NOyGPw2K (int MuhUeB05 [1000], int XMRDcX7bl [1000], int n, int hhMqTOKXuS) {
    int zBgIXWA2l8Yb, ThMg0rA4, zr5pqDj = 0;
    {
        zBgIXWA2l8Yb = 0;
        for (; zBgIXWA2l8Yb < n;) {
            ThMg0rA4 = zBgIXWA2l8Yb + hhMqTOKXuS;
            if (ThMg0rA4 >= n)
                ThMg0rA4 = ThMg0rA4 -n;
            if (MuhUeB05[zBgIXWA2l8Yb] > XMRDcX7bl[ThMg0rA4])
                zr5pqDj = zr5pqDj - (255 - 55);
            else {
                if (MuhUeB05[zBgIXWA2l8Yb] < XMRDcX7bl[ThMg0rA4])
                    zr5pqDj = zr5pqDj + 200;
            }
            zBgIXWA2l8Yb = zBgIXWA2l8Yb + 1;
        }
    }
    return (zr5pqDj);
}

