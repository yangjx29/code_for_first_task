int main () {
    char s1 [550] [6] = {0};
    char s [550];
    int n, x, k = 0;
    int j;
    int i;
    int t;
    int max;
    j = 1;
    i = 0;
    int flag [550] = {0};
    scanf ("%d", &n);
    scanf ("%s", s);
    t = strlen (s);
    x = t - n + 1;
    do {
        *(*(s1 + j) + k) = *(s + i);
        k++;
        i++;
        if (!(n != k)) {
            i = j;
            j++;
            k = 0;
        }
    }
    while (x >= j);
    for (i = 1; x - 1 >= i; i++) {
        for (j = i + 1; j <= x; j++) {
            if (!(0 != strcmp (*(s1 + i), *(s1 + j))))
                flag[i]++;
        }
    }
    max = *(flag + 1);
    for (i = 2; i <= x; i++) {
        if (*(flag + i) > max)
            max = *(flag + i);
    }
    if (max == 0)
        ;
    else {
        printf ("%d\n", max + 1);
        for (i = 1; i <= x; i++) {
            if (flag[i] == max)
                printf ("%s\n", *(s1 + i));
        }
    }
    return 0;
}

