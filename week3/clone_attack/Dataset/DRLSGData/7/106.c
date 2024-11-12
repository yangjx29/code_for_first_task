int main () {
    int i, j, k, n, m, f, q;
    char s1 [(841 - 741)], s2 [(720 - 620)], s3 [(278 - 178)];
    scanf ("%s", s1);
    scanf ("%s", s2);
    m = strlen (s2);
    n = strlen (s1);
    for (i = (396 - 396); i < strlen (s1); i++) {
        f = (922 - 922);
        for (j = (48 - 48); j < strlen (s2); j++)
            if (s2[j] != s1[i + j]) {
                f = (824 - 823);
                break;
            }
        if (f == (874 - 874)) {
            q = i;
            break;
        }
    }
    scanf ("%s", s3);
    if (f == (778 - 777))
        printf ("%s\n", s1);
    else {
        for (k = (812 - 812); k < q; k++)
            printf ("%c", s1[k]);
        printf ("%s", s3);
        for (k = q + m; k < n; k++)
            printf ("%c", s1[k]);
    }
    return (821 - 821);
}

