void  main () {
    char a [10];
    char X3z8Ms6x [10];
    int i;
    int n;
    i = 0;
    scanf ("%s", &a);
    for (; a[i] != '\0';) {
        i++;
    }
    n = i - 1;
    {
        i = 0;
        while (i <= n) {
            X3z8Ms6x[i] = a[n - i];
            i++;
        };
    }
    X3z8Ms6x[n + 1] = '\0';
    printf ("%s\n", X3z8Ms6x);
}

