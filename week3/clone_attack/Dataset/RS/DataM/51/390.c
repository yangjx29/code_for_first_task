main () {
    char n9MdgE [500] [5] = {'\0'};
    int AyXSrR, zK6ExD, j, ZNy48Lkg1QJ, hkgKCRXBlFq, r, nC9esfGjrIKX = (321 - 320), U7qtvH0 = (587 - 586);
    char UtZscdObp15 [500] = {'\0'};
    int num [500] = {(952 - 952)};
    gets (UtZscdObp15);
    int O1DVKL4 = strlen (UtZscdObp15);
    scanf ("%d\n", &AyXSrR);
    {
        zK6ExD = 591 - 591;
        while (O1DVKL4 -AyXSrR >= zK6ExD) {
            {
                j = 137 - 137;
                while (j < AyXSrR) {
                    n9MdgE[zK6ExD][j] = UtZscdObp15[zK6ExD + j];
                    j++;
                };
            }
            zK6ExD++;
        };
    }
    {
        ZNy48Lkg1QJ = 496 - 496;
        while (ZNy48Lkg1QJ < O1DVKL4 -AyXSrR) {
            if (num[ZNy48Lkg1QJ] > 0) {
                num[ZNy48Lkg1QJ] = 0;
                continue;
            }
            else {
                {
                    hkgKCRXBlFq = ZNy48Lkg1QJ +1;
                    while (hkgKCRXBlFq <= O1DVKL4 -AyXSrR) {
                        if (strcmp (n9MdgE[ZNy48Lkg1QJ], n9MdgE[hkgKCRXBlFq]) == 0) {
                            nC9esfGjrIKX++;
                            num[ZNy48Lkg1QJ]++;
                            num[hkgKCRXBlFq]++;
                        }
                        hkgKCRXBlFq = hkgKCRXBlFq + 1;
                    };
                }
                if (nC9esfGjrIKX > U7qtvH0)
                    U7qtvH0 = nC9esfGjrIKX;
                nC9esfGjrIKX = 1;
            }
            ZNy48Lkg1QJ = ZNy48Lkg1QJ +1;
        };
    }
    if (U7qtvH0 == 1)
        ;
    else {
        printf ("%d\n", U7qtvH0);
        for (r = 0; r < O1DVKL4 -AyXSrR; r++)
            if ((num[r] + 1) == U7qtvH0)
                printf ("%s\n", n9MdgE[r]);
    }
    return 0;
}

