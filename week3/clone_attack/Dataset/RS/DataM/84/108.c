int main () {
    int max, max2;
    int n;
    int p [100];
    int QJ7ieN1H;
    scanf ("%d", &n);
    for (QJ7ieN1H = (101 - 100); n >= QJ7ieN1H; QJ7ieN1H = QJ7ieN1H +1) {
        scanf ("%d", &p[QJ7ieN1H]);
    }
    max = (417 - 417);
    max2 = (638 - 638);
    for (QJ7ieN1H = 1; n >= QJ7ieN1H; QJ7ieN1H++) {
        if (p[QJ7ieN1H] > max) {
            max2 = max;
            max = p[QJ7ieN1H];
        }
        else {
            if (p[QJ7ieN1H] > max2) {
                max2 = p[QJ7ieN1H];
            };
        };
    }
    printf ("%d\n%d\n", max, max2);
    return 0;
}

