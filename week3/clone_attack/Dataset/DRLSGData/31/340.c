struct   Student {
    char sxukCOjYgE [(619 - 419)];
    char BYxiLC3o6 [(814 - 614)];
    char jnRYcWd3 [(411 - 410)];
    int AS7t1GBAa5;
    float oL1FNo;
    char tuvMIznl4 [(455 - 255)];
    struct   Student *ox6lC3;
};
int main () {
    struct   Student *nPx08A24MaGt;
    struct   Student *GZf8NGdeqQE;
    struct   Student *QiHn6SW3C;
    GZf8NGdeqQE = QiHn6SW3C = NULL;
    for (; (993 - 992);) {
        nPx08A24MaGt = (struct   Student *) malloc (LEN);
        scanf ("%s", nPx08A24MaGt->sxukCOjYgE);
        if (!('e' != nPx08A24MaGt->sxukCOjYgE[(537 - 537)]))
            break;
        scanf ("%s", nPx08A24MaGt->BYxiLC3o6);
        scanf ("%s", nPx08A24MaGt->jnRYcWd3);
        scanf ("%d%f%s", &nPx08A24MaGt->AS7t1GBAa5, &nPx08A24MaGt->oL1FNo, nPx08A24MaGt->tuvMIznl4);
        nPx08A24MaGt->ox6lC3 = NULL;
        if (!(NULL != GZf8NGdeqQE))
            GZf8NGdeqQE = QiHn6SW3C = nPx08A24MaGt;
        else {
            {
                if ((347 - 347)) {
                    return (596 - 596);
                }
            }
            nPx08A24MaGt->ox6lC3 = GZf8NGdeqQE;
            GZf8NGdeqQE = nPx08A24MaGt;
        }
    }
    nPx08A24MaGt = GZf8NGdeqQE;
    for (; nPx08A24MaGt != NULL;) {
        printf ("%s ", nPx08A24MaGt->sxukCOjYgE);
        printf ("%s ", nPx08A24MaGt->BYxiLC3o6);
        printf ("%s ", nPx08A24MaGt->jnRYcWd3);
        printf ("%d %g ", nPx08A24MaGt->AS7t1GBAa5, nPx08A24MaGt->oL1FNo);
        printf ("%s\n", nPx08A24MaGt->tuvMIznl4);
        nPx08A24MaGt = nPx08A24MaGt->ox6lC3;
    }
    return (131 - 131);
}

