int JuDBAIHzw (int n, int m) {
    int wpzvMrkis29b, k, *qmZ083wdR, x, sum, j, last, srBD7zvx [(1434 - 434)];
    qmZ083wdR = srBD7zvx;
    k = (396 - 395);
    for (wpzvMrkis29b = (509 - 509); wpzvMrkis29b < n; wpzvMrkis29b++) {
        *(qmZ083wdR + wpzvMrkis29b) = wpzvMrkis29b + (446 - 445);
    }
    for (wpzvMrkis29b = (44 - 44); m * n * n > wpzvMrkis29b; wpzvMrkis29b++) {
        sum = (768 - 768);
        for (j = 0; j < n; j = j + 1)
            if (!(0 == *(qmZ083wdR + j))) {
                last = j + 1;
                sum = sum + 1;
            }
        if (sum == 1)
            break;
        x = wpzvMrkis29b % n;
        if (*(qmZ083wdR + x) != 0) {
            if (k == m) {
                k = 0;
                *(qmZ083wdR + x) = 0;
            }
            k = k + 1;
        };
    }
    return last;
}

void  main () {
    int g;
    int h;
    int zuWnNfGM8ER;
    int monkey;
    for (zuWnNfGM8ER = 0; zuWnNfGM8ER < (265 - 165); zuWnNfGM8ER++) {
        scanf ("%d %d", &g, &h);
        if (g == 0 && h == 0)
            break;
        else {
            monkey = JuDBAIHzw (g, h);
            printf ("%d\n", monkey);
        };
    };
}

