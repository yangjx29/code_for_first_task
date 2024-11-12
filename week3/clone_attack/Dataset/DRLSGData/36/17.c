void  tzJgCY6 (int H4WgTnw [53], char MEx3Y1Z [], int RSwd7aJA4CDe) {
    int ekpLBCMb;
    int ZqWQI52;
    for (ekpLBCMb = 0; ekpLBCMb <= RSwd7aJA4CDe -1; ekpLBCMb++) {
        ZqWQI52 = MEx3Y1Z[ekpLBCMb];
        H4WgTnw[ZqWQI52]++;
    }
}

int main () {
    char dmeBcYsto [1000] = {0};
    char jqmsaldHM [1000] = {0};
    int b4R2VJXh;
    int miwQCNqvT [200] = {0};
    int CesK2RNb [200] = {0};
    int Iy7QSWAt9l;
    int lUZ4Enlu;
    int ekpLBCMb;
    Iy7QSWAt9l = 1;
    scanf ("%s", dmeBcYsto);
    b4R2VJXh = strlen (dmeBcYsto);
    tzJgCY6 (CesK2RNb, dmeBcYsto, b4R2VJXh);
    scanf ("%s", jqmsaldHM);
    lUZ4Enlu = strlen (jqmsaldHM);
    tzJgCY6 (miwQCNqvT, jqmsaldHM, lUZ4Enlu);
    for (ekpLBCMb = 1; ekpLBCMb <= 199; ekpLBCMb++) {
        if (CesK2RNb[ekpLBCMb] != miwQCNqvT[ekpLBCMb])
            Iy7QSWAt9l = 0;
    }
    if (Iy7QSWAt9l == 1)
        ;
    else {
        if (Iy7QSWAt9l == 0)
            ;
    }
    return 0;
}

