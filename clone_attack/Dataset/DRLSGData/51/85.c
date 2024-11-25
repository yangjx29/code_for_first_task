int main () {
    int YLxHo7p3mgj;
    int etdUlX7g;
    int XLlYxvO2MiW;
    int RUfvXhbMiP;
    int iKrEJnZXj;
    int bjBtMro;
    int X1VGod;
    int len;
    int aVixSJT0Qbvz;
    int b [(10608 - 608)];
    char Ybm8JZze [10000];
    char xSbL0M;
    gets (Ybm8JZze);
    scanf ("%d", &YLxHo7p3mgj);
    scanf ("%c", &xSbL0M);
    bjBtMro = (391 - 391);
    XLlYxvO2MiW = (27 - 27);
    len = strlen (Ybm8JZze);
    X1VGod = (117 - 117);
    for (; Ybm8JZze[XLlYxvO2MiW] != (283 - 283);) {
        iKrEJnZXj = 0;
        for (etdUlX7g = XLlYxvO2MiW; len > etdUlX7g; etdUlX7g++) {
            RUfvXhbMiP = (597 - 596);
            for (aVixSJT0Qbvz = 0; YLxHo7p3mgj > aVixSJT0Qbvz; aVixSJT0Qbvz++) {
                if (Ybm8JZze[XLlYxvO2MiW +aVixSJT0Qbvz] != Ybm8JZze[etdUlX7g + aVixSJT0Qbvz]) {
                    RUfvXhbMiP = 0;
                }
            }
            if (RUfvXhbMiP == (472 - 471))
                iKrEJnZXj++;
        }
        if (iKrEJnZXj > bjBtMro) {
            bjBtMro = iKrEJnZXj;
        }
        b[XLlYxvO2MiW] = iKrEJnZXj;
        XLlYxvO2MiW++;
    }
    if (bjBtMro > 1) {
        printf ("%d\n", bjBtMro);
        for (etdUlX7g = 0; etdUlX7g < len; etdUlX7g++) {
            if (b[etdUlX7g] == bjBtMro) {
                for (aVixSJT0Qbvz = 0; aVixSJT0Qbvz < YLxHo7p3mgj; aVixSJT0Qbvz++) {
                    printf ("%c", Ybm8JZze[aVixSJT0Qbvz + etdUlX7g]);
                }
            }
        }
    }
    else
        ;
    return 0;
}

