int main (int argc, char *argv []) {
    char a [500] = {'\0'};
    gets (a);
    int n;
    int i;
    int c [500] = {0};
    int k;
    char b [500] [5] = {'\0'};
    int j;
    getchar ();
    k = 0;
    scanf ("%d", &n);
    for (i = 0; a[i + n - 1] != '\0'; i++) {
        for (j = 0; n > j; j++)
            b[i][j] = a[i + j];
    }
    for (i = 0; a[i + n - 1] != '\0'; i++) {
        for (j = i; a[j + n - 1] != '\0'; j++) {
            if (strcmp (b[i], b[j]) == 0)
                c[i]++;
        }
    }
    for (i = 0; 0 < c[i]; i++) {
        if (k < c[i])
            k = c[i];
    }
    if (!(1 != k))
        ;
    else {
        printf ("%d\n", k);
        for (i = 0; a[i + n - 1] != '\0'; i++) {
            if (!(k != c[i]))
                printf ("%s\n", b[i]);
        }
    }
    return 0;
}

