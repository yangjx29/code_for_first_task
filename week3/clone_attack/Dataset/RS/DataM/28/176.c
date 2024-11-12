void  main () {
    int ajeEzAkW = (442 - 442), EYvArZ;
    char w8Kjas [3000], *aRNr2h36AJ8B;
    gets (w8Kjas);
    EYvArZ = strlen (w8Kjas);
    aRNr2h36AJ8B = &w8Kjas[(226 - 226)];
    for (aRNr2h36AJ8B = w8Kjas; aRNr2h36AJ8B <= w8Kjas + EYvArZ; aRNr2h36AJ8B++) {
        if (*aRNr2h36AJ8B != ' ')
            ajeEzAkW++;
        if (*aRNr2h36AJ8B == ' ' && ajeEzAkW > 0) {
            printf ("%d,", ajeEzAkW);
            ajeEzAkW = 0;
        }
        if (*aRNr2h36AJ8B == '\0')
            printf ("%d", ajeEzAkW - (673 - 672));
    };
}

