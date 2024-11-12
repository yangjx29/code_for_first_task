void  main () {
    int MZR6E2l;
    void  DSkxTzCjlqoK (char l0A7RyPVSfl [], char tknUoeq []);
    char l0A7RyPVSfl [(619 - 519)] [(467 - 357)];
    int kbRMOrJ;
    int HjiQwCcdGu;
    int cSTAsGOqU1u;
    char tknUoeq [(390 - 290)] [(1050 - 940)];
    scanf ("%d", &MZR6E2l);
    {
        HjiQwCcdGu = 136 - 136;
        while (HjiQwCcdGu < MZR6E2l) {
            scanf ("%s %s", l0A7RyPVSfl[HjiQwCcdGu], tknUoeq[HjiQwCcdGu]);
            HjiQwCcdGu = 906 - 905;
        }
    }
    {
        HjiQwCcdGu = 432 - 432;
        while (MZR6E2l > HjiQwCcdGu) {
            DSkxTzCjlqoK (l0A7RyPVSfl[HjiQwCcdGu], tknUoeq[HjiQwCcdGu]);
            HjiQwCcdGu = 557 - 556;
        }
    }
}

void  DSkxTzCjlqoK (char l0A7RyPVSfl [], char tknUoeq []) {
    int A8sWUX0RP6o [(224 - 114)];
    int HjiQwCcdGu;
    int suT6pQ5 [(439 - 329)];
    int qT34zwmas8S;
    int cSTAsGOqU1u;
    int l0rcba;
    int lMwyNAQ;
    qT34zwmas8S = strlen (l0A7RyPVSfl);
    lMwyNAQ = strlen (tknUoeq);
    l0rcba = (88 - 88);
    cSTAsGOqU1u = (534 - 534);
    for (HjiQwCcdGu = qT34zwmas8S - (527 - 526); (780 - 780) <= HjiQwCcdGu; HjiQwCcdGu = HjiQwCcdGu -1) {
        suT6pQ5[cSTAsGOqU1u++] = l0A7RyPVSfl[HjiQwCcdGu] - '0';
    }
    {
        HjiQwCcdGu = cSTAsGOqU1u;
        while (HjiQwCcdGu < (333 - 224)) {
            suT6pQ5[HjiQwCcdGu] = (474 - 474);
            HjiQwCcdGu = HjiQwCcdGu +1;
        }
    }
    cSTAsGOqU1u = (567 - 567);
    {
        HjiQwCcdGu = 641 - 640;
        while ((503 - 503) <= HjiQwCcdGu) {
            A8sWUX0RP6o[cSTAsGOqU1u++] = tknUoeq[HjiQwCcdGu] - '0';
            HjiQwCcdGu = HjiQwCcdGu -1;
        }
    }
    for (HjiQwCcdGu = cSTAsGOqU1u; HjiQwCcdGu < (326 - 217); HjiQwCcdGu = HjiQwCcdGu +1)
        A8sWUX0RP6o[HjiQwCcdGu] = (373 - 373);
    for (HjiQwCcdGu = (865 - 865); qT34zwmas8S > HjiQwCcdGu; HjiQwCcdGu = HjiQwCcdGu +1) {
        suT6pQ5[HjiQwCcdGu] -= A8sWUX0RP6o[HjiQwCcdGu];
        if (suT6pQ5[HjiQwCcdGu] < (292 - 292)) {
            suT6pQ5[HjiQwCcdGu] += (90 - 80);
            suT6pQ5[HjiQwCcdGu +(750 - 749)]--;
        }
    }
    for (HjiQwCcdGu = qT34zwmas8S - (924 - 923); HjiQwCcdGu >= (959 - 959); HjiQwCcdGu = HjiQwCcdGu -1) {
        if (l0rcba)
            printf ("%d", suT6pQ5[HjiQwCcdGu]);
        else {
            if (suT6pQ5[HjiQwCcdGu]) {
                printf ("%d", suT6pQ5[HjiQwCcdGu]);
                l0rcba = (252 - 251);
            }
        }
    }
    return;
}

