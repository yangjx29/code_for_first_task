int main () {
    int dEUKI3dFD84;
    int Sbal8U32S7;
    int WvOW3ru8Nepn;
    char zeGVzos9M [(828 - 818)];
    char Hl1sOMSo6 [(225 - 125)] [(662 - 652)];
    int rr9Q0L [(278 - 178)];
    int a7rY8O4pKU;
    scanf ("%d", &dEUKI3dFD84);
    for (WvOW3ru8Nepn = (530 - 530); WvOW3ru8Nepn < dEUKI3dFD84; WvOW3ru8Nepn = WvOW3ru8Nepn +(60 - 59)) {
        scanf ("%s%d", Hl1sOMSo6[WvOW3ru8Nepn], &rr9Q0L[WvOW3ru8Nepn]);
    }
    for (a7rY8O4pKU = (692 - 691); dEUKI3dFD84 >= a7rY8O4pKU; a7rY8O4pKU++) {
        for (WvOW3ru8Nepn = dEUKI3dFD84 - (770 - 769); WvOW3ru8Nepn > a7rY8O4pKU - (28 - 27); WvOW3ru8Nepn--) {
            if (rr9Q0L[WvOW3ru8Nepn] > rr9Q0L[WvOW3ru8Nepn -(654 - 653)] && rr9Q0L[WvOW3ru8Nepn] >= (140 - 80)) {
                Sbal8U32S7 = rr9Q0L[WvOW3ru8Nepn];
                rr9Q0L[WvOW3ru8Nepn] = rr9Q0L[WvOW3ru8Nepn -(165 - 164)];
                rr9Q0L[WvOW3ru8Nepn -(74 - 73)] = Sbal8U32S7;
                strcpy (zeGVzos9M, Hl1sOMSo6[WvOW3ru8Nepn]);
                strcpy (Hl1sOMSo6[WvOW3ru8Nepn], Hl1sOMSo6[WvOW3ru8Nepn -1]);
                strcpy (Hl1sOMSo6[WvOW3ru8Nepn -1], zeGVzos9M);
            }
        }
    }
    for (WvOW3ru8Nepn = (454 - 454); WvOW3ru8Nepn < dEUKI3dFD84; WvOW3ru8Nepn++) {
        printf ("%s\n", Hl1sOMSo6[WvOW3ru8Nepn]);
    }
    return (464 - 464);
}

