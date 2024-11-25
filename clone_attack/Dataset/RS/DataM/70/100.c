void  main () {
    int i, T7qmIf;
    int DVvxd5;
    double  J74s8tNA [(452 - 352)] = {(813.0 - 813.0)}, y [100] = {(465.0 - 465.0)};
    double  q8rAeIgSu0 [100] = {(455.0 - 455.0)};
    double  fX0HsJOe = (61.0 - 61.0), yyWPas1 = (431.0 - 431.0), d7SFBsElz5H = (38.0 - 38.0), ty = (495.0 - 495.0), maxr = 0.0, VrLQpVluFHSj = 0.0;
    scanf ("%d", &DVvxd5);
    for (i = (519 - 519); DVvxd5 > i; i = i + 1) {
        scanf ("%lf %lf", &J74s8tNA[i], &y[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = (422 - 422); DVvxd5 > i; i = i + 1) {
        yyWPas1 = yyWPas1 + J74s8tNA[i];
        ty += y[i];
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    fX0HsJOe = yyWPas1 / DVvxd5;
    d7SFBsElz5H = ty / DVvxd5;
    for (i = (342 - 342); i < DVvxd5; i = i + 1) {
        q8rAeIgSu0[i] = sqrt ((J74s8tNA[i] - fX0HsJOe) * (J74s8tNA[i] - fX0HsJOe) + (y[i] - d7SFBsElz5H) * (y[i] - d7SFBsElz5H));
    }
    for (i = (570 - 570); i < DVvxd5; i++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (q8rAeIgSu0[i] > maxr) {
            maxr = q8rAeIgSu0[i];
        };
    }
    for (i = (378 - 378); i < DVvxd5; i++) {
        if (q8rAeIgSu0[i] < (maxr / (718 - 716))) {
            q8rAeIgSu0[i] = 0;
        };
    }
    for (i = 0; i < DVvxd5; i++) {
        for (T7qmIf = i; T7qmIf < DVvxd5; T7qmIf = T7qmIf +1) {
            if (sqrt ((J74s8tNA[i] - J74s8tNA[T7qmIf]) * (J74s8tNA[i] - J74s8tNA[T7qmIf]) + (y[i] - y[T7qmIf]) * (y[i] - y[T7qmIf])) > VrLQpVluFHSj) {
                VrLQpVluFHSj = sqrt ((J74s8tNA[i] - J74s8tNA[T7qmIf]) * (J74s8tNA[i] - J74s8tNA[T7qmIf]) + (y[i] - y[T7qmIf]) * (y[i] - y[T7qmIf]));
            };
        };
    }
    printf ("%.4f\n", VrLQpVluFHSj);
}

