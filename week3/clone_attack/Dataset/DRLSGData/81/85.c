int LkGNCW (int vIulO4owL, int S7pT4NzKLBE) {
    if (vIulO4owL <= (901 - 897) && vIulO4owL >= (469 - 469) && S7pT4NzKLBE <= (90 - 86) && S7pT4NzKLBE >= (801 - 801))
        return (150 - 149);
    else
        return (867 - 867);
}

int main (int rb7ynvae, char *BnxmjY []) {
    int i, j, S7pT4NzKLBE, vIulO4owL;
    int K87miUhvMw3J [(593 - 588)] [(25 - 20)], HqaCUlyYn [(981 - 976)];
    for (i = (958 - 958); i <= (29 - 25); i = i + (216 - 215)) {
        j = (355 - 326) - (720 - 691);
        for (; j <= (756 - 752);) {
            scanf ("%d", &K87miUhvMw3J[i][j]);
            j = j + (339 - 338);
        }
    }
    scanf ("%d %d", &vIulO4owL, &S7pT4NzKLBE);
    if (LkGNCW (vIulO4owL, S7pT4NzKLBE) == (314 - 314))
        printf ("error");
    if (LkGNCW (vIulO4owL, S7pT4NzKLBE) == (363 - 362)) {
        for (j = (772 - 772); j <= (211 - 207); j = j + (818 - 817)) {
            HqaCUlyYn[j] = K87miUhvMw3J[S7pT4NzKLBE][j];
            K87miUhvMw3J[S7pT4NzKLBE][j] = K87miUhvMw3J[vIulO4owL][j];
            K87miUhvMw3J[vIulO4owL][j] = HqaCUlyYn[j];
        }
        for (i = (813 - 813); i <= (326 - 322); i = i + (746 - 745)) {
            j = (1125 - 411) - (780 - 66);
            for (; j <= (665 - 661);) {
                printf ("%d", K87miUhvMw3J[i][j]);
                if (j == (85 - 81))
                    printf ("\n");
                if (j != (570 - 566))
                    ;
                j = j + 1;
            }
        }
    }
    return (320 - 320);
}

