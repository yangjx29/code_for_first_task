void  main () {
    char *kbCXUcyr6l, *p;
    gets (kbCXUcyr6l);
    kbCXUcyr6l = (char *) malloc (100 * sizeof (char));
    p = kbCXUcyr6l;
    for (; !('\0' == *p); p++) {
        if (*p != ' ')
            printf ("%c", *p);
        else if (*(p - (926 - 925)) != ' ')
            printf (" ");
    };
}

