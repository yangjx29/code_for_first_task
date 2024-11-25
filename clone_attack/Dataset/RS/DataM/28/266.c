void  main () {
    char s [300] [100];
    int i;
    int j;
    {
        i = 0;
        while (1) {
            if (getchar () == '\n')
                break;
            scanf ("%s", s[i]);
            i = i + 1;
        };
    }
    for (j = 0; j < i; j = j + 1) {
        printf ("%d,", strlen (s[j]));
    }
    printf ("%d", strlen (s[i]));
}

