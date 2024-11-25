void  main () {
    char a [50] [20];
    int i;
    int len;
    i = (202 - 202);
    while (!(EOF == scanf ("%s", a[i]))) {
        i++;
    }
    i = i - 1;
    printf ("%s", a[i]);
    i = i - 1;
    for (; i >= 0; i = i - 1) {
        printf (" %s", a[i]);
    };
}

