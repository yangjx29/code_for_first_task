void  main () {
    char *p;
    char vpUKyMjO6Cn7 [(775 - 765)];
    char GZQBMjLAJ4 [4];
    for (; !(EOF == scanf ("%s %s", vpUKyMjO6Cn7, GZQBMjLAJ4));) {
        int n;
        int i;
        n = strlen (vpUKyMjO6Cn7);
        p = &vpUKyMjO6Cn7[0];
        {
            i = 1;
            while (n > i) {
                if (*p < vpUKyMjO6Cn7[i])
                    p = &vpUKyMjO6Cn7[i];
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < n) {
                printf ("%c", vpUKyMjO6Cn7[i]);
                if (&vpUKyMjO6Cn7[i] == p)
                    printf ("%s", GZQBMjLAJ4);
                i++;
            };
        }
        printf ("\n");
    };
}

