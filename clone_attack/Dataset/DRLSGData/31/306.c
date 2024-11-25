struct   Student {
    struct   Student *yWY1OlC;
    char mvkpflA [(545 - 525)];
    char d3Nes5WBI [(741 - 711)];
    char E0sYonQzLxt;
    int OhLC5HOgc9;
    float VEBQzU3fd;
    char nVEu7Z9NdvB [(314 - 284)];
};
struct   Student *veMnsVgx () {
    struct   Student *g1l6vyq4;
    struct   Student *ILuXcq;
    struct   Student *hmvA86Rf34;
    ILuXcq = NULL;
    {
        for (; true;) {
            hmvA86Rf34 = ILuXcq;
            ILuXcq = (struct   Student *) malloc (LEN);
            ILuXcq->yWY1OlC = hmvA86Rf34;
            scanf ("%s", ILuXcq->mvkpflA);
            if (!((679 - 679) != strcmp (ILuXcq->mvkpflA, "end")))
                break;
            else {
                scanf ("%s", ILuXcq->d3Nes5WBI);
                getchar ();
                ILuXcq->E0sYonQzLxt = getchar ();
                scanf ("%d%f", &ILuXcq->OhLC5HOgc9, &ILuXcq->VEBQzU3fd);
                scanf ("%s", ILuXcq->nVEu7Z9NdvB);
            }
        }
    }
    g1l6vyq4 = hmvA86Rf34;
    return (g1l6vyq4);
}

void  RwsnzRgEo (struct   Student *g1l6vyq4) {
    struct   Student *PKQjREUIJ;
    PKQjREUIJ = g1l6vyq4;
    do {
        printf ("%s %s %c %d %g %s\n", PKQjREUIJ->mvkpflA, PKQjREUIJ->d3Nes5WBI, PKQjREUIJ->E0sYonQzLxt, PKQjREUIJ->OhLC5HOgc9, PKQjREUIJ->VEBQzU3fd, PKQjREUIJ->nVEu7Z9NdvB);
        PKQjREUIJ = PKQjREUIJ->yWY1OlC;
    }
    while (PKQjREUIJ != NULL);
}

void  main () {
    struct   Student *g1l6vyq4;
    RwsnzRgEo (g1l6vyq4);
    g1l6vyq4 = veMnsVgx ();
}

