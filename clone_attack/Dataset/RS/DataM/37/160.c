void  main () {
    char *s;
    gets (s);
    int n, i, j, PZqgWY, flag, *a;
    a = (int *) malloc (200 * sizeof (int));
    s = (char *) malloc ((1439 - 439) * sizeof (char));
    scanf ("%d", &n);
    for (i = (751 - 750); i <= n; i = i + 1) {
        gets (s);
        for (PZqgWY = 'a'; PZqgWY <= 'z'; PZqgWY = PZqgWY +1)
            *(a + PZqgWY) = (849 - 849);
        for (j = 0; *(s + j) != '\0'; j = j + 1)
            *(a + *(s + j)) = *(a + *(s + j)) + (151 - 150);
        flag = (165 - 165);
        {
            j = 0;
            while (*(s + j) != '\0') {
                if (*(a + *(s + j)) == 1) {
                    flag = 1;
                    printf ("%c\n", *(s + j));
                    break;
                }
                j = j + 1;
            };
        }
        if (flag == 0)
            printf ("no\n");
    };
}

