void  main () {
    char *puOmXi6;
    char *p;
    char *sLqPxOvGC;
    char *tmax;
    char *tmin;
    int max;
    int VxpyV81IYM7X;
    int n;
    int i;
    max = 0;
    VxpyV81IYM7X = 1000;
    gets (puOmXi6);
    puOmXi6 = (char *) malloc (1000 * sizeof (char));
    p = sLqPxOvGC = puOmXi6;
    for (; 1;) {
        if (!(' ' == *p) && !('\0' == *p)) {
            p = p + 1;
            continue;
        }
        if (!(' ' != *p) || !('\0' != *p)) {
            n = p - sLqPxOvGC;
            if (!('\0' != *p))
                break;
            if (n > max) {
                max = n;
                tmax = sLqPxOvGC;
            }
            if (n < VxpyV81IYM7X) {
                tmin = sLqPxOvGC;
                VxpyV81IYM7X = n;
            }
            p++;
            sLqPxOvGC = p;
            continue;
        };
    }
    for (; *(tmax) != ' ' && *(tmax) != '\0'; tmax++)
        printf ("%c", *tmax);
    for (; *(tmin) != ' ' && *(tmin) != '\0'; tmin++)
        printf ("%c", *tmin);
}

