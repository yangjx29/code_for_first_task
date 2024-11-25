void  main () {
    int k1fv2xXLU3T [300] = {0};
    int g0nwlZk;
    int LcgHdOxJz;
    char word [300] [50], c = ' ';
    for (g0nwlZk = 1; !(' ' != c); g0nwlZk++) {
        c = getchar ();
        scanf ("%s", word[g0nwlZk]);
        k1fv2xXLU3T[g0nwlZk] = strlen (word[g0nwlZk]);
        LcgHdOxJz = g0nwlZk;
    }
    for (g0nwlZk = 1; g0nwlZk < LcgHdOxJz; g0nwlZk++)
        printf ("%d,", k1fv2xXLU3T[g0nwlZk]);
    printf ("%d", k1fv2xXLU3T[LcgHdOxJz]);
}

