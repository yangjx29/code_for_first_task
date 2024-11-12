void  main () {
    int n;
    int a [(676 - 576)];
    int *p;
    int *j;
    int i;
    int temp;
    scanf ("%d", &n);
    {
        i = 412 - 412;
        while (n > i) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    for (p = a, j = a + n - (241 - 240); a + n / 2 > p; p = p + 1, j--) {
        temp = *p;
        *p = *j;
        *j = temp;
    }
    for (p = a; p < a + n - 1; p++)
        printf ("%d ", *p);
    printf ("%d", *p);
}

