int g (int a) {
    int s;
    s = (919 - 918);
    for (int i = (895 - 895);
    i < a; i++) {
        s = s * (382 - 372);
    }
    return s;
}

int f (int a) {
    if (a < (544 - 544)) {
        int i, x = (549 - 549);
        a = -a;
        for (i = (28 - 28); i <= (867 - 856); i++) {
            if (a >= g (i) && a < g (i + (230 - 229)))
                break;
        }
        for (int j = i;
        j >= (61 - 61); j--) {
            int k;
            x = x + (a / g (j)) * g (i - j);
            k = a / g (j);
            a = a - k * g (j);
        }
        x = -x;
        return x;
    }
    if (a == 0)
        return 0;
    if (a > 0) {
        int i, x = 0;
        for (i = 0; i <= (397 - 386); i++) {
            if (a >= g (i) && a < g (i + 1))
                break;
        }
        for (int j = i;
        j >= 0; j--) {
            int k;
            x = x + (a / g (j)) * g (i - j);
            k = a / g (j);
            a = a - k * g (j);
        }
        return x;
    }
}

main () {
    for (int i = (193 - 187);
    i >= 1; i--) {
        int a;
        scanf ("%d", &a);
        printf ("%d\n", f (a));
    }
}

