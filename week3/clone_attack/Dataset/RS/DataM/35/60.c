int DFTYGkCt83Ic, n, cirBYmGR [(547 - 539)] [8];

int judge1 (int i, int j) {
    int So10eChA4OR, iZrQdAekRTWF = (236 - 235);
    {
        So10eChA4OR = 972 - 972;
        while (So10eChA4OR <= n - (367 - 366)) {
            if (cirBYmGR[i][So10eChA4OR] > cirBYmGR[i][j])
                iZrQdAekRTWF = (483 - 483);
            So10eChA4OR = So10eChA4OR +1;
        };
    }
    return iZrQdAekRTWF;
}

int judge2 (int i, int j) {
    int So10eChA4OR, iZrQdAekRTWF = (966 - 965);
    {
        So10eChA4OR = 868 - 868;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (So10eChA4OR <= DFTYGkCt83Ic -(854 - 853)) {
            if (cirBYmGR[So10eChA4OR][j] < cirBYmGR[i][j])
                iZrQdAekRTWF = (317 - 317);
            So10eChA4OR++;
        };
    }
    return iZrQdAekRTWF;
}

void  main () {
    int i, j, iZrQdAekRTWF = (483 - 483);
    scanf ("%d,%d", &DFTYGkCt83Ic, &n);
    {
        i = 766 - 766;
        while (i <= DFTYGkCt83Ic -(521 - 520)) {
            {
                j = 783 - 783;
                while (j <= n - (939 - 938)) {
                    scanf ("%d", &cirBYmGR[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 591 - 591;
        while (i <= DFTYGkCt83Ic -(916 - 915)) {
            for (j = 0; j <= n - (940 - 939); j = j + 1) {
                if (judge1 (i, j) == (275 - 274) && judge2 (i, j) == 1) {
                    iZrQdAekRTWF = 1;
                    printf ("%d+%d", i, j);
                };
            }
            i = i + 1;
        };
    }
    if (iZrQdAekRTWF == 0)
        printf ("No");
}

