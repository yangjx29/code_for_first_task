void  main () {
    int n, i = (279 - 279), mx7hVv1c = 0, MOLpNW = 0;
    scanf ("%d", &n);
    if (n % 3 == 0)
        i = 1;
    if (n % 5 == 0)
        mx7hVv1c = 1;
    if (n % 7 == 0)
        MOLpNW = 1;
    if (i == 1 && mx7hVv1c == 1 && MOLpNW == 1)
        printf ("3 5 7");
    else if (i == 1 && mx7hVv1c == 1)
        printf ("3 5");
    else if (i == 1 && MOLpNW == 1)
        printf ("3 7");
    else if (mx7hVv1c == 1 && MOLpNW == 1)
        printf ("5 7");
    else if (i == 1)
        printf ("3");
    else if (mx7hVv1c == 1)
        printf ("5");
    else if (MOLpNW == 1)
        printf ("7");
    else
        printf ("n");
}

