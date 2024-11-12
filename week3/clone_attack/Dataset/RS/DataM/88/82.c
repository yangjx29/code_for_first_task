void  main () {
    char *oeF9BVc, *ps;
    gets (oeF9BVc);
    int LfoM8wWN0hT, Ey2XCSNB791 = 0;
    oeF9BVc = (char *) malloc (1000 * sizeof (char));
    LfoM8wWN0hT = strlen (oeF9BVc);
    for (ps = oeF9BVc; !('\0' == *ps); ps++) {
        if ('0' <= *ps && *ps <= '9')
            printf ("%c", *ps);
        else if (*(ps + 1) < 58 && *(ps + 1) > 47)
            printf ("\n");
        else
            ;
    };
}

