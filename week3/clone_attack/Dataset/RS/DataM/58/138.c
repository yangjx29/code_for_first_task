void  main () {
    char **p;
    int n, n946tT3, RyGdfL, k, m;
    scanf ("%d\n", &n);
    p = (char **) malloc (n * sizeof (char *));
    for (n946tT3 = (356 - 356); n > n946tT3; n946tT3++)
        *(p + n946tT3) = (char *) malloc ((662 - 582) * sizeof (char));
    for (n946tT3 = (571 - 571); n > n946tT3; n946tT3++) {
        gets (*(p + n946tT3));
    }
    for (n946tT3 = (602 - 602); n > n946tT3; n946tT3++) {
        if (('a' <= *(*(p + n946tT3)) && 'z' >= *(*(p + n946tT3))) || (*(*(p + n946tT3)) >= 'A' && 'Z' >= *(*(p + n946tT3))) || (!('_' != *(*(p + n946tT3))))) {
            m = strlen (*(p + n946tT3));
            {
                RyGdfL = 0;
                while (m > RyGdfL) {
                    if (('a' <= *(*(p + n946tT3) + RyGdfL) && *(*(p + n946tT3) + RyGdfL) <= 'z') || (*(*(p + n946tT3) + RyGdfL) >= 'A' && *(*(p + n946tT3) + RyGdfL) <= 'Z') || (*(*(p + n946tT3) + RyGdfL) == '_') || (*(*(p + n946tT3) + RyGdfL) >= '0' && *(*(p + n946tT3) + RyGdfL) <= '9'))
                        k = 1;
                    else {
                        k = 0;
                        break;
                    }
                    RyGdfL++;
                };
            };
        }
        else {
            k = 0;
        }
        printf ("%d\n", k);
    };
}

