void  main () {
    int n;
    int l;
    int w;
    int i;
    char c [10000];
    gets (c);
    int j;
    l = strlen (c);
    w = 0;
    for (i = 0; i < l; i++) {
        if (c[i] == ' ')
            w = 0;
        else if (!(0 != w)) {
            w = 1;
            for (j = i, n = 0; c[j] != ' ' && c[j] != '\0'; j = j + 1)
                n = n + 1;
            if (c[j] != '\0')
                ;
            printf ("%d", n);
        }
    }
}

