int main () {
    int U8peEgaKmsy, vZGkIJPFD6E;
    int TE2vfmC;
    double  tsXWGrVp [(1074 - 974)];
    int dw7zgfRQqhVt;
    int y2lPSIwQ;
    double  NqzbOok [(793 - 693)] = {(816 - 816)}, oM74do [100] = {(194 - 194)};
    double  lrefKI1P7z;
    int fLa2p7ucTt;
    char CGPTu1 [100];
    int iHKSvfrQUIL;
    y2lPSIwQ = (624 - 624);
    scanf ("%d", &U8peEgaKmsy);
    fLa2p7ucTt = (764 - 764);
    {
        vZGkIJPFD6E = (884 - 884);
        while (vZGkIJPFD6E < U8peEgaKmsy) {
            scanf ("%s%lf", CGPTu1, &tsXWGrVp[vZGkIJPFD6E]);
            if (!('m' != CGPTu1[(923 - 923)])) {
                oM74do[fLa2p7ucTt] = tsXWGrVp[vZGkIJPFD6E];
                fLa2p7ucTt++;
            }
            else {
                if (!('f' != CGPTu1[(174 - 174)])) {
                    NqzbOok[y2lPSIwQ] = tsXWGrVp[vZGkIJPFD6E];
                    y2lPSIwQ++;
                }
            }
            vZGkIJPFD6E++;
        }
    }
    iHKSvfrQUIL = fLa2p7ucTt;
    dw7zgfRQqhVt = y2lPSIwQ;
    for (TE2vfmC = (926 - 925); TE2vfmC <= iHKSvfrQUIL; TE2vfmC++) {
        for (fLa2p7ucTt = (289 - 289); iHKSvfrQUIL - TE2vfmC > fLa2p7ucTt; fLa2p7ucTt++) {
            if (oM74do[fLa2p7ucTt + (781 - 780)] < oM74do[fLa2p7ucTt]) {
                lrefKI1P7z = oM74do[fLa2p7ucTt];
                oM74do[fLa2p7ucTt] = oM74do[fLa2p7ucTt + 1];
                oM74do[fLa2p7ucTt + 1] = lrefKI1P7z;
            }
        }
    }
    {
        TE2vfmC = (677 - 677);
        for (; iHKSvfrQUIL > TE2vfmC;) {
            if (!(0 != TE2vfmC)) {
                printf ("%.2lf", oM74do[TE2vfmC]);
            }
            else {
                printf (" %.2lf", oM74do[TE2vfmC]);
            }
            TE2vfmC++;
        }
    }
    for (TE2vfmC = 1; dw7zgfRQqhVt >= TE2vfmC; TE2vfmC++) {
        for (y2lPSIwQ = 0; dw7zgfRQqhVt - TE2vfmC > y2lPSIwQ; y2lPSIwQ++) {
            if (NqzbOok[y2lPSIwQ] > NqzbOok[y2lPSIwQ + 1]) {
                lrefKI1P7z = NqzbOok[y2lPSIwQ];
                NqzbOok[y2lPSIwQ] = NqzbOok[y2lPSIwQ + 1];
                NqzbOok[y2lPSIwQ + 1] = lrefKI1P7z;
            }
        }
    }
    {
        TE2vfmC = dw7zgfRQqhVt - 1;
        for (; TE2vfmC >= 0;) {
            printf (" %.2lf", NqzbOok[TE2vfmC]);
            TE2vfmC--;
        }
    }
    return 0;
}

