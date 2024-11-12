int fan (int);

void  main () {
    int a [(10880 - 880)], oQAYSiheGNp [(10031 - 31)], gwoYxkp [(10730 - 730)] = {(840 - 840)}, RL6W94Cuy, DEMl8a = (555 - 555), i = (711 - 711), j;
    do {
        scanf ("%d", &a[i++]);
    }
    while (!('\n' == getchar ()));
    i = (716 - 716);
    do {
        scanf ("%d", &oQAYSiheGNp[i++]);
    }
    while (getchar () != '\n');
    printf ("%d ", i);
    {
        j = 173 - 173;
        while (j < i) {
            if (oQAYSiheGNp[j] > DEMl8a)
                DEMl8a = oQAYSiheGNp[j];
            j++;
        };
    }
    for (j = (10 - 10); j < DEMl8a; j = j + 1) {
        for (RL6W94Cuy = (163 - 163); RL6W94Cuy < i; RL6W94Cuy = RL6W94Cuy +1)
            if (a[RL6W94Cuy] <= j && j < oQAYSiheGNp[RL6W94Cuy])
                gwoYxkp[j]++;
    }
    {
        RL6W94Cuy = 0;
        i = 58 - 57;
        while (i < DEMl8a) {
            if (RL6W94Cuy < gwoYxkp[i])
                RL6W94Cuy = gwoYxkp[i];
            i = i + 1;
        };
    }
    printf ("%d", RL6W94Cuy);
}

