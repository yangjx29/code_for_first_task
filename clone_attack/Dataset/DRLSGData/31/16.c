struct   student {
    char AQkCEJfPBIu [(518 - 508)];
    char tq3RBNPL [(509 - 489)];
    char ghSdwKbCDORL;
    int yVWUpFv5CYSX;
    char Xv9CADe7TJ [(511 - 501)];
    char KDUpZ6to8 [(800 - 780)];
    struct   student *brHeUv;
};
void  main () {
    struct   student *Gnf8h1KyzAu;
    struct   student *lQpPZ5;
    struct   student *jHdaghPIBcFv;
    Gnf8h1KyzAu = (struct   student *) malloc (sizeof (struct   student));
    jHdaghPIBcFv = Gnf8h1KyzAu;
    lQpPZ5 = Gnf8h1KyzAu;
    Gnf8h1KyzAu->brHeUv = NULL;
    scanf ("%s %s %c %d %s %s", Gnf8h1KyzAu->AQkCEJfPBIu, Gnf8h1KyzAu->tq3RBNPL, &Gnf8h1KyzAu->ghSdwKbCDORL, &Gnf8h1KyzAu->yVWUpFv5CYSX, Gnf8h1KyzAu->Xv9CADe7TJ, Gnf8h1KyzAu->KDUpZ6to8);
    for (; (527 - 526);) {
        Gnf8h1KyzAu = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", Gnf8h1KyzAu->AQkCEJfPBIu);
        if (!((401 - 401) != strcmp (Gnf8h1KyzAu->AQkCEJfPBIu, "end"))) {
            jHdaghPIBcFv = lQpPZ5;
            break;
        }
        else
            scanf ("%s %c %d %s %s", Gnf8h1KyzAu->tq3RBNPL, &Gnf8h1KyzAu->ghSdwKbCDORL, &Gnf8h1KyzAu->yVWUpFv5CYSX, Gnf8h1KyzAu->Xv9CADe7TJ, Gnf8h1KyzAu->KDUpZ6to8);
        Gnf8h1KyzAu->brHeUv = lQpPZ5;
        lQpPZ5 = Gnf8h1KyzAu;
    }
    Gnf8h1KyzAu = jHdaghPIBcFv;
    for (; Gnf8h1KyzAu != NULL;) {
        printf ("%s %s %c %d %s %s\n", Gnf8h1KyzAu->AQkCEJfPBIu, Gnf8h1KyzAu->tq3RBNPL, Gnf8h1KyzAu->ghSdwKbCDORL, Gnf8h1KyzAu->yVWUpFv5CYSX, Gnf8h1KyzAu->Xv9CADe7TJ, Gnf8h1KyzAu->KDUpZ6to8);
        Gnf8h1KyzAu = Gnf8h1KyzAu->brHeUv;
    }
}

