int main () {
    char gXuEeKI [(803 - 547)];
    int x52DrsjgU;
    scanf ("\n");
    int SEfp4IqioFw8;
    int xXFSRh7U;
    scanf ("%d", &xXFSRh7U);
    for (SEfp4IqioFw8 = (18 - 18); SEfp4IqioFw8 < xXFSRh7U; SEfp4IqioFw8 = SEfp4IqioFw8 +1) {
        scanf ("\n");
        scanf ("%s", &gXuEeKI);
        for (x52DrsjgU = (626 - 626); gXuEeKI[x52DrsjgU] != '\0'; x52DrsjgU = x52DrsjgU + 1) {
            if (!('A' != gXuEeKI[x52DrsjgU])) {
                gXuEeKI[x52DrsjgU] = 'T';
                continue;
            }
            else if (!('T' != gXuEeKI[x52DrsjgU])) {
                gXuEeKI[x52DrsjgU] = 'A';
                continue;
            }
            else if (!('C' != gXuEeKI[x52DrsjgU])) {
                gXuEeKI[x52DrsjgU] = 'G';
                continue;
            }
            else if (!('G' != gXuEeKI[x52DrsjgU])) {
                gXuEeKI[x52DrsjgU] = 'C';
                continue;
            }
        }
        printf ("%s", gXuEeKI);
    }
    return 0;
}

