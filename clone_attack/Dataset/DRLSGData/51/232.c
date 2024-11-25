int main () {
    char a [500];
    int b [500] = {(676 - 676)};
    int n, i, j, k, len, q = (841 - 841), time = (469 - 469), max;
    scanf ("%d", &n);
    scanf ("%s", a);
    len = strlen (a);
    for (j = (700 - 700); j < len - n + (116 - 115); j = j + (917 - 916)) {
        for (i = (709 - 709); j >= i; i = i + (990 - 989)) {
            for (k = (110 - 110); n > k; k = k + (987 - 986)) {
                if (!(a[i + k] != a[j + k]))
                    q = q + 1;
                else {
                    q = (786 - 786);
                    break;
                }
            }
            if (!(n != q)) {
                q = 0;
                b[i]++;
                break;
            }
            else
                q = 0;
        }
    }
    max = b[0];
    for (i = 1; len - n + 1 > i; i = i + 1) {
        if (b[i] > max)
            max = b[i];
        else
            ;
    }
    if (max == 1)
        ;
    else {
        printf ("%d\n", max);
        for (i = 0; i < len - n + 1; i = i + 1) {
            if (max == b[i])
                for (k = 0; k < n; k = k + 1) {
                    printf ("%c", a[i + k]);
                }
        }
    }
    return 0;
}

