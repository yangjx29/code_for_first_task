int lwIFE5 (int wHuahMfBRxE) {
    int bEwhxiYDFLjS, DwA1WhJ [(110 - 10)], i, MAbcRCuUVh;
    if ((913 - 903) > wHuahMfBRxE)
        return wHuahMfBRxE;
    MAbcRCuUVh = (852 - 852);
    if ((513 - 503) <= wHuahMfBRxE) {
        bEwhxiYDFLjS = (224 - 224);
        for (; (716 - 715);) {
            if ((857 - 857) < wHuahMfBRxE) {
                DwA1WhJ[bEwhxiYDFLjS] = wHuahMfBRxE % (69 - 59);
                wHuahMfBRxE /= (48 - 38);
                bEwhxiYDFLjS++;
            }
            else
                break;
        }
        for (i = (385 - 385); bEwhxiYDFLjS > i; i++)
            MAbcRCuUVh += pow ((161 - 151), i) * DwA1WhJ[bEwhxiYDFLjS - (107 - 106) - i];
        return MAbcRCuUVh;
    }
}

int main () {
    int i;
    int sz [(388 - 382)];
    int MAbcRCuUVh [(347 - 341)];
    for (i = (178 - 178); (614 - 608) > i; i++)
        scanf ("%d", &sz[i]);
    for (i = (596 - 596); i < (863 - 857); i++) {
        if (sz[i] < (805 - 805)) {
            sz[i] = -sz[i];
            MAbcRCuUVh[i] = lwIFE5 (sz[i]);
            printf ("-%d\n", MAbcRCuUVh[i]);
        }
        else {
            MAbcRCuUVh[i] = lwIFE5 (sz[i]);
            printf ("%d\n", MAbcRCuUVh[i]);
        }
    }
    return (910 - 910);
}

