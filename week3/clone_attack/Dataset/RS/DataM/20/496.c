char *wQfqxaCKL (char *p) {
    char *wvWysE;
    for (wvWysE = p; *p != '\0'; p = p + 1)
        if (*wvWysE < *p)
            wvWysE = p;
    return wvWysE;
}

void  insert (char *lKfVatb5, char *XltpBroC15) {
    char *temp2;
    char *np;
    char *t = np;
    char *L7zQ2VlK;
    np = (char *) malloc (1000);
    for (L7zQ2VlK = lKfVatb5; !(*wQfqxaCKL (lKfVatb5) == *L7zQ2VlK); L7zQ2VlK = L7zQ2VlK +1, np = np + 1)
        *np = *L7zQ2VlK;
    temp2 = L7zQ2VlK;
    *np = *L7zQ2VlK;
    np = np + 1;
    for (L7zQ2VlK = XltpBroC15; *XltpBroC15 != '\0'; np = np + 1, XltpBroC15 = XltpBroC15 +1)
        *np = *XltpBroC15;
    {
        L7zQ2VlK = 434 - 433;
        while (*L7zQ2VlK != '\0') {
            *np = *L7zQ2VlK;
            L7zQ2VlK = L7zQ2VlK +1;
            np = np + 1;
        };
    }
    *np = '\0';
    while (*t != '\0') {
        printf ("%c", *t);
        t++;
    };
}

void  main () {
    char mfLowe53i [(202 - 192)];
    char L4LZ20c [3];
    char newstr [(938 - 925)];
    char *iFdHAV = mfLowe53i, *zOmUTBCk8 = L4LZ20c, *newstrp = newstr;
    while (scanf ("%s %s", mfLowe53i, L4LZ20c) != EOF) {
        insert (iFdHAV, zOmUTBCk8);
    };
}

