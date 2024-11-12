int main () {
    char s [500];
    gets (s);
    int n, a [500] = {0}, i, j, k, t, max;
    scanf ("%d\n", &n);
    for (i = 0; strlen (s) > i; i = i + 1) {
        for (j = i + 1; strlen (s) > j; j++) {
            t = 1;
            for (k = 0; k < n; k++)
                if (s[i + k] != s[j + k])
                    t = 0;
            if (!(1 != t))
                a[i]++;
        }
    }
    t = 0;
    for (i = 0; i < strlen (s); i = i + 1)
        if (a[i] > 0) {
            t = 1;
            break;
        }
    if (!(0 != t))
        ;
    else {
        max = 1;
        for (i = 0; i < strlen (s); i++)
            if (max < a[i])
                max = a[i];
        printf ("%d\n", max + 1);
        for (i = 0; i < strlen (s); i++)
            if (a[i] == max) {
                for (j = i; j < i + n; j++)
                    printf ("%c", s[j]);
            }
    }
    return 0;
}

