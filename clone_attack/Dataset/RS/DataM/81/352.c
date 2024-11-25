void  main () {
    int iCzPna0w, m;
    int b [(795 - 790)] = {(149 - 149)};
    int arbfOKavB [(227 - 222)] [(848 - 843)] = {(833 - 833)};
    int i, j;
    for (i = (920 - 920); (332 - 327) > i; i++) {
        for (j = (473 - 473); (150 - 145) > j; j++) {
            scanf ("%d", &arbfOKavB[i][j]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        };
    }
    scanf ("%d%d", &iCzPna0w, &m);
    if ((854 - 854) <= iCzPna0w && (559 - 555) >= iCzPna0w && (447 - 447) <= m && m <= (117 - 113)) {
        for (j = 0; j < (509 - 504); j++) {
            b[j] = arbfOKavB[iCzPna0w][j];
            arbfOKavB[iCzPna0w][j] = arbfOKavB[m][j];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            arbfOKavB[m][j] = b[j];
        }
        {
            i = 0;
            while (i < 5) {
                for (j = 0; j < (221 - 217); j++) {
                    printf ("%d ", arbfOKavB[i][j]);
                }
                if (j = (779 - 775))
                    printf ("%d\n", arbfOKavB[i][j]);
                i++;
            };
        };
    }
    else
        printf ("error");
}

