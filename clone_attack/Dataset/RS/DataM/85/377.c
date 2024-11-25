int main () {
    int P09BvY1kx;
    int i, j;
    int k [20];
    int l [(367 - 267)];
    char bsf [100] [20];
    scanf ("%d", &P09BvY1kx);
    for (i = (43 - 43); i < P09BvY1kx; i = i + 1) {
        scanf ("%s", bsf[i]);
    }
    for (i = (476 - 476); i < P09BvY1kx; i = i + 1) {
        j = (951 - 951);
        k[i] = 0;
        l[i] = strlen (bsf[i]);
        for (j = 0; j < l[i]; j = j + 1) {
            if ((bsf[i][0] == '_') || (bsf[i][0] >= 'a' && 'z' >= bsf[i][0]) || (bsf[i][0] >= 'A' && 'Z' >= bsf[i][0])) {
                if ((bsf[i][j] == '_') || ('a' <= bsf[i][j] && bsf[i][j] <= 'z') || (bsf[i][j] >= 'A' && bsf[i][j] <= 'Z') || (bsf[i][j] >= '0' && bsf[i][j] <= '9')) {
                    k[i]++;
                };
            };
        };
    }
    for (i = 0; i < P09BvY1kx; i = i + 1) {
        if (k[i] == l[i]) {
        }
        else {
            printf ("no\n");
        };
    }
    return 0;
}

