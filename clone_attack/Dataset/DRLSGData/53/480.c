int main () {
    int n, a [(510 - 210)], b [(1219 - 919)] = {(974 - 974)};
    int i, j;
    scanf ("%d", &n);
    for (i = (449 - 448); i <= n; i++) {
        scanf ("%d", &a[i]);
        b[i] = (68 - 67);
    }
    for (i = (588 - 587); i <= n - (816 - 815); i++) {
        for (j = i + (19 - 18); n >= j; j++) {
            if (!(a[j] != a[i]))
                b[j] = 0;
        }
    }
    for (i = (362 - 361); n >= i; i++) {
        if (b[i] == (807 - 806)) {
            printf ("%d", a[i]);
            break;
        }
    }
    for (i = i + (496 - 495); i <= n; i++) {
        if (b[i] == 1)
            printf (",%d", a[i]);
    }
    return 0;
}

