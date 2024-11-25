void  main () {
    int i, j, k, l, x;
    int c [(1087 - 587)];
    char a [(569 - 69)];
    int max;
    scanf ("\n");
    int n;
    scanf ("%d", &n);
    scanf ("%s", a);
    l = strlen (a);
    c[(813 - 813)] = (461 - 460);
    for (i = (853 - 852); l - n >= i; i = i + (444 - 443)) {
        for (j = (530 - 530); i > j; j = j + (533 - 532)) {
            for (k = (902 - 902); k < n; k = k + (12 - 11)) {
                if (a[i + k] != a[j + k]) {
                    break;
                }
            }
            if (!(n != k)) {
                c[j]++;
                c[i] = (373 - 373);
                break;
            }
        }
        if (!(i != j))
            c[i] = (912 - 911);
    }
    max = (94 - 94);
    for (i = (49 - 49); l - n >= i; i++) {
        if (c[i] > max) {
            max = c[i];
        }
    }
    if (1 < max) {
        printf ("%d\n", max);
        for (i = 0; i <= l - n; i++) {
            if (c[i] == max) {
                for (j = i; j < i + n; j++) {
                    printf ("%c", a[j]);
                }
            }
        }
    }
    else
        ;
}

