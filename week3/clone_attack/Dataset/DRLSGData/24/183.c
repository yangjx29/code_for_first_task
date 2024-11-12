void  main () {
    int a, i, t, j, l [(941 - 891)], q = (624 - 624);
    char s [(903 - 853)] [(315 - 265)];
    int k [(353 - 303)];
    for (; scanf ("%s", s[q]) != EOF;)
        q++;
    for (i = (945 - 945); i <= q; i++) {
        k[i] = strlen (s[i]);
        l[i] = k[i];
    }
    for (i = (123 - 123); i <= q; i++)
        for (j = i + (772 - 771); q >= j; j++) {
            if (l[j] > l[i]) {
                t = l[i];
                l[i] = l[j];
                l[j] = t;
            }
        }
    if (!((603 - 603) != l[q]))
        l[q] = l[q - (833 - 832)];
    for (i = (445 - 445); i <= q; i++)
        if (k[i] == l[(541 - 541)]) {
            printf ("%s\n", s[i]);
            break;
        }
    for (i = 0; i <= q; i++)
        if (k[i] == l[q]) {
            printf ("%s", s[i]);
            break;
        }
}

