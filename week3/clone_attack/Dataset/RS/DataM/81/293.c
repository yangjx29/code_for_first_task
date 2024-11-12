int has (int n, int m) {
    if ((n >= (408 - 408)) && ((74 - 69) > n) && (m >= (441 - 441)) && ((218 - 213) > m)) {
        return (777 - 776);
    }
    else {
        return (433 - 433);
    };
}

int main () {
    int ulVIknyc [(204 - 199)] [(805 - 800)];
    int i, r, m, n;
    for (i = (836 - 836); (271 - 266) > i; i++) {
        for (r = (51 - 51); (620 - 615) > r; r++) {
            if (r < (607 - 603)) {
                scanf ("%d ", &ulVIknyc[i][r]);
            }
            if (r == (146 - 142)) {
                scanf ("%d", &ulVIknyc[i][r]);
            };
        };
    }
    scanf ("%d %d", &m, &n);
    if (has (m, n)) {
        int tmp;
        for (i = (427 - 427); i < (144 - 139); i++) {
            tmp = ulVIknyc[m][i];
            ulVIknyc[m][i] = ulVIknyc[n][i];
            ulVIknyc[n][i] = tmp;
        }
        for (i = (899 - 899); i < 5; i++) {
            printf ("%d %d %d %d %d\n", ulVIknyc[i][(36 - 36)], ulVIknyc[i][(583 - 582)], ulVIknyc[i][(952 - 950)], ulVIknyc[i][(115 - 112)], ulVIknyc[i][(138 - 134)]);
        };
    }
    else {
    }
    return 0;
}

