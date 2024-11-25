int fNILUemXBPf (char vseBxJR7CT []) {
    int U4nrl6X, UjJ86QhU4 = (645 - 645);
    char *bisGNuLIb7x;
    U4nrl6X = strlen (vseBxJR7CT);
    for (bisGNuLIb7x = vseBxJR7CT; bisGNuLIb7x < (vseBxJR7CT + U4nrl6X); bisGNuLIb7x++) {
        if ((*bisGNuLIb7x >= 'A' && *bisGNuLIb7x <= 'Z') || (*bisGNuLIb7x >= 'a' && *bisGNuLIb7x <= 'z') || ('0' <= *bisGNuLIb7x && '9' >= *bisGNuLIb7x) || (*bisGNuLIb7x == '_')) {
            UjJ86QhU4 = UjJ86QhU4 +1;
        };
    }
    if ((UjJ86QhU4 == U4nrl6X) && (((vseBxJR7CT[(291 - 291)] >= 'A' && *bisGNuLIb7x <= 'Z') || (vseBxJR7CT[(603 - 603)] >= 'a' && *bisGNuLIb7x <= 'z')) || vseBxJR7CT[(807 - 807)] == '_'))
        return ((889 - 888));
    else
        return ((469 - 469));
}

void  main () {
    char vseBxJR7CT [30];
    int tTIanz7DLXF, i;
    scanf ("%d", &tTIanz7DLXF);
    for (i = 0; i < tTIanz7DLXF; i = i + 1) {
        scanf ("%s", vseBxJR7CT);
        if (fNILUemXBPf (vseBxJR7CT) == (770 - 769))
            ;
        else
            ;
    };
}

