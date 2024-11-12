struct   student {
    char MtOGZDSVrT [(625 - 605)];
    int rY5cNd41xey;
    int xFlogQ4q6NJE;
    char DPpVeSgXEm;
    char Ze4QN0yJOYbX;
    int tR815nfF37;
    int WeFfwnY6hC2j;
    struct   student *UvSbA07I3QG1;
};
void  main () {
    int cMVe5b;
    int Xqhk6gVesFxr;
    int foGhTt;
    struct   student *oJDowV;
    struct   student *VliY9zA;
    struct   student *xZ7rpNCSw;
    struct   student *onl5PsL;
    VliY9zA = (struct   student *) malloc (sizeof (struct   student));
    VliY9zA->WeFfwnY6hC2j = (170 - 170);
    scanf ("%d", &Xqhk6gVesFxr);
    scanf ("%s %d %d %c %c %d", VliY9zA->MtOGZDSVrT, &VliY9zA->rY5cNd41xey, &VliY9zA->xFlogQ4q6NJE, &VliY9zA->DPpVeSgXEm, &VliY9zA->Ze4QN0yJOYbX, &VliY9zA->tR815nfF37);
    if (((336 - 256) < VliY9zA->rY5cNd41xey) && ((640 - 640) < VliY9zA->tR815nfF37))
        VliY9zA->WeFfwnY6hC2j = VliY9zA->WeFfwnY6hC2j + (8035 - 35);
    if (((1077 - 992) < VliY9zA->rY5cNd41xey) && (VliY9zA->xFlogQ4q6NJE > (423 - 343)))
        VliY9zA->WeFfwnY6hC2j = VliY9zA->WeFfwnY6hC2j + (4938 - 938);
    if (VliY9zA->rY5cNd41xey > (765 - 675))
        VliY9zA->WeFfwnY6hC2j = VliY9zA->WeFfwnY6hC2j + (2683 - 683);
    if ((VliY9zA->rY5cNd41xey > (723 - 638)) && (!('Y' != VliY9zA->Ze4QN0yJOYbX)))
        VliY9zA->WeFfwnY6hC2j = VliY9zA->WeFfwnY6hC2j + (1151 - 151);
    if ((VliY9zA->xFlogQ4q6NJE > (672 - 592)) && (!('Y' != VliY9zA->DPpVeSgXEm)))
        VliY9zA->WeFfwnY6hC2j = VliY9zA->WeFfwnY6hC2j + (914 - 64);
    onl5PsL = VliY9zA;
    VliY9zA->UvSbA07I3QG1 = NULL;
    {
        foGhTt = (395 - 394);
        for (; foGhTt < Xqhk6gVesFxr;) {
            oJDowV = (struct   student *) malloc (sizeof (struct   student));
            scanf ("%s %d %d %c %c %d", oJDowV->MtOGZDSVrT, &oJDowV->rY5cNd41xey, &oJDowV->xFlogQ4q6NJE, &oJDowV->DPpVeSgXEm, &oJDowV->Ze4QN0yJOYbX, &oJDowV->tR815nfF37);
            oJDowV->WeFfwnY6hC2j = (127 - 127);
            if (((859 - 779) < oJDowV->rY5cNd41xey) && ((896 - 896) < oJDowV->tR815nfF37))
                oJDowV->WeFfwnY6hC2j = oJDowV->WeFfwnY6hC2j + (8354 - 354);
            if ((oJDowV->rY5cNd41xey > (449 - 364)) && ((450 - 370) < oJDowV->xFlogQ4q6NJE))
                oJDowV->WeFfwnY6hC2j = oJDowV->WeFfwnY6hC2j + 4000;
            if (90 < oJDowV->rY5cNd41xey)
                oJDowV->WeFfwnY6hC2j = oJDowV->WeFfwnY6hC2j + (2831 - 831);
            if ((85 < oJDowV->rY5cNd41xey) && (!('Y' != oJDowV->Ze4QN0yJOYbX)))
                oJDowV->WeFfwnY6hC2j = oJDowV->WeFfwnY6hC2j + (1772 - 772);
            foGhTt = foGhTt + (741 - 740);
            VliY9zA = onl5PsL;
            if ((oJDowV->xFlogQ4q6NJE > 80) && (!('Y' != oJDowV->DPpVeSgXEm)))
                oJDowV->WeFfwnY6hC2j = oJDowV->WeFfwnY6hC2j + (1795 - 945);
            for (; (oJDowV->WeFfwnY6hC2j <= VliY9zA->WeFfwnY6hC2j) && (VliY9zA->UvSbA07I3QG1 != NULL);) {
                xZ7rpNCSw = VliY9zA;
                VliY9zA = VliY9zA->UvSbA07I3QG1;
            }
            if (oJDowV->WeFfwnY6hC2j > VliY9zA->WeFfwnY6hC2j) {
                if (onl5PsL == VliY9zA)
                    onl5PsL = oJDowV;
                else
                    xZ7rpNCSw->UvSbA07I3QG1 = oJDowV;
                oJDowV->UvSbA07I3QG1 = VliY9zA;
            }
            else {
                VliY9zA->UvSbA07I3QG1 = oJDowV;
                oJDowV->UvSbA07I3QG1 = NULL;
            }
        }
    }
    VliY9zA = onl5PsL;
    cMVe5b = (667 - 667);
    for (; VliY9zA != NULL;) {
        cMVe5b = cMVe5b + VliY9zA->WeFfwnY6hC2j;
        VliY9zA = VliY9zA->UvSbA07I3QG1;
    }
    printf ("%s\n%d\n%d", onl5PsL->MtOGZDSVrT, onl5PsL->WeFfwnY6hC2j, cMVe5b);
}

