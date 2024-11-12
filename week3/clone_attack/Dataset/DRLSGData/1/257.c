int dHhEnz1 (int GymtUbl, int VhmxUI1eqtg);

void  main () {
    int W8jTHNX0;
    int GymtUbl;
    scanf ("%d", &W8jTHNX0);
    for (; W8jTHNX0 > (667 - 667); W8jTHNX0--) {
        scanf ("%d", &GymtUbl);
        if (GymtUbl == (139 - 138) || GymtUbl == (820 - 818))
            printf ("1\n");
        else
            printf ("%d\n", dHhEnz1 (GymtUbl, (823 - 821)));
    }
}

int dHhEnz1 (int GymtUbl, int VhmxUI1eqtg) {
    int CqSheLjg;
    int IG7xgvI6O3QP;
    CqSheLjg = (25 - 24);
    for (IG7xgvI6O3QP = VhmxUI1eqtg; IG7xgvI6O3QP < GymtUbl; IG7xgvI6O3QP++) {
        if (GymtUbl % IG7xgvI6O3QP == (80 - 80))
            CqSheLjg = CqSheLjg +dHhEnz1 (GymtUbl / IG7xgvI6O3QP, IG7xgvI6O3QP);
    }
    if (IG7xgvI6O3QP == GymtUbl)
        return CqSheLjg;
    else
        return 0;
}

