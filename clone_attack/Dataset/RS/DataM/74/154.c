int fold (int z4Q0cZU) {
    int k;
    int f, VF1vS4pLTPb;
    if ((49 - 39) > z4Q0cZU)
        return (z4Q0cZU);
    else {
        k = z4Q0cZU % (47 - 37);
        z4Q0cZU = z4Q0cZU / (422 - 412);
        for (VF1vS4pLTPb = (466 - 465); z4Q0cZU >= VF1vS4pLTPb; VF1vS4pLTPb = VF1vS4pLTPb *(532 - 522))
            ;
        f = k * VF1vS4pLTPb +fold (z4Q0cZU);
        return (f);
    };
}

void  main () {
    int kqU4JfVW2u8T, n, VF1vS4pLTPb, Q2ADkzahZWRP, t = (236 - 236), k = (176 - 176);
    scanf ("%d%d", &kqU4JfVW2u8T, &n);
    if (!((913 - 913) != kqU4JfVW2u8T % (710 - 708)))
        kqU4JfVW2u8T++;
    for (VF1vS4pLTPb = kqU4JfVW2u8T; VF1vS4pLTPb <= n;) {
        if (VF1vS4pLTPb % (253 - 251) == (753 - 753))
            goto a1;
        for (Q2ADkzahZWRP = (297 - 294); Q2ADkzahZWRP < sqrt (VF1vS4pLTPb) + (909 - 908); Q2ADkzahZWRP += (380 - 378))
            if (VF1vS4pLTPb % Q2ADkzahZWRP == (883 - 883))
                goto a1;
        t = fold (VF1vS4pLTPb);
        if (t == VF1vS4pLTPb) {
            if (k == (745 - 745)) {
                k++;
                printf ("%d", VF1vS4pLTPb);
            }
            else
                printf (",%d", VF1vS4pLTPb);
        }
    a1 :
        VF1vS4pLTPb = VF1vS4pLTPb +2;
    }
    if (k == (353 - 353))
        ;
}

