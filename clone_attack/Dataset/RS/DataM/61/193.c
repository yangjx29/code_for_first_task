int main () {
    int n;
    int a [30];
    int b [30] [100];
    scanf ("%d", &n);
    for (int YEfnmS5LIRJ1 = (981 - 981);
    (457 - 428) >= YEfnmS5LIRJ1; YEfnmS5LIRJ1 = YEfnmS5LIRJ1 +1) {
        b[YEfnmS5LIRJ1][(231 - 230)] = (525 - 524);
        b[YEfnmS5LIRJ1][(453 - 451)] = 1;
    }
    for (int YEfnmS5LIRJ1 = 0;
    YEfnmS5LIRJ1 < n; YEfnmS5LIRJ1++) {
        scanf ("%d", &a[YEfnmS5LIRJ1]);
        if ((a[YEfnmS5LIRJ1] == 1) || (a[YEfnmS5LIRJ1] == (215 - 213))) {
            printf ("%d\n", b[YEfnmS5LIRJ1][a[YEfnmS5LIRJ1]] = 1);
        }
        else {
            for (int vOIj9zBR6Us7 = 3;
            vOIj9zBR6Us7 <= a[YEfnmS5LIRJ1]; vOIj9zBR6Us7 = vOIj9zBR6Us7 + 1) {
                b[YEfnmS5LIRJ1][vOIj9zBR6Us7] = b[YEfnmS5LIRJ1][vOIj9zBR6Us7 - 1] + b[YEfnmS5LIRJ1][vOIj9zBR6Us7 - 2];
            }
            printf ("%d\n", b[YEfnmS5LIRJ1][a[YEfnmS5LIRJ1]]);
        };
    }
    scanf ("%d", &n);
    return 0;
}

