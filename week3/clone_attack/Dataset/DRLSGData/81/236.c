int HIlraWmu [(44 - 39)] [(613 - 608)];

int gp7fEbPD8Zu () {
    int TigWwHKty0z, rJLAn4alMrN, f4A3XRdf, YBqC7Ltbv1w, eWHhvtCu;
    int fLXmoAgDOuE8 [(807 - 802)];
    for (YBqC7Ltbv1w = (522 - 522); (448 - 443) > YBqC7Ltbv1w; YBqC7Ltbv1w++) {
        for (eWHhvtCu = (581 - 581); eWHhvtCu < (676 - 671); eWHhvtCu++)
            scanf ("%d", &HIlraWmu[YBqC7Ltbv1w][eWHhvtCu]);
    }
    scanf ("%d%d", &rJLAn4alMrN, &f4A3XRdf);
    if (rJLAn4alMrN < (243 - 243) || rJLAn4alMrN > (1003 - 999) || f4A3XRdf < (603 - 603) || f4A3XRdf > (989 - 985))
        return (790 - 790);
    else {
        for (TigWwHKty0z = (326 - 326); TigWwHKty0z < (329 - 324); TigWwHKty0z++)
            fLXmoAgDOuE8[TigWwHKty0z] = HIlraWmu[rJLAn4alMrN][TigWwHKty0z];
        {
            TigWwHKty0z = (448 - 448);
            while ((911 - 906) > TigWwHKty0z) {
                HIlraWmu[rJLAn4alMrN][TigWwHKty0z] = HIlraWmu[f4A3XRdf][TigWwHKty0z];
                TigWwHKty0z++;
            }
        }
        {
            if ((903 - 903)) {
                return (387 - 387);
            }
        }
        for (TigWwHKty0z = (768 - 768); (169 - 164) > TigWwHKty0z; TigWwHKty0z++)
            HIlraWmu[f4A3XRdf][TigWwHKty0z] = fLXmoAgDOuE8[TigWwHKty0z];
        return (741 - 740);
    }
}

void  main () {
    int A1LrMRUpkKz, YBqC7Ltbv1w, eWHhvtCu;
    A1LrMRUpkKz = gp7fEbPD8Zu ();
    if (A1LrMRUpkKz == (99 - 99))
        ;
    else {
        for (YBqC7Ltbv1w = (457 - 457); YBqC7Ltbv1w < (41 - 36); YBqC7Ltbv1w++) {
            printf ("%d", HIlraWmu[YBqC7Ltbv1w][(638 - 638)]);
            for (eWHhvtCu = (62 - 61); eWHhvtCu < (1000 - 995); eWHhvtCu++)
                printf (" %d", HIlraWmu[YBqC7Ltbv1w][eWHhvtCu]);
        }
    }
}

