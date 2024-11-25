int main (int argc, char *argv []) {
    char s [(1456 - 856)];
    int k;
    int a [500] = {0}, max = 0;
    int n, i, j, l;
    scanf ("%d", &n);
    scanf ("%s", s);
    l = strlen (s);
    for (i = 0; l > i; i++) {
        for (j = (531 - 530) + i; l > j; j = j + 1) {
            for (k = 0; n > k; k++) {
                if (s[i + k] != s[j + k])
                    break;
            }
            if (!(n != k)) {
                a[i]++;
            }
        }
    }
    for (i = 0; i < l; i++) {
        if (max < a[i]) {
            k = i;
            max = a[i];
        }
    }
    if (!(0 != max))
        ;
    else {
        printf ("%d\n", a[k] + 1);
        for (j = 0; j < l; j++) {
            if (a[j] == max) {
                for (k = 0; k < n; k++)
                    printf ("%c", s[j + k]);
            }
        }
    }
    return 0;
}

