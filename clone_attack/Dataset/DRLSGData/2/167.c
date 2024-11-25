void  main () {
    int i;
    int e4Ilhdxj8;
    char EUmJEOxH [27];
    int CfQbYR38;
    int WryAJO6oBTb;
    int j5IKmO6M [(264 - 238)] [MAX] = {(391 - 391)};
    int sBGhjNmXfD2O [(1001 - 975)] = {(156 - 156)};
    int DwXHlQ;
    int FduJ0r;
    int idQkUIEZ;
    scanf ("%d", &idQkUIEZ);
    for (i = (531 - 531); idQkUIEZ > i; i++) {
        scanf ("%d %s", &WryAJO6oBTb, EUmJEOxH);
        FduJ0r = strlen (EUmJEOxH);
        {
            e4Ilhdxj8 = (784 - 784);
            for (; FduJ0r > e4Ilhdxj8;) {
                sBGhjNmXfD2O[EUmJEOxH[e4Ilhdxj8] - (907 - 842)]++;
                j5IKmO6M[EUmJEOxH[e4Ilhdxj8] - (306 - 241)][i] = WryAJO6oBTb;
                e4Ilhdxj8++;
            }
        }
    }
    CfQbYR38 = (179 - 179);
    {
        e4Ilhdxj8 = (465 - 465);
        while (e4Ilhdxj8 < (817 - 791)) {
            if (CfQbYR38 < sBGhjNmXfD2O[e4Ilhdxj8]) {
                CfQbYR38 = sBGhjNmXfD2O[e4Ilhdxj8];
                DwXHlQ = e4Ilhdxj8;
            }
            e4Ilhdxj8++;
        }
    }
    printf ("%c\n%d\n", DwXHlQ +65, sBGhjNmXfD2O[DwXHlQ]);
    for (i = (568 - 568); idQkUIEZ > i; i++) {
        if (j5IKmO6M[DwXHlQ][i] != 0)
            printf ("%d\n", j5IKmO6M[DwXHlQ][i]);
    }
}

