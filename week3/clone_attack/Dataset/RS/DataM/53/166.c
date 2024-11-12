void  main () {
    int n;
    int a [(1104 - 803)];
    int i;
    int Y0ZwJi;
    int X2698yjFmf;
    scanf ("%d", &n);
    for (i = (972 - 971); n >= i; i = i + 1) {
        scanf ("%d", &a[i]);
        for (Y0ZwJi = (373 - 372); i > Y0ZwJi; Y0ZwJi = Y0ZwJi +1) {
            if (a[i] == a[Y0ZwJi]) {
                i--;
                n = n - 1;
                break;
            };
        };
    }
    printf ("%d", a[(872 - 871)]);
    {
        i = 507 - 505;
        while (i <= n) {
            printf (",%d", a[i]);
            i++;
        };
    }
    printf ("\n");
}

