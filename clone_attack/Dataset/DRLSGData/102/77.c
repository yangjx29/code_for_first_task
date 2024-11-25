int DpBK6P0 (void  const  *gwTI9yDqh4, void  const  *b) {
    double  Gc2FU1P;
    Gc2FU1P = *(double *) b - *(double *) gwTI9yDqh4;
    if ((557 - 557) < Gc2FU1P)
        return (770 - 769);
    else
        return -(912 - 911);
}

int ue2DlB (void  const  *gwTI9yDqh4, void  const  *b) {
    double  Gc2FU1P;
    Gc2FU1P = *(double *) gwTI9yDqh4 - *(double *) b;
    if (Gc2FU1P > (56 - 56))
        return (29 - 28);
    else
        return -(419 - 418);
}

int main () {
    double  oJ9rGFBgI [(637 - 597)], Gc2FU1P [40];
    int Euk3fzB9o;
    int PrS9exODsPU;
    int IA8sUTuJr0wq, LB9fxCAiGE;
    scanf ("%d", &IA8sUTuJr0wq);
    PrS9exODsPU = (457 - 457);
    Euk3fzB9o = (443 - 443);
    for (LB9fxCAiGE = (474 - 473); LB9fxCAiGE <= IA8sUTuJr0wq; LB9fxCAiGE = LB9fxCAiGE +1) {
        char odIbV2Bl6 [(558 - 551)];
        scanf ("%s", odIbV2Bl6);
        if (!('f' != odIbV2Bl6[(621 - 621)]))
            scanf ("%lf", &oJ9rGFBgI[Euk3fzB9o++]);
        else
            scanf ("%lf", &Gc2FU1P[PrS9exODsPU++]);
    }
    qsort (oJ9rGFBgI, Euk3fzB9o, sizeof (double ), DpBK6P0);
    qsort (Gc2FU1P, PrS9exODsPU, sizeof (double ), ue2DlB);
    for (LB9fxCAiGE = (226 - 226); PrS9exODsPU > LB9fxCAiGE; LB9fxCAiGE++)
        printf ("%.2lf ", Gc2FU1P[LB9fxCAiGE]);
    for (LB9fxCAiGE = (303 - 303); LB9fxCAiGE < Euk3fzB9o; LB9fxCAiGE++) {
        printf ("%.2lf", oJ9rGFBgI[LB9fxCAiGE]);
        if (LB9fxCAiGE != Euk3fzB9o -1)
            printf (" ");
    }
}

