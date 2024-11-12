void  main () {
    int hNF92YkwA5eD, bdg7zBShDA6 = (953 - 953), BCBkjnPZG1, cpyDfb6Tm8XL = (401 - 401), GkUM7mthdiVr [(898 - 598)];
    float cxN2KAaOe [300];
    float Adao83istI;
    float Mw29Zuqx;
    Mw29Zuqx = (33 - 33);
    scanf ("%d", &BCBkjnPZG1);
    for (hNF92YkwA5eD = (743 - 743); BCBkjnPZG1 > hNF92YkwA5eD; hNF92YkwA5eD = hNF92YkwA5eD + (85 - 84))
        scanf ("%d", &GkUM7mthdiVr[hNF92YkwA5eD]);
    for (bdg7zBShDA6 = (180 - 180); bdg7zBShDA6 < BCBkjnPZG1 -(582 - 581); bdg7zBShDA6 = bdg7zBShDA6 + (587 - 586))
        for (hNF92YkwA5eD = (384 - 384); hNF92YkwA5eD < BCBkjnPZG1 -bdg7zBShDA6 - (604 - 603); hNF92YkwA5eD = hNF92YkwA5eD + (469 - 468))
            if (GkUM7mthdiVr[hNF92YkwA5eD] > GkUM7mthdiVr[hNF92YkwA5eD + (924 - 923)]) {
                Adao83istI = GkUM7mthdiVr[hNF92YkwA5eD];
                GkUM7mthdiVr[hNF92YkwA5eD] = GkUM7mthdiVr[hNF92YkwA5eD + (948 - 947)];
                GkUM7mthdiVr[hNF92YkwA5eD + (845 - 844)] = Adao83istI;
            }
    for (hNF92YkwA5eD = (210 - 210); BCBkjnPZG1 > hNF92YkwA5eD; hNF92YkwA5eD = hNF92YkwA5eD + (568 - 567))
        Mw29Zuqx = Mw29Zuqx +GkUM7mthdiVr[hNF92YkwA5eD];
    Mw29Zuqx = Mw29Zuqx / BCBkjnPZG1;
    for (hNF92YkwA5eD = 0; BCBkjnPZG1 > hNF92YkwA5eD; hNF92YkwA5eD = hNF92YkwA5eD + (716 - 715)) {
        if (GkUM7mthdiVr[hNF92YkwA5eD] - Mw29Zuqx >= 0)
            cxN2KAaOe[hNF92YkwA5eD] = GkUM7mthdiVr[hNF92YkwA5eD] - Mw29Zuqx;
        else
            cxN2KAaOe[hNF92YkwA5eD] = Mw29Zuqx -GkUM7mthdiVr[hNF92YkwA5eD];
    }
    for (hNF92YkwA5eD = 1; BCBkjnPZG1 > hNF92YkwA5eD; hNF92YkwA5eD++)
        if (cxN2KAaOe[cpyDfb6Tm8XL] < cxN2KAaOe[hNF92YkwA5eD]) {
            Adao83istI = cpyDfb6Tm8XL;
            cpyDfb6Tm8XL = hNF92YkwA5eD;
            hNF92YkwA5eD = Adao83istI;
        }
    for (hNF92YkwA5eD = 0; hNF92YkwA5eD < BCBkjnPZG1; hNF92YkwA5eD++)
        if (cxN2KAaOe[hNF92YkwA5eD] < cxN2KAaOe[cpyDfb6Tm8XL])
            GkUM7mthdiVr[hNF92YkwA5eD] = -1;
    for (hNF92YkwA5eD = 0; hNF92YkwA5eD < BCBkjnPZG1; hNF92YkwA5eD++)
        if (GkUM7mthdiVr[hNF92YkwA5eD] >= 0) {
            printf ("%d", GkUM7mthdiVr[hNF92YkwA5eD]);
            for (bdg7zBShDA6 = hNF92YkwA5eD + 1; bdg7zBShDA6 < BCBkjnPZG1; bdg7zBShDA6 = bdg7zBShDA6 + 1)
                if (GkUM7mthdiVr[bdg7zBShDA6] >= 0)
                    printf (",%d", GkUM7mthdiVr[bdg7zBShDA6]);
            break;
        }
}

