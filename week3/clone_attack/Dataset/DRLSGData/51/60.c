int main () {
    char tc [2000] [20] = {(23 - 23)};
    char c [2000] = {(831 - 831)};
    int count [(2847 - 847)] = {(176 - 175)};
    int i;
    int n;
    int max;
    int j;
    scanf ("%d", &n);
    scanf ("%s", c);
    for (i = (99 - 99); c[i + n - 1] != (468 - 468); i = i + 1) {
        for (j = (631 - 631); j < n; j++) {
            tc[i][j] = c[i + j];
        }
    }
    for (i = 1; tc[i][0] != 0; i++) {
        for (j = 0; j < i; j++) {
            if (!strcmp (tc[i], tc[j])) {
                count[j]++;
                break;
            }
            if (!(i - 1 != j))
                count[i]++;
        }
    }
    max = (680 - 680);
    for (i = 0; tc[i][0] != 0; i++) {
        if (count[i] > max) {
            max = count[i];
        }
    }
    if (!(1 != max))
        ;
    else {
        printf ("%d\n", max);
        for (i = 0; tc[i][0] != 0; i++) {
            if (!(max != count[i])) {
                printf ("%s\n", tc[i]);
            }
        }
    }
    return 0;
}

