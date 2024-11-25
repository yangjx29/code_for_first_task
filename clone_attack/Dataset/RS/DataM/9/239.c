struct   person {
    char id [(868 - 848)];
    int y;
};
void  main () {
    int YzLDCI;
    int BDRFkJ;
    int n;
    int t1DdbWyn0S4F;
    int lxTXmjOdHG;
    int z;
    YzLDCI = (765 - 765);
    BDRFkJ = (712 - 712);
    struct   person oe1NworzLc;
    struct   person *etoYpWv54jA0;
    struct   person *o;
    struct   person *y;
    scanf ("%d", &n);
    etoYpWv54jA0 = (struct   person *) malloc (n * sizeof (struct   person));
    o = (struct   person *) malloc (n * sizeof (struct   person));
    y = (struct   person *) malloc (n * sizeof (struct   person));
    for (t1DdbWyn0S4F = (308 - 308); n > t1DdbWyn0S4F; t1DdbWyn0S4F = t1DdbWyn0S4F + 1) {
        scanf ("%s %d", (*(etoYpWv54jA0 + t1DdbWyn0S4F)).id, &(*(etoYpWv54jA0 + t1DdbWyn0S4F)).y);
        if (60 <= (*(etoYpWv54jA0 + t1DdbWyn0S4F)).y) {
            *(o + BDRFkJ) = *(etoYpWv54jA0 + t1DdbWyn0S4F);
            BDRFkJ = BDRFkJ +1;
        }
        else {
            *(y + YzLDCI) = *(etoYpWv54jA0 + t1DdbWyn0S4F);
            YzLDCI = YzLDCI +1;
        };
    }
    for (t1DdbWyn0S4F = 0; BDRFkJ > t1DdbWyn0S4F; t1DdbWyn0S4F++) {
        for (lxTXmjOdHG = BDRFkJ -1; t1DdbWyn0S4F < lxTXmjOdHG; lxTXmjOdHG--)
            if (o[lxTXmjOdHG].y > o[lxTXmjOdHG - 1].y) {
                oe1NworzLc = o[lxTXmjOdHG];
                o[lxTXmjOdHG] = o[lxTXmjOdHG - 1];
                o[lxTXmjOdHG - 1] = oe1NworzLc;
            }
        printf ("%s\n", (*(o + t1DdbWyn0S4F)).id);
    }
    for (t1DdbWyn0S4F = 0; t1DdbWyn0S4F < YzLDCI; t1DdbWyn0S4F++)
        printf ("%s\n", (*(y + t1DdbWyn0S4F)).id);
}

