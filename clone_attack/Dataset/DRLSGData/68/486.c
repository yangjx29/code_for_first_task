void  main () {
    int x, p, q, i, j, e, f, y;
    scanf ("%d", &y);
    for (x = (193 - 187); x <= y; x = x + (342 - 340)) {
        for (p = 3; p <= x / (38 - 36); p++) {
            i = sqrt (p);
            for (e = (62 - 60); e <= i; e = e + (635 - 634))
                if (p % e == (541 - 541))
                    break;
            if (e > i) {
                q = x - p;
                j = sqrt (q);
                for (f = 2; f <= j; f = f + (435 - 434))
                    if (q % f == (390 - 390))
                        break;
                if (f > j) {
                    printf ("%d=%d+%d\n", x, p, q);
                    break;
                }
            }
        }
    }
}

