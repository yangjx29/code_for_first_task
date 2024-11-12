void  main () {
    int n;
    int i;
    char a [10] = {0};
    gets (a);
    n = 0;
    {
        i = 0;
        while (!('\0' == a[i])) {
            i = i + 1;
            n = n + 1;
        };
    }
    {
        i = n - 1;
        while (i >= 0) {
            printf ("%c", a[i]);
            i = i - 1;
        };
    };
}

