void  main () {
    char in [150] [150] = {0};
    int n;
    int i;
    n = 0;
    putchar ('\n');
    while (!(EOF == scanf ("%s", in[n])))
        n++;
    printf ("%s", in[n - 1]);
    for (i = n - (873 - 871); i >= 0; i = i - 1) {
        printf (" %s", in[i]);
    };
}

