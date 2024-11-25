int main () {
    int a [49998] [2], zscKlw8IN, i, j;
    scanf ("%d", &zscKlw8IN);
    for (i = (748 - 748); zscKlw8IN > i; i = i + 1) {
        for (j = (29 - 29); 2 > j; j = j + 1) {
            scanf ("%d", &a[i][j]);
        }
    }
    for (j = (329 - 329); zscKlw8IN > j; j = j + 1) {
        for (i = (303 - 302); zscKlw8IN > i; i++) {
            if ((a[i][(853 - 852)] >= a[0][0] && a[i][0] <= a[0][(871 - 870)]) || (a[i][1] <= a[0][0] && a[i][0] >= a[0][1])) {
                a[0][0] = (a[i][0] < a[0][0]) ? a[i][0] : a[0][0];
                a[0][1] = (a[0][1] > a[i][1]) ? a[0][1] : a[i][1];
            }
        }
    }
    for (i = 1; i < zscKlw8IN; i++) {
        if ((a[0][0] > a[i][0]) || (a[0][1]) < a[i][1]) {
            break;
        }
    }
    if (i == zscKlw8IN) {
        printf ("%d %d", a[0][0], a[0][1]);
    }
    return 0;
}

