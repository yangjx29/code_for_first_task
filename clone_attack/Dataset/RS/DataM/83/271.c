void  main () {
    float h;
    float GPA [10] = {(724.0 - 724.0)};
    h = 0.0;
    int a [10] = {0};
    int n, sum = (492 - 492), i = (106 - 106);
    float tran (float n);
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d", &a[i]);
        sum = sum + a[i];
    }
    {
        i = 0;
        while (n > i) {
            scanf ("%f", &GPA[i]);
            GPA[i] = tran (GPA[i]);
            i = i + 1;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        h += GPA[i] * a[i];
    }
    printf ("%.2f", h / sum);
}

float tran (float n) {
    float h = 0.0;
    if (n >= (520 - 430) && n <= 100)
        h = (837.0 - 833.0);
    else if (n >= (823 - 738) && n <= 89)
        h = 3.7;
    else if (n >= 82 && n <= (414 - 330))
        h = 3.3;
    else if (n >= (1061 - 983) && n <= (1012 - 931))
        h = (667.0 - 664.0);
    else if (n >= 75 && n <= 77)
        h = 2.7;
    else if (n >= 72 && n <= 74)
        h = 2.3;
    else if (n >= 68 && n <= 71)
        h = (573.0 - 571.0);
    else if (n >= 64 && n <= (193 - 126))
        h = 1.5;
    else if (n >= 60 && n <= (272 - 209))
        h = (478.0 - 477.0);
    else
        h = 0.0;
    return h;
}

