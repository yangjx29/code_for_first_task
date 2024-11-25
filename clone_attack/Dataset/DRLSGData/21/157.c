main () {
    float L4HdIultAv7, w13fGxF, t2PNZ8TtLxVi [300], C0kCEbdD4RQF, dkauXExhZCA0;
    int KHEZlb8, VAW0GPS8JM;
    scanf ("%d", &KHEZlb8);
    scanf ("%f", &t2PNZ8TtLxVi[0]);
    L4HdIultAv7 = w13fGxF = C0kCEbdD4RQF = t2PNZ8TtLxVi[0];
    for (VAW0GPS8JM = 1; KHEZlb8 > VAW0GPS8JM; VAW0GPS8JM = VAW0GPS8JM +1) {
        scanf ("%f", &t2PNZ8TtLxVi[VAW0GPS8JM]);
        C0kCEbdD4RQF = C0kCEbdD4RQF +t2PNZ8TtLxVi[VAW0GPS8JM];
        if (t2PNZ8TtLxVi[VAW0GPS8JM] > w13fGxF)
            w13fGxF = t2PNZ8TtLxVi[VAW0GPS8JM];
        else if (t2PNZ8TtLxVi[VAW0GPS8JM] < L4HdIultAv7)
            L4HdIultAv7 = t2PNZ8TtLxVi[VAW0GPS8JM];
        else
            ;
    }
    dkauXExhZCA0 = C0kCEbdD4RQF / KHEZlb8;
    if (w13fGxF - dkauXExhZCA0 > dkauXExhZCA0 - L4HdIultAv7)
        printf ("%.0f", w13fGxF);
    else if (w13fGxF - dkauXExhZCA0 < dkauXExhZCA0 - L4HdIultAv7)
        printf ("%.0f", L4HdIultAv7);
    else
        printf ("%.0f,%.0f", L4HdIultAv7, w13fGxF);
    return 0;
}

