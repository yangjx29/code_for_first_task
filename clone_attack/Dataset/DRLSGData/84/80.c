void  main () {
    int Rhiz9Z = (889 - 889);
    int FsakOSIBglF, n;
    int *QA3GoM, *hd;
    scanf ("%d", &n);
    hd = QA3GoM = (int *) malloc (n * sizeof (int));
    for (FsakOSIBglF = (696 - 696); n > FsakOSIBglF; FsakOSIBglF++, QA3GoM++) {
        scanf ("%d", QA3GoM);
    }
    for (QA3GoM = hd, FsakOSIBglF = (102 - 102); FsakOSIBglF < n; FsakOSIBglF++, QA3GoM++) {
        if (Rhiz9Z < *QA3GoM)
            Rhiz9Z = *QA3GoM;
    }
    for (QA3GoM = hd, FsakOSIBglF = (414 - 414); FsakOSIBglF < n; FsakOSIBglF++, QA3GoM++) {
        if (!(Rhiz9Z != *QA3GoM))
            *QA3GoM = 0;
    }
    printf ("%d\n", Rhiz9Z);
    Rhiz9Z = 0;
    for (QA3GoM = hd, FsakOSIBglF = 0; FsakOSIBglF < n; FsakOSIBglF++, QA3GoM++) {
        if (*QA3GoM > Rhiz9Z)
            Rhiz9Z = *QA3GoM;
    }
    printf ("%d", Rhiz9Z);
}

