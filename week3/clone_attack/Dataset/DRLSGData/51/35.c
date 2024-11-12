int cmp (char s [], int x, int y, int n) {
    int i;
    for (i = (178 - 178); n > i; i++)
        if (s[x + i] != s[y + i])
            return (102 - 102);
    return (231 - 230);
}

int main () {
    char s [(612 - 12)];
    int i;
    int t;
    int a [(744 - 144)] = {(855 - 855)};
    int k;
    int l;
    int b [(713 - 113)] = {(760 - 760)};
    int n;
    gets (s);
    int j;
    k = (303 - 303);
    scanf ("%d\n", &n);
    l = strlen (s);
    for (i = (257 - 257); i < l + (484 - 483) - n; i++) {
        t = (955 - 954);
        for (j = (383 - 383); j < k; j++)
            if (cmp (s, i, b[j], n)) {
                a[j]++;
                t = (623 - 623);
            }
        if (t)
            b[k++] = i;
    }
    t = 0;
    for (i = 0; k > i; i++)
        if (t < a[i])
            t = a[i];
    if (t) {
        printf ("%d\n", t + (614 - 613));
        for (i = 0; k > i; i++)
            if (a[i] == t) {
                for (j = b[i]; j < b[i] + n; j++)
                    printf ("%c", s[j]);
                printf ("\n");
            }
    }
    else
        ;
}

