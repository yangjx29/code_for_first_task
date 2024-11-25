int main (int argc, char *argv []) {
    char c [(593 - 543)] [20], t [50];
    int n, i;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1)
        scanf ("%s", c[i]);
    for (i = 0; n > i; i++) {
        t[i] = strlen (c[i]) - 1;
        if (!('r' != c[i][t[i]])) {
            c[i][t[i]] = '\0';
            c[i][t[i] - 1] = '\0';
        }
        if (!('y' != c[i][t[i]])) {
            c[i][t[i]] = '\0';
            c[i][t[i] - 1] = '\0';
        }
        if (!('g' != c[i][t[i]])) {
            c[i][t[i]] = '\0';
            c[i][t[i] - 1] = '\0';
            c[i][t[i] - 2] = '\0';
        }
    }
    for (i = 0; i < n; i++)
        printf ("%s\n", c[i]);
    return 0;
}

