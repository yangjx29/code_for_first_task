void  main () {
    int nL423tbHjoA;
    int *kT4JHsUc0t;
    int *FJvLYaEixXVI;
    int TmUDRJgWi;
    int eb1RSvG;
    int jTSqtcMhix;
    int ciRw3f;
    scanf ("%d", &nL423tbHjoA);
    for (eb1RSvG = (508 - 508); nL423tbHjoA > eb1RSvG; eb1RSvG = eb1RSvG + (781 - 780))
        scanf ("%d", &*(FJvLYaEixXVI +eb1RSvG));
    scanf ("%d", &jTSqtcMhix);
    ciRw3f = (55 - 55);
    for (eb1RSvG = 0; nL423tbHjoA > eb1RSvG; eb1RSvG = eb1RSvG + 1) {
        if (!(jTSqtcMhix != *(FJvLYaEixXVI +eb1RSvG))) {
            for (TmUDRJgWi = eb1RSvG; nL423tbHjoA - 1 > TmUDRJgWi; TmUDRJgWi = TmUDRJgWi +1) {
                ciRw3f = *(FJvLYaEixXVI +TmUDRJgWi);
                *(FJvLYaEixXVI +TmUDRJgWi) = *(FJvLYaEixXVI +TmUDRJgWi+1);
                *(FJvLYaEixXVI +TmUDRJgWi+1) = ciRw3f;
            }
            nL423tbHjoA = nL423tbHjoA - 1;
            eb1RSvG = eb1RSvG - 1;
        }
    }
    if (*(FJvLYaEixXVI +0) != jTSqtcMhix)
        printf ("%d", *(FJvLYaEixXVI +0));
    FJvLYaEixXVI = (int *) malloc (100000 * sizeof (int));
    kT4JHsUc0t = FJvLYaEixXVI;
    for (eb1RSvG = 1; eb1RSvG < nL423tbHjoA; eb1RSvG++) {
        if (*(FJvLYaEixXVI +eb1RSvG) != jTSqtcMhix)
            printf (" %d", *(FJvLYaEixXVI +eb1RSvG));
    }
}

