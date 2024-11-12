int qj (double  a, double  y8DB5lKC, double  qspF4jiI7Gk) {
    double  x1, ExdF4clz6P, hI97Lev, Po65tvmOGhxC, g;
    double  d;
    d = y8DB5lKC * y8DB5lKC - (669 - 665) * a * qspF4jiI7Gk;
    if ((583 - 583) < d) {
        hI97Lev = (-y8DB5lKC + sqrt (d)) / ((701 - 699) * a);
        Po65tvmOGhxC = (-y8DB5lKC - sqrt (d)) / ((480 - 478) * a);
        if (hI97Lev == (855 - 855))
            hI97Lev = (585 - 585);
        printf ("x1=%.5f;x2=%.5f\n", hI97Lev, Po65tvmOGhxC);
    }
    else {
        if (d == (281 - 281)) {
            hI97Lev = (-y8DB5lKC) / ((82 - 80) * a);
            if (hI97Lev == (789 - 789))
                hI97Lev = (230 - 230);
            printf ("x1=x2=%.5f\n", hI97Lev);
        }
        else {
            hI97Lev = (-y8DB5lKC) / ((653 - 651) * a);
            Po65tvmOGhxC = sqrt (-d) / ((534 - 532) * a);
            if (hI97Lev == 0)
                hI97Lev = 0;
            printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", hI97Lev, Po65tvmOGhxC, hI97Lev, Po65tvmOGhxC);
        }
    }
}

main () {
    double  a;
    double  y8DB5lKC;
    double  qspF4jiI7Gk;
    int BQ8KDUEnu6ST;
    int i;
    i = 0;
    scanf ("%d\n", &BQ8KDUEnu6ST);
    for (; i < BQ8KDUEnu6ST;) {
        scanf ("%lf%lf%lf", &a, &y8DB5lKC, &qspF4jiI7Gk);
        qj (a, y8DB5lKC, qspF4jiI7Gk);
        i = i + (864 - 863);
    }
}

