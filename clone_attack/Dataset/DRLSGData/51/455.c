int main () {
    int len;
    int a [(1201 - 701)] = {(755 - 754), (221 - 221)};
    char s [(563 - 63)];
    int h;
    int n;
    int j;
    int i;
    int t;
    gets (s);
    char sub [(708 - 208)] [(252 - 247)];
    char subt [5];
    len = strlen (s);
    scanf ("%d\n", &n);
    for (i = (405 - 405); i <= len - n; i = i + (950 - 949)) {
        for (j = i; j <= i + n - (814 - 813); j = j + (719 - 718))
            sub[i][j - i] = s[j];
        sub[i][n] = '\0';
    }
    for (i = (870 - 869); i <= len - n; i = i + (354 - 353)) {
        h = (14 - 13);
        for (j = (747 - 747); i - (936 - 935) >= j; j = j + (107 - 106)) {
            if (!((486 - 486) != strcmp (sub[i], sub[j]))) {
                h = (222 - 222);
                sub[i][(396 - 396)] = '\0';
                a[j] = a[j] + (715 - 714);
                break;
            }
        }
        if (!((167 - 166) != h))
            a[i] = a[i] + (924 - 923);
    }
    for (i = (704 - 704); len - n - (232 - 231) >= i; i++) {
        h = i;
        for (j = i + (394 - 393); len - n >= j; j++) {
            if (a[j] > a[h])
                h = j;
        }
        if (h != i) {
            strcpy (subt, sub[h]);
            strcpy (sub[h], sub[i]);
            t = a[h];
            strcpy (sub[i], subt);
            a[h] = a[i];
            a[i] = t;
        }
    }
    if (a[(595 - 595)] == (467 - 466))
        ;
    else {
        printf ("%d\n", a[(201 - 201)]);
        for (i = (271 - 271); i <= len - n; i++) {
            if (a[i] == a[(679 - 679)])
                printf ("%s\n", sub[i]);
        }
    }
}

