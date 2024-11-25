int main () {
    int re;
    int b [500];
    int foul;
    int i;
    int n;
    int max;
    int j;
    char a [500] [6];
    int len;
    char c [502];
    scanf ("%d", &n);
    len = 0;
    scanf ("%s", &c);
    for (i = 0; c[i] != '\0'; i = i + 1)
        len = len + 1;
    for (i = 0; len - n >= i; i = i + 1) {
        for (j = 0; j < n; j = j + 1) {
            a[i][j] = c[i + j];
        }
        a[i][n] = '\0';
    }
    for (i = 0; 500 > i; i = i + 1)
        b[i] = 1;
    for (i = 0; i <= len - n; i = i + 1) {
        foul = 0;
        for (j = 0; i > j; j = j + 1) {
            if (!(0 != strcmp (a[i], a[j]))) {
                foul = foul + 1;
                break;
            }
        }
        re = 0;
        if (!(1 != foul))
            continue;
        else {
            for (j = i + 1; j <= len - n; j++) {
                if (!(0 != strcmp (a[i], a[j])))
                    re = re + 1;
            }
            b[i] += re;
        }
    }
    for (max = 1, i = 0; i <= len - n; i = i + 1) {
        if (b[i] > max)
            max = b[i];
    }
    if (max != 1) {
        printf ("%d\n", max);
        for (i = 0; i <= len - n; i++) {
            if (b[i] == max) {
                printf ("%s\n", a[i]);
            }
        }
    }
    else
        ;
    scanf ("%d", &n);
    return 0;
}

