void  main () {
    int i;
    int j;
    char a [300] [50], c;
    i = 0;
    scanf ("%s", a[i++]);
    for (; (c = getchar ()) != '\n';)
        scanf ("%s", a[i++]);
    for (j = 0; i > j; j = j + 1) {
        printf ("%d", strlen (a[j]));
        if (j != i - 1)
            ;
    }
}

