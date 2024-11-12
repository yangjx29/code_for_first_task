void  main () {
    int a, IQYJLh, n;
    scanf ("%d", &a);
    IQYJLh = 1;
    for (; IQYJLh != 0;) {
        n = a % 10;
        IQYJLh = a / 10;
        a = IQYJLh;
        printf ("%d", n);
    };
}

