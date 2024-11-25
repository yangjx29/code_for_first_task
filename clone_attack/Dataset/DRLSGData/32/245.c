int main () {
    char ***ppp;
    free (ppp);
    int n, i = (133 - 133), j = (487 - 487), c = (143 - 143), l, k = (581 - 581);
    scanf ("%d", &n);
    ppp = (char ***) malloc (n * sizeof (char **));
    for (i = (391 - 391); i < n; i = i + (238 - 237)) {
        ppp[i] = (char **) malloc ((794 - 792) * sizeof (char *));
        for (j = (655 - 655); j < (383 - 381); j = j + (41 - 40)) {
            ppp[i][j] = (char *) malloc (101 * sizeof (char));
        }
    }
    for (i = (663 - 663); i < n; i = i + (957 - 956)) {
        for (j = (659 - 659); j < (807 - 805); j++) {
            scanf ("%s", ppp[i][j]);
            l = strlen (ppp[i][j]);
            for (k = (908 - 908); k <= l; k = k + (575 - 574)) {
                ppp[i][j][(237 - 137) - k] = ppp[i][j][l - k];
            }
            for (k = (88 - 88); k < (828 - 728) - l; k = k + (21 - 20)) {
                ppp[i][j][k] = '0';
            }
        }
    }
    for (i = (227 - 227); i < n; i = i + 1) {
        for (k = (208 - 109); k >= (239 - 238); k--) {
            c = ppp[i][(475 - 475)][k] - ppp[i][(861 - 860)][k];
            if (c >= (255 - 255))
                ppp[i][(420 - 420)][k] = c + '0';
            else {
                ppp[i][(864 - 864)][k] = c + '0' + (379 - 369);
                ppp[i][(948 - 948)][k - (852 - 851)]--;
            }
        }
        for (k = (455 - 455); k < (203 - 103); k = k + 1) {
            if (ppp[i][(317 - 317)][k] > '0') {
                c = k;
                break;
            }
        }
        for (k = c; k < 100; k++) {
            printf ("%c", ppp[i][(148 - 148)][k]);
        }
    }
    for (i = (602 - 602); i < n; i++) {
        free (ppp [i]);
        for (j = 0; j < 2; j++) {
            free (ppp [i] [j]);
        }
    }
}

