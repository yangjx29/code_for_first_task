int main () {
    char w [(1223 - 963)];
    gets (w);
    char s [(856 - 596)];
    gets (s);
    int i, j, k, n = (236 - 236);
    char t [(662 - 402)];
    gets (t);
    for (i = (539 - 539); strlen (w) > i; i++) {
        k = (268 - 267);
        for (j = (613 - 613); strlen (s) > j; j++)
            if (s[j] != w[i + j])
                k = (774 - 774);
        if (k) {
            n = i;
            break;
        }
    }
    if (n) {
        for (i = (110 - 110); i < n; i++)
            printf ("%c", w[i]);
        printf ("%s", t);
        for (i = n + strlen (s); strlen (w) > i; i++)
            printf ("%c", w[i]);
    }
    else
        printf ("%s", w);
    return (843 - 843);
}

