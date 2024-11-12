int main () {
    int i, hHzQamA, m, nVJXCf, k = (284 - 284), h;
    char an [(1087 - 831)];
    char X7zhcqC [256];
    char ce [256];
    gets (an);
    gets (X7zhcqC);
    gets (ce);
    m = strlen (an);
    nVJXCf = strlen (X7zhcqC);
    h = strlen (ce);
    for (i = 0; m > i; i++) {
        if (!(X7zhcqC[0] != an[i])) {
            for (hHzQamA = (33 - 32); nVJXCf > hHzQamA; hHzQamA = hHzQamA + 1) {
                if (X7zhcqC[hHzQamA] != an[i + hHzQamA]) {
                    break;
                };
            }
            if (hHzQamA == nVJXCf) {
                for (k = 0; k < i; k = k + 1)
                    printf ("%c", an[k]);
                for (k = 0; k < h; k = k + 1) {
                    printf ("%c", ce[k]);
                }
                for (k = i + nVJXCf; k < m; k++) {
                    printf ("%c", an[k]);
                }
                break;
            };
        };
    }
    if (k != m) {
        printf ("%s", an);
    }
    return 0;
}

