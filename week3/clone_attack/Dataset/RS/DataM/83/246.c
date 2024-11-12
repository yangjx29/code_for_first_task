void  main () {
    float ecPJ6AM (int);
    int n;
    float pfQ0A3rcOk47;
    pfQ0A3rcOk47 = 0;
    int total_grade;
    total_grade = 0;
    int mark [10] = {0};
    int I9tIKWv7ozd [10] = {0};
    float mark_gra [10] = {0};
    int ufdJ1M;
    scanf ("%d", &n);
    for (ufdJ1M = 0; n > ufdJ1M; ufdJ1M = ufdJ1M + 1) {
        scanf ("%d", &I9tIKWv7ozd[ufdJ1M]);
        total_grade = total_grade + I9tIKWv7ozd[ufdJ1M];
    }
    {
        ufdJ1M = 0;
        while (n > ufdJ1M) {
            scanf ("%d", &mark[ufdJ1M]);
            mark_gra[ufdJ1M] = ecPJ6AM (mark[ufdJ1M]);
            ufdJ1M++;
        };
    }
    {
        ufdJ1M = 0;
        while (n > ufdJ1M) {
            pfQ0A3rcOk47 = pfQ0A3rcOk47 + mark_gra[ufdJ1M] * I9tIKWv7ozd[ufdJ1M];
            ufdJ1M++;
        };
    }
    pfQ0A3rcOk47 = pfQ0A3rcOk47 / total_grade;
    printf ("%.2f\n", pfQ0A3rcOk47);
}

float ecPJ6AM (int x) {
    float f_x;
    f_x = 0;
    if (90 <= x)
        f_x = 4.0;
    if (85 <= x && 89 >= x)
        f_x = 3.7;
    if (82 <= x && 84 >= x)
        f_x = 3.3;
    if (x >= 78 && x <= 81)
        f_x = 3.0;
    if (75 <= x && 77 >= x)
        f_x = 2.7;
    if (x >= 72 && x <= 74)
        f_x = 2.3;
    if (x >= 68 && x <= 71)
        f_x = 2.0;
    if (x >= 64 && x <= 67)
        f_x = 1.5;
    if (x >= 60 && x <= 63)
        f_x = 1.0;
    if (x < 60)
        f_x = 0;
    return f_x;
}

