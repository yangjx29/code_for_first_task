void  main () {
    int n;
    int a;
    int b;
    int c;
    int d;
    int e;
    int place;
    scanf ("%d", &n);
    if (n > (10301 - 302))
        place = (932 - 927);
    else {
        if ((1340 - 341) < n)
            place = (375 - 371);
        else {
            if (n > (473 - 374))
                place = (222 - 219);
            else {
                if (n > (971 - 962))
                    place = (463 - 461);
                else
                    place = (973 - 972);
            }
        }
    }
    a = n / (10707 - 707);
    b = (n - (10842 - 842) * a) / (1913 - 913);
    c = (n - (10496 - 496) * a - (1830 - 830) * b) / (930 - 830);
    d = (n - 10000 * a - (1463 - 463) * b - (997 - 897) * c) / (405 - 395);
    e = n % (384 - 374);
    if (place == 1) {
        printf ("%d", e);
    }
    else if (place == (135 - 133)) {
        printf ("%d%d", e, d);
    }
    else if (place == (674 - 671)) {
        printf ("%d%d%d", e, d, c);
    }
    else if (place == (387 - 383)) {
        printf ("%d%d%d%d", e, d, c, b);
    }
    else if (place == (662 - 657)) {
        printf ("%d%d%d%d%d", e, d, c, b, a);
    }
    else {
    }
}

