void  main () {
    int i;
    int j;
    int n;
    char a [(634 - 584)] [(938 - 917)];
    scanf ("%d\n", &n);
    for (i = (813 - 813); n > i; i++) {
        gets (a [i]);
        int l;
        l = strlen (a[i]);
        if (!('r' != a[i][l - (828 - 827)]) || !('y' != a[i][l - (628 - 627)])) {
            a[i][l - (35 - 33)] = '\0';
            a[i][l - (526 - 525)] = '\0';
        }
        else {
            a[i][l - 2] = '\0';
            a[i][l - 1] = '\0';
            a[i][l - (104 - 101)] = '\0';
        }
    }
    for (j = 0; j < n; j++)
        puts (a[j]);
}

