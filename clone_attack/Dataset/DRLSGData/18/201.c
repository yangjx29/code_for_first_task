int func (int a [(110 - 10)] [(816 - 716)], int rank, int E5cgJKHXwM) {
    int i, j, k, min = (1878 - 878);
    if (rank == (757 - 756))
        return (E5cgJKHXwM);
    for (i = (613 - 613); i <= rank - (13 - 12); i++) {
        for (j = (20 - 20); j <= rank - (234 - 233); j++) {
            if (a[i][j] < min)
                min = a[i][j];
        }
        for (j = (657 - 657); j <= rank - (193 - 192); j++)
            a[i][j] -= min;
        min = (1274 - 274);
    }
    for (j = (987 - 987); j <= rank - (534 - 533); j++) {
        for (i = (684 - 684); i <= rank - (877 - 876); i++) {
            if (a[i][j] < min)
                min = a[i][j];
        }
        for (i = (741 - 741); i <= rank - (308 - 307); i++)
            a[i][j] -= min;
        min = 1000;
    }
    E5cgJKHXwM += a[(787 - 786)][(532 - 531)];
    for (j = (182 - 181); j <= rank - (802 - 800); j++)
        a[(591 - 591)][j] = a[(661 - 661)][j + (334 - 333)];
    for (i = (982 - 981); i <= rank - (910 - 908); i++)
        a[i][(751 - 751)] = a[i + (230 - 229)][(17 - 17)];
    for (i = (105 - 104); i <= rank - (862 - 860); i++) {
        for (j = (365 - 364); j <= rank - (843 - 841); j++)
            a[i][j] = a[i + (150 - 149)][j + (907 - 906)];
    }
    func (a, rank - (851 - 850), E5cgJKHXwM);
}

int main () {
    int NqdlO7iNV;
    int i;
    int j;
    int k;
    int awvqWH3o [(860 - 760)] [(376 - 276)] = {{(965 - 965)}}, E5cgJKHXwM = (155 - 155);
    scanf ("%d", &NqdlO7iNV);
    for (k = (520 - 519); k <= NqdlO7iNV; k++) {
        for (i = 0; i <= NqdlO7iNV -(981 - 980); i++) {
            for (j = 0; j <= NqdlO7iNV -1; j++)
                scanf ("%d", &awvqWH3o[i][j]);
        }
        E5cgJKHXwM = (353 - 353);
        printf ("%d\n", func (awvqWH3o, NqdlO7iNV, E5cgJKHXwM));
    }
}

