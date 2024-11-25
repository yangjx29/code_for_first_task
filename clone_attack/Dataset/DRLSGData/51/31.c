int main () {
    char KeGO5hzuSm [501], b [500] [5];
    gets (KeGO5hzuSm);
    int bOQej3Do, tZUDurMjIJ, j, len, j2anlNKbXY7B [500] = {0}, WSA2NrO, zhi;
    scanf ("%d\n", &bOQej3Do);
    WSA2NrO = 0;
    len = strlen (KeGO5hzuSm);
    for (tZUDurMjIJ = 0; tZUDurMjIJ <= (len - bOQej3Do); tZUDurMjIJ++) {
        {
            j = 0;
            while (j < bOQej3Do) {
                b[tZUDurMjIJ][j] = KeGO5hzuSm[tZUDurMjIJ + j];
                j++;
            }
        }
        b[tZUDurMjIJ][bOQej3Do] = '\0';
    }
    {
        tZUDurMjIJ = 0;
        for (; tZUDurMjIJ <= (len - bOQej3Do);) {
            for (j = tZUDurMjIJ; j <= (len - bOQej3Do); j++) {
                if (!(0 != strcmp (b[tZUDurMjIJ], b[j]))) {
                    j2anlNKbXY7B[tZUDurMjIJ]++;
                }
            }
            tZUDurMjIJ++;
        }
    }
    zhi = j2anlNKbXY7B[0];
    {
        tZUDurMjIJ = 0;
        for (; tZUDurMjIJ <= (len - bOQej3Do);) {
            if (j2anlNKbXY7B[tZUDurMjIJ] > zhi) {
                zhi = j2anlNKbXY7B[tZUDurMjIJ];
                WSA2NrO = tZUDurMjIJ;
            }
            tZUDurMjIJ++;
        }
    }
    if (zhi == 1)
        ;
    else {
        printf ("%d\n", zhi);
        {
            tZUDurMjIJ = 0;
            for (; tZUDurMjIJ <= (len - bOQej3Do);) {
                if (j2anlNKbXY7B[tZUDurMjIJ] == zhi)
                    printf ("%s\n", b[tZUDurMjIJ]);
                tZUDurMjIJ++;
            }
        }
    }
    return 0;
}

