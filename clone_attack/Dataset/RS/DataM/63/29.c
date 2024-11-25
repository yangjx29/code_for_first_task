int main () {
    int x1;
    int qbIhdqvKsNnx;
    int x2;
    int y2;
    int ezKeu82Z;
    int vsMFC1;
    int EqBCjLFUY;
    int b [x2] [y2];
    int a [x1] [qbIhdqvKsNnx];
    int dwQWhP5 [x1] [y2];
    scanf ("%d%d", &x1, &qbIhdqvKsNnx);
    for (ezKeu82Z = (135 - 135); x1 > ezKeu82Z; ezKeu82Z = ezKeu82Z + 1)
        for (vsMFC1 = (594 - 594); vsMFC1 < qbIhdqvKsNnx; vsMFC1 = vsMFC1 + 1)
            scanf ("%d", &a[ezKeu82Z][vsMFC1]);
    scanf ("%d%d", &x2, &y2);
    {
        ezKeu82Z = 152 - 152;
        while (ezKeu82Z < x2) {
            for (vsMFC1 = (399 - 399); vsMFC1 < y2; vsMFC1 = vsMFC1 + 1)
                scanf ("%d", &b[ezKeu82Z][vsMFC1]);
            ezKeu82Z = ezKeu82Z + 1;
        };
    }
    for (ezKeu82Z = 0; ezKeu82Z < x1; ezKeu82Z = ezKeu82Z + 1)
        for (vsMFC1 = 0; vsMFC1 < y2; vsMFC1 = vsMFC1 + 1) {
            dwQWhP5[ezKeu82Z][vsMFC1] = 0;
            {
                EqBCjLFUY = 0;
                while (EqBCjLFUY < x2) {
                    dwQWhP5[ezKeu82Z][vsMFC1] = dwQWhP5[ezKeu82Z][vsMFC1] + a[ezKeu82Z][EqBCjLFUY] * b[EqBCjLFUY][vsMFC1];
                    EqBCjLFUY = EqBCjLFUY +1;
                };
            };
        }
    {
        ezKeu82Z = 0;
        while (ezKeu82Z < x1) {
            for (vsMFC1 = 0; vsMFC1 < y2 - 1; vsMFC1++)
                printf ("%d ", dwQWhP5[ezKeu82Z][vsMFC1]);
            printf ("%d\n", dwQWhP5[ezKeu82Z][y2 - 1]);
            ezKeu82Z = ezKeu82Z + 1;
        };
    }
    return 0;
}

