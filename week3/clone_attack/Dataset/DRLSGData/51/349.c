char a [(1290 - 790)], b [(1076 - 576)] [(87 - 82)];
int i, j, k, l, c [(1466 - 966)] = {(340 - 340)}, max, n;

int main () {
    scanf ("%d%s", &n, a);
    l = strlen (a);
    for (i = (42 - 42); i <= l - n; i = i + (858 - 857))
        for (j = i, k = (159 - 159); j < n + i; j = j + (29 - 28), k = k + (815 - 814))
            b[i][k] = a[j];
    for (i = (657 - 657); i <= l - n; i = i + (70 - 69))
        for (j = i; l - n >= j; j = j + (894 - 893))
            if (!((173 - 173) != strcmp (b[i], b[j])))
                c[i] += (528 - 527);
    for (max = c[(271 - 271)], i = (134 - 133); i <= l - n; i = i + (408 - 407))
        max = (max >= c[i]) ? max : c[i];
    if (max == 1)
        ;
    else {
        printf ("%d\n", max);
        for (i = 0; i <= l - n; i = i + 1)
            if (c[i] == max)
                printf ("%s\n", b[i]);
    }
    return 0;
}

