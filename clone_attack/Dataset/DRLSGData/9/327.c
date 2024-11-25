int main () {
    char zf2 [(139 - 39)] [(898 - 878)];
    char f [(314 - 294)];
    int OpnLe6 [(210 - 110)];
    int JfZsxp5Dh4;
    int uRWBANZn;
    int Kum5B4hW;
    int gLE7OHWlNxVc;
    int lraSPz;
    char tZypRNDcLW7 [(217 - 117)] [(555 - 535)];
    int GKfFu9VPgYiz [(608 - 508)];
    scanf ("%d", &Kum5B4hW);
    gLE7OHWlNxVc = (571 - 571);
    {
        uRWBANZn = (617 - 617);
        for (; uRWBANZn < Kum5B4hW;) {
            scanf ("%s", tZypRNDcLW7[uRWBANZn]);
            scanf ("%d", &GKfFu9VPgYiz[uRWBANZn]);
            uRWBANZn = uRWBANZn + (674 - 673);
        }
    }
    {
        uRWBANZn = (139 - 139);
        for (; uRWBANZn < Kum5B4hW;) {
            if ((295 - 235) <= GKfFu9VPgYiz[uRWBANZn]) {
                strcpy (zf2[gLE7OHWlNxVc], tZypRNDcLW7[uRWBANZn]);
                OpnLe6[gLE7OHWlNxVc] = GKfFu9VPgYiz[uRWBANZn];
                gLE7OHWlNxVc++;
                Kum5B4hW--;
                {
                    JfZsxp5Dh4 = uRWBANZn;
                    for (; JfZsxp5Dh4 <= Kum5B4hW;) {
                        strcpy (tZypRNDcLW7[JfZsxp5Dh4], tZypRNDcLW7[JfZsxp5Dh4 +(843 - 842)]);
                        GKfFu9VPgYiz[JfZsxp5Dh4] = GKfFu9VPgYiz[JfZsxp5Dh4 +(417 - 416)];
                        JfZsxp5Dh4 = JfZsxp5Dh4 +(950 - 949);
                    }
                }
                uRWBANZn = uRWBANZn - (55 - 54);
            }
            uRWBANZn++;
        }
    }
    {
        JfZsxp5Dh4 = 1;
        for (; gLE7OHWlNxVc >= JfZsxp5Dh4;) {
            {
                uRWBANZn = (260 - 260);
                for (; gLE7OHWlNxVc - JfZsxp5Dh4 > uRWBANZn;) {
                    if (OpnLe6[uRWBANZn] < OpnLe6[uRWBANZn + 1]) {
                        lraSPz = OpnLe6[uRWBANZn];
                        OpnLe6[uRWBANZn] = OpnLe6[uRWBANZn + 1];
                        strcpy (f, zf2[uRWBANZn]);
                        strcpy (zf2[uRWBANZn], zf2[uRWBANZn + 1]);
                        strcpy (zf2[uRWBANZn + 1], f);
                        OpnLe6[uRWBANZn + 1] = lraSPz;
                    }
                    uRWBANZn++;
                }
            }
            JfZsxp5Dh4++;
        }
    }
    {
        uRWBANZn = 0;
        for (; uRWBANZn < gLE7OHWlNxVc;) {
            printf ("%s\n", zf2[uRWBANZn]);
            uRWBANZn++;
        }
    }
    for (uRWBANZn = 0; uRWBANZn < Kum5B4hW; uRWBANZn++) {
        printf ("%s\n", tZypRNDcLW7[uRWBANZn]);
    }
    return 0;
}

