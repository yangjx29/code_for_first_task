int main () {
    char zfc [1000] [(814 - 514)];
    int n6g87Lfnvaq, i, j;
    scanf ("%d", &n6g87Lfnvaq);
    {
        i = 225 - 225;
        while (i < n6g87Lfnvaq) {
            scanf ("%s", zfc[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n6g87Lfnvaq) {
            for (j = 0; zfc[i][j] != '\0'; j++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                if (zfc[i][j] == 'A') {
                    zfc[i][j] = 'T';
                }
                else if (zfc[i][j] == 'T') {
                    zfc[i][j] = 'A';
                }
                else if (zfc[i][j] == 'C') {
                    zfc[i][j] = 'G';
                }
                else if (zfc[i][j] == 'G') {
                    zfc[i][j] = 'C';
                };
            }
            i++;
        };
    }
    for (i = 0; i < n6g87Lfnvaq - 1; i = i + 1) {
        printf ("%s\n", zfc[i]);
    }
    printf ("%s", zfc[n6g87Lfnvaq - 1]);
    return 0;
}

