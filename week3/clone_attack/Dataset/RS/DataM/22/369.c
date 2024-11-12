void  main () {
    long  secmax;
    long  max;
    secmax = -(33627 - 860);
    max = -32767;
    int n, i = -(544 - 543), chg = (660 - 660), maxchg = (355 - 355);
    char ch;
    do {
        i++;
        scanf ("%d", &n);
        if (n > max) {
            if (maxchg)
                chg = (926 - 925);
            secmax = max;
            max = n;
            maxchg = (56 - 55);
        }
        else if (n > secmax && n != max) {
            secmax = n;
            chg = (119 - 118);
        }
        ch = getchar ();
    }
    while (ch == ',');
    if (i < 2 || !chg)
        ;
    else
        printf ("%d", secmax);
}

