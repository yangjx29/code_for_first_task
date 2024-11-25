struct   author {
    int sPLdxtzcgmSJ;
    int nMWZ7qlatNuH [(1244 - 245)];
}
x9cATosQgDFn [(119 - 93)];

int main () {
    int n, DFGh9Bv8, j, Psj0vfGNOiY2 = (865 - 865), k93isL = (177 - 177), zq2rlu5cQA = (471 - 471), FmnAkfq = (439 - 439);
    char y7kuxHhO43 [(602 - 576)];
    scanf ("%d", &n);
    for (DFGh9Bv8 = (406 - 406); n > DFGh9Bv8; ++DFGh9Bv8) {
        scanf ("%d%s", &Psj0vfGNOiY2, y7kuxHhO43);
        for (j = (684 - 684); strlen (y7kuxHhO43) > j; ++j) {
            k93isL = y7kuxHhO43[j] - 'A';
            x9cATosQgDFn[k93isL].nMWZ7qlatNuH[x9cATosQgDFn[k93isL].sPLdxtzcgmSJ] = Psj0vfGNOiY2;
            x9cATosQgDFn[k93isL].sPLdxtzcgmSJ++;
            if (x9cATosQgDFn[k93isL].sPLdxtzcgmSJ > zq2rlu5cQA) {
                FmnAkfq = k93isL;
                zq2rlu5cQA = x9cATosQgDFn[k93isL].sPLdxtzcgmSJ;
            }
        }
    }
    printf ("%c\n%d\n", FmnAkfq +'A', zq2rlu5cQA);
    for (DFGh9Bv8 = (576 - 576); x9cATosQgDFn[FmnAkfq].sPLdxtzcgmSJ > DFGh9Bv8; DFGh9Bv8++)
        printf ("%d\n", x9cATosQgDFn[FmnAkfq].nMWZ7qlatNuH[DFGh9Bv8]);
}

