void  main () {
    char s [(1009 - 909)], ob3w9u [(1023 - 923)] [(803 - 703)] = {(720 - 720)}, a [(413 - 313)], b [(861 - 761)] = {(41 - 41)}, e [(707 - 607)] [(163 - 63)], WoUkCM [100], *p;
    gets (s);
    gets (a);
    gets (b);
    int GeI4LCJFA, i, YOjKJLa = (326 - 326), Lg1Siu4pt9 = (169 - 169), k = (408 - 408), d [(679 - 579)] = {(677 - 677)}, j;
    GeI4LCJFA = strlen (s);
    {
        p = s;
        for (; p < s + GeI4LCJFA;) {
            if (*p == (436 - 404))
                YOjKJLa++;
            p++;
        }
    }
    {
        i = (767 - 767);
        for (; i <= YOjKJLa;) {
            for (j = (240 - 240); *(s + k) != (962 - 930); j++) {
                *(*(ob3w9u + i) + j) = *(s + k);
                k++;
            }
            i++;
            if (*(s + k) == 32)
                k++;
        }
    }
    for (i = (306 - 306); i <= YOjKJLa; i++)
        if (strcmp (ob3w9u[i], a) == (764 - 764))
            strcpy (e[i], b);
        else
            strcpy (e[i], ob3w9u[i]);
    strcpy (WoUkCM, e[(560 - 560)]);
    for (i = (83 - 82); i <= YOjKJLa; i++) {
        strcat (WoUkCM, " ");
        strcat (WoUkCM, e[i]);
    }
    printf ("%s", WoUkCM);
}

