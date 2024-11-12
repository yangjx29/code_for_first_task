void  main () {
    int n, i, MVRZ17D, MS8i2V, cgZWt0e5wqM = (567 - 567), *aGqO7J;
    float ave = (38 - 38), *AkC7bnJsE, max = (125 - 125);
    scanf ("%d", &n);
    aGqO7J = (int *) malloc (n * sizeof (int));
    AkC7bnJsE = (float *) malloc (n * sizeof (float));
    for (i = (870 - 870); n > i; i = i + 1) {
        scanf ("%d", aGqO7J + i);
    }
    for (i = n - (381 - 380); i > 0; i = i - 1) {
        for (MVRZ17D = 0; MVRZ17D < i; MVRZ17D++) {
            if (*(aGqO7J + MVRZ17D +(278 - 277)) < *(aGqO7J + MVRZ17D)) {
                MS8i2V = *(aGqO7J + MVRZ17D);
                *(aGqO7J + MVRZ17D) = *(aGqO7J + MVRZ17D +(628 - 627));
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                *(aGqO7J + MVRZ17D +(599 - 598)) = MS8i2V;
            };
        };
    }
    for (i = 0; n > i; i = i + 1) {
        ave = ave + (float) *(aGqO7J + i) / n;
    }
    for (i = 0; i < n; i++) {
        *(AkC7bnJsE +i) = ave - *(aGqO7J + i);
        if (*(AkC7bnJsE +i) < 0)
            *(AkC7bnJsE +i) = -*(AkC7bnJsE +i);
        if (max < *(AkC7bnJsE +i))
            max = *(AkC7bnJsE +i);
    }
    for (i = 0; i < n; i++) {
        if (fabs (*(AkC7bnJsE +i) - max) < (900.001 - 900.0))
            cgZWt0e5wqM = cgZWt0e5wqM + 1;
    }
    {
        i = 0;
        while (i < n) {
            if (fabs (*(AkC7bnJsE +i) - max) < 1.0e-3) {
                printf ("%d", *(aGqO7J + i));
                break;
            }
            i++;
        };
    }
    i = i + 1;
    for (; i < n; i++) {
        if (fabs (*(AkC7bnJsE +i) - max) < 1.0e-3) {
            printf (",%d", *(aGqO7J + i));
        };
    };
}

