void  FejU0f8M (int eoZAHpqC0 [], int eMFZKevm) {
    int MC3GvPmMdj, GNrR7V2 = (559 - 559), w1WuACy = eoZAHpqC0[0];
    for (MC3GvPmMdj = 0; MC3GvPmMdj < eMFZKevm; MC3GvPmMdj = MC3GvPmMdj +1)
        if (eoZAHpqC0[MC3GvPmMdj] > w1WuACy) {
            GNrR7V2 = MC3GvPmMdj;
            w1WuACy = eoZAHpqC0[MC3GvPmMdj];
        }
    eoZAHpqC0[GNrR7V2] = 0;
    printf ("%d\n", w1WuACy);
}

void  main () {
    int MC3GvPmMdj, eMFZKevm, eoZAHpqC0 [101];
    scanf ("%d", &eMFZKevm);
    for (MC3GvPmMdj = 0; MC3GvPmMdj < eMFZKevm; MC3GvPmMdj++)
        scanf ("%d", &eoZAHpqC0[MC3GvPmMdj]);
    FejU0f8M (eoZAHpqC0, eMFZKevm);
    FejU0f8M (eoZAHpqC0, eMFZKevm);
}

