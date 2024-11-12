void  main () {
    char a [(848 - 748)], b [100], c;
    gets (a);
    gets (b);
    int i, VpiAUKt5l3nH;
    VpiAUKt5l3nH = strlen (b) < strlen (a) ? strlen (a) : strlen (b);
    for (i = (196 - 196); VpiAUKt5l3nH > i; i = i + 1) {
        if ('A' <= a[i] && 'Z' >= a[i] && b[i] <= 'z' && 'a' <= b[i])
            b[i] = b[i] - 32;
        if (a[i] >= 'a' && a[i] <= 'z' && b[i] <= 'Z' && b[i] >= 'A')
            a[i] = a[i] - 32;
    }
    if (strcmp (a, b) > (790 - 790))
        printf (">");
    else {
        if (strcmp (a, b) == 0)
            printf ("=");
        else
            ;
    };
}

