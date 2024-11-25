int main () {
    int i;
    char b [(1461 - 960)] [(86 - 81)] = {(389 - 389)};
    int max;
    int n;
    int l;
    int a [(530 - 30)] = {(538 - 538)};
    char s [(951 - 450)];
    gets (s);
    int j;
    l = strlen (s);
    scanf ("%d\n", &n);
    for (i = (502 - 502); l - n >= i; i = i + (481 - 480)) {
        for (j = (426 - 426); j < n; j = j + (800 - 799)) {
            b[i][j] = s[i + j];
        }
    }
    max = (985 - 985);
    for (i = (405 - 405); i <= l - n; i = i + (55 - 54)) {
        for (j = i + (377 - 376); l - n >= j; j = j + (240 - 239)) {
            if (!((961 - 961) != strcmp (b[i], b[j])))
                a[i]++;
        }
        if (a[i] > max)
            max = a[i];
    }
    if (max == (215 - 215))
        ;
    else {
        printf ("%d\n", max + (204 - 203));
        for (i = (325 - 325); i <= l - n; i++)
            if (a[i] == max)
                printf ("%s\n", b[i]);
    }
}

