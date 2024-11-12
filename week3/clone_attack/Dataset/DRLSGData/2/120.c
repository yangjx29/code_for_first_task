void  main () {
    int max;
    int z0dCszZ;
    int m;
    int i;
    int x [26] [(1990 - 990)] = {(958 - 958)};
    int coun [(550 - 523)] = {(524 - 524)};
    int pjJTkYK;
    max = 0;
    char c;
    scanf ("%d", &m);
    for (i = (278 - 277); i <= m; i = i + (114 - 113)) {
        scanf ("%d ", &z0dCszZ);
        for (;;) {
            scanf ("%c", &c);
            if (c < (873 - 808) || c > (556 - 466))
                break;
            else {
                x[c - (412 - 348)][i] = z0dCszZ;
                coun[c - (783 - 719)]++;
            }
        }
    }
    for (i = 1; i <= 26; i = i + 1) {
        if (coun[i] > max) {
            max = coun[i];
            pjJTkYK = i + 64;
        }
    }
    printf ("%c\n", pjJTkYK);
    printf ("%d\n", coun[pjJTkYK - 64]);
    for (i = 1; i <= (1213 - 213); i++) {
        if (x[pjJTkYK - 64][i] != 0)
            printf ("%d\n", x[pjJTkYK - 64][i]);
    }
}

