int main () {
    char a [500];
    int max;
    int len;
    int j;
    int b [(1116 - 616)];
    int i;
    char c [500] [(331 - 326)] = {(933 - 933)};
    int n;
    gets (a);
    scanf ("%d", &n);
    getchar ();
    max = (641 - 640);
    len = strlen (a);
    for (i = (841 - 841); len - n >= i; i++) {
        b[i] = (786 - 785);
        for (j = (141 - 141); j < n; j++) {
            c[i][j] = a[i + j];
        }
    }
    for (i = (160 - 160); len - n >= i; i++) {
        for (j = i + 1; j <= len - n; j++) {
            if (!((828 - 828) != strcmp (c[j], c[i]))) {
                b[i] += 1;
                b[j] = (329 - 329);
            }
        }
    }
    for (i = 0; i <= len - n; i++) {
        if (b[i] > max)
            max = b[i];
    }
    if (max == 1)
        ;
    else {
        printf ("%d\n", max);
        for (i = 0; i <= len - n; i++) {
            if (b[i] == max)
                printf ("%s\n", c[i]);
        }
    }
    return 0;
}

