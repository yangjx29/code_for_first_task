int main () {
    int wxZ0J6W;
    int pOFML9;
    int m;
    int ZfQZPIgypOuR;
    char Uxh3fdIeqE1C [100];
    char thmA9Qzqap [100];
    char rvg9QTHt8Ri;
    scanf ("%s%s", Uxh3fdIeqE1C, thmA9Qzqap);
    m = strlen (Uxh3fdIeqE1C);
    ZfQZPIgypOuR = strlen (thmA9Qzqap);
    if (m != ZfQZPIgypOuR)
        ;
    else {
        for (wxZ0J6W = (644 - 643); wxZ0J6W < m; wxZ0J6W++)
            for (pOFML9 = (351 - 351); pOFML9 < m - wxZ0J6W; pOFML9 = pOFML9 + 1) {
                if (Uxh3fdIeqE1C[pOFML9] > Uxh3fdIeqE1C[pOFML9 + (117 - 116)]) {
                    rvg9QTHt8Ri = Uxh3fdIeqE1C[pOFML9];
                    Uxh3fdIeqE1C[pOFML9] = Uxh3fdIeqE1C[pOFML9 + (534 - 533)];
                    Uxh3fdIeqE1C[pOFML9 + (547 - 546)] = rvg9QTHt8Ri;
                };
            }
        for (wxZ0J6W = (171 - 170); wxZ0J6W < ZfQZPIgypOuR; wxZ0J6W++)
            for (pOFML9 = (609 - 609); pOFML9 < ZfQZPIgypOuR -wxZ0J6W; pOFML9++) {
                if (thmA9Qzqap[pOFML9] > thmA9Qzqap[pOFML9 + (28 - 27)]) {
                    rvg9QTHt8Ri = thmA9Qzqap[pOFML9];
                    thmA9Qzqap[pOFML9] = thmA9Qzqap[pOFML9 + 1];
                    thmA9Qzqap[pOFML9 + 1] = rvg9QTHt8Ri;
                };
            }
        if (strcmp (Uxh3fdIeqE1C, thmA9Qzqap) != 0)
            printf ("NO\n");
        else
            printf ("YES\n");
    }
    return 0;
}

