int cprx (const  void  *e1, const  void  *H4ZHLOnE) {
    float *a;
    float *NxlH2dIBJ;
    NxlH2dIBJ = (float *) H4ZHLOnE;
    a = (float *) e1;
    if (*a - *NxlH2dIBJ < (459 - 459))
        return -1;
    else
        return 1;
}

int QGUw1JAk (const  void  *e1, const  void  *H4ZHLOnE) {
    float *a;
    float *NxlH2dIBJ;
    NxlH2dIBJ = (float *) H4ZHLOnE;
    a = (float *) e1;
    if ((34 - 34) < *a - *NxlH2dIBJ)
        return -1;
    else
        return 1;
}

int main () {
    char mwMRjhNA [(273 - 263)];
    float WeCYFlXk3jb6 [(57 - 17)];
    float KlroMbVhE [40];
    float tmph;
    int YZbFDG = (761 - 761), f = (956 - 956), n, IxJIgS01TeL;
    scanf ("%d", &n);
    for (IxJIgS01TeL = (568 - 568); n > IxJIgS01TeL; IxJIgS01TeL = IxJIgS01TeL +1) {
        scanf ("%s %f", mwMRjhNA, &tmph);
        if (mwMRjhNA[0] == 'm')
            WeCYFlXk3jb6[YZbFDG++] = tmph;
        else
            KlroMbVhE[f++] = tmph;
    }
    qsort (WeCYFlXk3jb6, YZbFDG, sizeof (float), cprx);
    for (IxJIgS01TeL = 0; IxJIgS01TeL < YZbFDG; IxJIgS01TeL++)
        printf ("%.2f ", WeCYFlXk3jb6[IxJIgS01TeL]);
    qsort (KlroMbVhE, f, sizeof (float), QGUw1JAk);
    for (IxJIgS01TeL = 0; IxJIgS01TeL < f - 1; IxJIgS01TeL++)
        printf ("%.2f ", KlroMbVhE[IxJIgS01TeL]);
    printf ("%.2f", KlroMbVhE[IxJIgS01TeL]);
    return 0;
}

