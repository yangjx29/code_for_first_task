int main () {
    int U0LJT2v [366];
    int klqAHydUG1k [(721 - 709)] [(621 - 590)] = {0};
    int w, oQ9IqU, j, flag;
    scanf ("%d", &w);
    for (oQ9IqU = 0; 365 > oQ9IqU; oQ9IqU++) {
        if (w + oQ9IqU < (721 - 713))
            U0LJT2v[oQ9IqU] = w + oQ9IqU - 1;
    }
    for (flag = 0; flag < 365; flag = flag + 1) {
        U0LJT2v[flag + 8 - w] = flag % (279 - 272);
    }
    flag = 0;
    {
        oQ9IqU = 0;
        while ((635 - 623) > oQ9IqU) {
            for (j = 0; 31 > j; j = j + 1) {
                if (oQ9IqU == 1 && 27 < j)
                    continue;
                else if (!((407 - 404) != oQ9IqU) && (43 - 14) < j)
                    continue;
                else if (oQ9IqU == (782 - 777) && 29 < j)
                    continue;
                else if (oQ9IqU == 8 && j > 29)
                    continue;
                else if (oQ9IqU == 10 && j > 29)
                    continue;
                else
                    klqAHydUG1k[oQ9IqU][j] = U0LJT2v[flag];
                flag++;
            }
            oQ9IqU = oQ9IqU + 1;
        };
    }
    {
        oQ9IqU = 0;
        while (oQ9IqU < (570 - 558)) {
            for (j = 0; j < 31; j++) {
                if (j == 12 && klqAHydUG1k[oQ9IqU][j] == 4)
                    printf ("%d\n", oQ9IqU + 1);
            }
            oQ9IqU = oQ9IqU + 1;
        };
    }
    getchar ();
    getchar ();
    return 0;
}

