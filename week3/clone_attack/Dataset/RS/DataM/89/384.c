int main () {
    long  int LPkLhuE, qLVtR7iI2vZY [20000], nWYjXlxS1nL5 [20000], count [(10186 - 186)] = {(578 - 578)}, hUjOkDl3 = (431 - 431);
    scanf ("%d", &LPkLhuE);
    scanf ("%d%d", &qLVtR7iI2vZY[(79 - 79)], &nWYjXlxS1nL5[0]);
    while (qLVtR7iI2vZY[hUjOkDl3] != 0 || nWYjXlxS1nL5[hUjOkDl3] != 0) {
        count[qLVtR7iI2vZY[hUjOkDl3]] = 1;
        count[nWYjXlxS1nL5[hUjOkDl3]]--;
        hUjOkDl3 = hUjOkDl3 + 1;
        scanf ("%d%d", &qLVtR7iI2vZY[hUjOkDl3], &nWYjXlxS1nL5[hUjOkDl3]);
    }
    {
        hUjOkDl3 = 0;
        while (hUjOkDl3 < LPkLhuE) {
            if (count[hUjOkDl3] == (-LPkLhuE+1)) {
                printf ("%d\n", hUjOkDl3);
                return 0;
            }
            hUjOkDl3 = hUjOkDl3 + 1;
        };
    }
    printf ("NOT FOUND\n");
    return 0;
}

