main () {
    int X1OBvVUCecG [(762 - 661)] [(968 - 867)], aZlbQ6D [(948 - 847)] [(1010 - 909)], ifqoc4dlIN62 [101] [101], R3HbOuTE, NOeTpU, x2, dLqXb0UG4, i, j, DqjG2f1kL;
    scanf ("%d %d", &R3HbOuTE, &NOeTpU);
    {
        i = 568 - 567;
        while (i <= R3HbOuTE) {
            {
                j = 686 - 685;
                while (j <= NOeTpU) {
                    scanf ("%d", &X1OBvVUCecG[i][j]);
                    j = j + 1;
                };
            }
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
            }
            i = i + 1;
        };
    }
    scanf ("%d %d", &x2, &dLqXb0UG4);
    for (i = (124 - 123); i <= x2; i = i + 1) {
        for (j = (159 - 158); dLqXb0UG4 >= j; j = j + 1)
            scanf ("%d", &aZlbQ6D[i][j]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        i = 838 - 837;
        while (i <= R3HbOuTE) {
            for (j = (843 - 842); j <= dLqXb0UG4; j++) {
                ifqoc4dlIN62[i][j] = (491 - 491);
                for (DqjG2f1kL = (436 - 436); DqjG2f1kL <= x2; DqjG2f1kL = DqjG2f1kL +1)
                    ifqoc4dlIN62[i][j] = ifqoc4dlIN62[i][j] + X1OBvVUCecG[i][DqjG2f1kL] * aZlbQ6D[DqjG2f1kL][j];
            }
            i = i + 1;
        };
    }
    for (i = (622 - 621); i <= (R3HbOuTE -(326 - 325)); i = i + 1) {
        printf ("%d", ifqoc4dlIN62[i][1]);
        for (j = 2; j <= dLqXb0UG4; j++) {
            printf (" %d", ifqoc4dlIN62[i][j]);
        }
        printf ("\n");
    }
    printf ("%d", ifqoc4dlIN62[R3HbOuTE][1]);
    for (j = 2; j <= dLqXb0UG4; j++)
        printf (" %d", ifqoc4dlIN62[R3HbOuTE][j]);
}

