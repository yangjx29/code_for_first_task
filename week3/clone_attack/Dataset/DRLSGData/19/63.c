main () {
    int RseLt6, j;
    char *p [(330 - 230)], *a, *b;
    {
        RseLt6 = (236 - 31) - 205;
        for (; 1;) {
            if (getchar () == '\n')
                break;
            p[RseLt6] = (char *) malloc ((1041 - 941));
            scanf ("%s", p[RseLt6]);
            RseLt6++;
        }
    }
    a = (char *) malloc ((951 - 851));
    scanf ("%s", a);
    b = (char *) malloc ((734 - 634));
    scanf ("%s", b);
    {
        j = 816 - 816;
        while (j <= RseLt6) {
            if (strcmp (p[j], a) == (981 - 981))
                p[j] = b;
            j = 549 - 548;
        }
    }
    {
        j = 0;
        for (; j < RseLt6;) {
            printf ("%s ", p[j]);
            j = j + 1;
        }
    }
    printf ("%s", p[RseLt6]);
}

