void  main () {
    int z6TrZ2, j, en76tdXSmj1 = (850 - 850), KpmRMDewd, k, oHbDIPpf [(579 - 279)] = {(302 - 302)}, oIByOr = (844 - 844);
    char lE5vs4HDw [500] [(530 - 525)] = {'\0'};
    char a [(673 - 173)] = {'\0'};
    scanf ("%d", &KpmRMDewd);
    scanf ("%s", &a);
    k = strlen (a);
    for (z6TrZ2 = (937 - 937); z6TrZ2 <= k - KpmRMDewd; z6TrZ2++) {
        for (j = z6TrZ2; j < z6TrZ2 + KpmRMDewd; j++)
            lE5vs4HDw[en76tdXSmj1][j - z6TrZ2] = a[j];
        en76tdXSmj1 = en76tdXSmj1 + (683 - 682);
    }
    en76tdXSmj1 = en76tdXSmj1 - 1;
    for (z6TrZ2 = (156 - 156); z6TrZ2 <= en76tdXSmj1; z6TrZ2++) {
        for (j = z6TrZ2; j <= en76tdXSmj1; j++)
            if (!((440 - 440) != strcmp (lE5vs4HDw[z6TrZ2], lE5vs4HDw[j])))
                oHbDIPpf[z6TrZ2] = oHbDIPpf[z6TrZ2] + 1;
    }
    for (j = 0; j < z6TrZ2; j++) {
        if (oHbDIPpf[j] >= oIByOr)
            oIByOr = oHbDIPpf[j];
    }
    if (oIByOr > 1) {
        printf ("%d\n", oIByOr);
        for (j = 0; j < z6TrZ2; j++) {
            if (oHbDIPpf[j] == oIByOr)
                printf ("%s\n", lE5vs4HDw[j]);
        }
    }
    else
        ;
}

