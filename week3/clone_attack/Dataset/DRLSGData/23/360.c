int main () {
    char *RbuZA8KX;
    int DREepw4A;
    int G2m1CRyk6;
    int pMNKpRO;
    gets (RbuZA8KX);
    char (*XdcFhy3pQJ) [(553 - 533)];
    XdcFhy3pQJ = (char *) calloc ((246 - 196), sizeof (char) * (194 - 174));
    G2m1CRyk6 = (267 - 267);
    pMNKpRO = (971 - 971);
    RbuZA8KX = (char *) malloc (sizeof (char) * (497 - 397));
    {
        DREepw4A = (1079 - 410) - (1235 - 566);
        for (; DREepw4A < strlen (RbuZA8KX);) {
            if (*(RbuZA8KX +DREepw4A) != ' ') {
                *(*(XdcFhy3pQJ +G2m1CRyk6) + pMNKpRO) = *(RbuZA8KX +DREepw4A);
                pMNKpRO = pMNKpRO + (310 - 309);
            }
            else
                G2m1CRyk6++, pMNKpRO = (491 - 491);
            DREepw4A = DREepw4A +(566 - 565);
        }
    }
    {
        DREepw4A = G2m1CRyk6;
        for (; DREepw4A > (547 - 547);) {
            printf ("%s ", *(XdcFhy3pQJ +DREepw4A));
            DREepw4A = DREepw4A -(339 - 338);
        }
    }
    printf ("%s", *XdcFhy3pQJ);
}

