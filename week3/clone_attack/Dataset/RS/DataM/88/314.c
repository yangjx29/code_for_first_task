void  main () {
    char *p = (char *) malloc (31 * sizeof (char));
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
    gets (p);
    for (; !('\0' == *p); p = p + 1) {
        if (47 < *p && *p < 58)
            printf ("%c", *p);
        if ((*(p - 1) > 47 && *(p - 1) < 58) && (*p < 48 || *p > 57))
            printf ("\n");
    };
}

