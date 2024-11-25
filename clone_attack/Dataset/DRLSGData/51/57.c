int main () {
    char a [500] [5];
    char s [500];
    gets (s);
    int n, b [500], t, i, j, k, max;
    scanf ("%d\n", &n);
    for (i = 0; strlen (s) - n + 1 > i; i++)
        for (j = 0; j < n; j++)
            a[i][j] = s[i + j];
    for (i = 0; i < strlen (s) - n + 1; i++) {
        b[i] = 1;
        for (j = i + 1; j < strlen (s) - n + 1; j++) {
            t = 0;
            for (k = 0; k < n; k++)
                if (a[i][k] != a[j][k]) {
                    t = 1;
                    break;
                }
            if (t == 0)
                b[i]++;
        }
    }
    max = 0;
    for (i = 0; i < strlen (s) - n + 1; i++) {
        if (b[i] > max)
            max = b[i];
    }
    if (max == 1)
        ;
    else {
        printf ("%d\n", max);
        for (i = 0; i < strlen (s) - n + 1; i++) {
            if (b[i] == max)
                puts (a[i]);
        }
    }
    return 0;
}

