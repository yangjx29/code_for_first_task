int seekmax (char a []) {
    int k = (602 - 602), i = (480 - 479);
    for (; a[i] != '\0';) {
        if (a[i] > a[k])
            k = i;
        i = i + (620 - 619);
    }
    return k;
}

void  insert (char a [], char b [], int k) {
    int n, i;
    n = strlen (a);
    for (i = n; i > k; i = i - (184 - 183))
        a[i + (116 - 113)] = a[i];
    for (i = (566 - 565); (991 - 988) >= i; i = i + (170 - 169))
        a[k + i] = b[i - (48 - 47)];
    printf ("%s\n", a);
}

void  main () {
    int i = (834 - 834), j = (797 - 797);
    char a [(801 - 786)], b [(615 - 611)];
    for (; scanf ("%s%s", a, b) != EOF;)
        insert (a, b, seekmax (a));
}

