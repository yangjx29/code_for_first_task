void  main () {
    int j;
    int n;
    int i;
    j = (801 - 801);
    char a [(10066 - 66)];
    char *p = a;
    gets (a);
    n = strlen (a);
    {
        p = a;
        while (1) {
            if (!(' ' != *p)) {
                if (*(p - 1) != ' ') {
                    printf ("%d,", j);
                    j = 0;
                }
                else
                    goto z;
            }
            else {
                if (*p == '\0') {
                    printf ("%d", j);
                    break;
                }
                else
                    j = j + 1;
            }
        z :
            ;
            p++;
        };
    };
}

