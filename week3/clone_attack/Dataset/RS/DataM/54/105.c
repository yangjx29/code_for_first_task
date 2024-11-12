void  main () {
    int AdsuXP2, oxAFZnuzMhk, m, i, j;
    scanf ("%d %d", &AdsuXP2, &oxAFZnuzMhk);
    for (i = 1; 10000000 > i; i++) {
        m = AdsuXP2 *i + oxAFZnuzMhk;
        j = 1;
        while (AdsuXP2 > j) {
            if (m % (AdsuXP2 -1) == (968 - 968)) {
                m = (m * AdsuXP2) / (AdsuXP2 -1) + oxAFZnuzMhk;
                j = j + 1;
            }
            else
                break;
        }
        if (j == AdsuXP2)
            break;
    }
    printf ("%d\n", m);
}

