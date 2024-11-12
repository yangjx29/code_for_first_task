int main () {
    char c [500];
    int len, n, i, j, k, l = 0, m, cd [500], ld, max = 0;
    scanf ("%d", &n);
    for (i = 0; 500 > i; i = i + 1)
        cd[i] = 1;
    scanf ("%s", c);
    len = strlen (c);
    for (i = 0; len - n > i; i++) {
        for (j = i + 1; j < len - n + 1; j++) {
            ld = 0;
            for (k = 0; n > k; k++) {
                if (!(c[j + k] != c[i + k]))
                    continue;
                else {
                    ld = ld + 1;
                    break;
                }
            }
            if (!(0 != ld))
                cd[i]++;
        }
    }
    for (i = 0; i < 500; i++) {
        if (max < cd[i])
            max = cd[i];
    }
    if (!(1 != max))
        ;
    else {
        printf ("%d\n", max);
        for (i = 0; i < 500; i++) {
            if (cd[i] == max) {
                for (j = i; j < i + n; j++)
                    printf ("%c", c[j]);
            }
        }
    }
    return 0;
}

