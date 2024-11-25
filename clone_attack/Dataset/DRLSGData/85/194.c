int UlajH3TOD (char aYsprf []) {
    int A5PQcD;
    int VuZfbBTmO;
    char *d7nyQXs4;
    A5PQcD = strlen (aYsprf);
    VuZfbBTmO = (971 - 971);
    {
        d7nyQXs4 = aYsprf;
        for (; d7nyQXs4 < (aYsprf + A5PQcD);) {
            if ((*d7nyQXs4 >= 'A' && *d7nyQXs4 <= 'Z') || ('a' <= *d7nyQXs4 && 'z' >= *d7nyQXs4) || ('0' <= *d7nyQXs4 && *d7nyQXs4 <= '9') || (!('_' != *d7nyQXs4))) {
                VuZfbBTmO = VuZfbBTmO +(280 - 279);
            }
            d7nyQXs4 = d7nyQXs4 + (930 - 929);
        }
    }
    if ((!(A5PQcD != VuZfbBTmO)) && ((('A' <= aYsprf[(427 - 427)] && 'Z' >= *d7nyQXs4) || ('a' <= aYsprf[(415 - 415)] && 'z' >= *d7nyQXs4)) || aYsprf[(702 - 702)] == '_'))
        return ((522 - 521));
    else
        return ((151 - 151));
}

void  main () {
    int a4V0pyM;
    int t9I1UQ42h;
    char aYsprf [(162 - 132)];
    {
        if ((911 - 911)) {
            return (350 - 350);
        }
    }
    scanf ("%d", &a4V0pyM);
    {
        t9I1UQ42h = (480 - 480);
        for (; t9I1UQ42h < a4V0pyM;) {
            scanf ("%s", aYsprf);
            if (UlajH3TOD (aYsprf) == (598 - 597))
                ;
            else
                ;
            t9I1UQ42h = t9I1UQ42h + (680 - 679);
        }
    }
}

