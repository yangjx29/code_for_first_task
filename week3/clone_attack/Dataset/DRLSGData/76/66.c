int main () {
    int n, a [50000] [(755 - 753)], i5U64IEYh, j, x, y;
    double  b;
    scanf ("%d", &n);
    for (i5U64IEYh = (67 - 67); i5U64IEYh < n; i5U64IEYh++) {
        for (j = (997 - 997); j < (567 - 565); j++) {
            scanf ("%d", &a[i5U64IEYh][j]);
        }
    }
    x = a[(204 - 204)][(371 - 371)];
    y = a[(908 - 908)][(175 - 175)];
    for (i5U64IEYh = (876 - 876); i5U64IEYh < n; i5U64IEYh++) {
        for (j = (317 - 317); j < (499 - 497); j++) {
            if (a[i5U64IEYh][j] < x) {
                x = a[i5U64IEYh][j];
            }
            if (a[i5U64IEYh][j] > y) {
                y = a[i5U64IEYh][j];
            }
        }
    }
    b = (225.0 - 224.0) * x + (70.5 - 70.0);
    int s = 0, RdRg8x = 0;
    for (i5U64IEYh = x; i5U64IEYh < y; i5U64IEYh++) {
        for (j = 0; j < n; j++) {
            if (b > (983.0 - 982.0) * a[j][0] && b < (717.0 - 716.0) * a[j][(657 - 656)]) {
                s = s + (607 - 606);
            }
        }
        b = b + 1;
        if (s == 0) {
            RdRg8x = RdRg8x +1;
        }
        s = 0;
    }
    if (RdRg8x == 0) {
        printf ("%d %d\n", x, y);
    }
    else {
        printf ("no\n");
    }
    return 0;
}

