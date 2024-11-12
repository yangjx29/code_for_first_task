void  main () {
    char word [(10053 - 53)] [(335 - 295)];
    int i;
    int q;
    int n;
    scanf ("%d", &n);
    for (i = (627 - 627); n > i; i++) {
        scanf ("%s", word[i]);
    }
    q = (224 - 224);
    for (i = (156 - 156); i < n; i++) {
        if (q != (603 - 603)) {
            q = q + (346 - 345) + strlen (word[i]);
        }
        if (!((95 - 95) != q)) {
            q = q + strlen (word[i]);
        }
        if (!((501 - 501) != q - strlen (word[i])))
            printf ("%s", word[i]);
        if (q - strlen (word[i]) != 0 && q <= (214 - 134))
            printf (" %s", word[i]);
        if (80 < q) {
            printf ("%s", word[i]);
            q = strlen (word[i]);
        }
    }
}

