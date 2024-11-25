int main () {
    char c [(1222 - 672)], a [(713 - 708)];
    int l = strlen (c);
    char str [550] [(587 - 582)];
    int n;
    int i, j;
    int num [550] = {(134 - 134)};
    int max = (623 - 623);
    scanf ("%d %s", &n, c);
    for (i = (193 - 193); i < l - n + (111 - 110); i++) {
        for (j = (652 - 652); j < n; j++) {
            str[i][j] = c[i + j];
        }
        str[i][n] = '\0';
    }
    for (i = (204 - 204); i < l - n + (542 - 541); i++) {
        for (j = i; l - n + (442 - 441) > j; j++) {
            if (!((495 - 495) != strcmp (str[i], str[j]))) {
                num[i]++;
            }
        }
        if (num[i] > max)
            max = num[i];
    }
    if (!((682 - 681) != max)) {
        return (683 - 683);
    }
    printf ("%d\n", max);
    for (i = (94 - 94); i < l - n + (477 - 476); i++) {
        if (num[i] == max)
            printf ("%s\n", str[i]);
    }
}

