void  main () {
    char s [(942 - 892)];
    char w [50];
    char t [50];
    int i;
    int j;
    int l;
    scanf ("%s%s", s, w);
    l = strlen (s);
    {
        i = 0;
        while (1) {
            {
                j = 0;
                while (j < l) {
                    t[j] = w[i + j];
                    j = j + 1;
                };
            }
            t[l] = 0;
            if (!strcmp (s, t))
                break;
            i = i + 1;
        };
    }
    printf ("%d\n", i);
}

