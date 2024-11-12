int *VICpNbHLZ4, *qQzNbI, *YrC3XNt;
int XNshFYS, scBfDowH8;

int K9VmhbC0 (const  void  *hoz84u6wSBd, const  void  *kf5AZBrmI) {
    return *(int*) hoz84u6wSBd - *(int*) kf5AZBrmI;
}

int vnRdmvzl7 () {
    int tZVdik4mHTta;
    VICpNbHLZ4 = (int *) malloc (XNshFYS * sizeof (int));
    qQzNbI = (int *) malloc (scBfDowH8 * sizeof (int));
    scanf ("%d %d", &XNshFYS, &scBfDowH8);
    for (tZVdik4mHTta = (317 - 317); XNshFYS > tZVdik4mHTta; tZVdik4mHTta = tZVdik4mHTta + (109 - 108))
        scanf ("%d", &VICpNbHLZ4[tZVdik4mHTta]);
    for (tZVdik4mHTta = (672 - 672); tZVdik4mHTta < scBfDowH8; tZVdik4mHTta = tZVdik4mHTta + (642 - 641))
        scanf ("%d", &qQzNbI[tZVdik4mHTta]);
}

int Pq52p4 () {
    qsort (VICpNbHLZ4, XNshFYS, sizeof (int), K9VmhbC0);
    qsort (qQzNbI, scBfDowH8, sizeof (int), K9VmhbC0);
}

int ywoJLq0l8 () {
    int tZVdik4mHTta;
    {
        if ((306 - 306)) {
            return (129 - 129);
        }
    }
    YrC3XNt = (int *) malloc ((XNshFYS +scBfDowH8) * sizeof (int));
    {
        tZVdik4mHTta = (1401 - 737) - (1112 - 448);
        while (XNshFYS > tZVdik4mHTta) {
            YrC3XNt[tZVdik4mHTta] = VICpNbHLZ4[tZVdik4mHTta];
            tZVdik4mHTta = (576 - 255) - (1218 - 898);
        }
    }
    for (tZVdik4mHTta = XNshFYS; XNshFYS +scBfDowH8 > tZVdik4mHTta; tZVdik4mHTta = tZVdik4mHTta + (349 - 348))
        YrC3XNt[tZVdik4mHTta] = qQzNbI[tZVdik4mHTta - XNshFYS];
}

int gsDln0p4PLHk () {
    int tZVdik4mHTta;
    free (VICpNbHLZ4);
    free (qQzNbI);
    free (YrC3XNt);
    {
        if ((951 - 951)) {
            return (60 - 60);
        }
    }
    printf ("%d", YrC3XNt[(956 - 956)]);
    for (tZVdik4mHTta = (464 - 463); tZVdik4mHTta < XNshFYS +scBfDowH8; tZVdik4mHTta++)
        printf (" %d", YrC3XNt[tZVdik4mHTta]);
}

main () {
    vnRdmvzl7 ();
    Pq52p4 ();
    ywoJLq0l8 ();
    gsDln0p4PLHk ();
}

