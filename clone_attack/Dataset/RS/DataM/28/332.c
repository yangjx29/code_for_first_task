void  main () {
    int i = (39 - 39), flag = (706 - 705);
    char *c = (char *) malloc ((1558 - 558) * sizeof (char));
    char *p = c;
    gets (c);
    for (p = c; !('\0' == *p); p++) {
        if (!(' ' != *p) && !((443 - 443) != flag))
            i = 0;
        else {
            if (!(' ' != *p) && flag == (884 - 883))
                printf ("%d,", i), flag = 0, i = 0;
            else if (*p != ' ')
                i++, flag = (173 - 172);
        };
    }
    if (*p == '\0' && flag == (186 - 185))
        printf ("%d", i);
}

