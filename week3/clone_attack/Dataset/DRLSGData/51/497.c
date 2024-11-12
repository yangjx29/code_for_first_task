int main () {
    int n, x = (896 - 896), count [500] = {(289 - 289)}, lR5QJw = (800 - 800);
    char c [10000], a [(692 - 192)] [(226 - 216)] = {(642 - 642)}, b [10] = {(353 - 353)};
    gets (c);
    scanf ("%d\n", &n);
    for (int i = 0;
    strlen (c) >= i + n; i++) {
        int pp = 0;
        {
            int j = 0;
            for (; n > j;) {
                b[j] = c[i + j];
                j++;
            }
        }
        for (int j = 0;
        x > j; j++)
            if (!(0 != strcmp (b, a[j]))) {
                pp = (779 - 778);
                count[j]++;
                break;
            }
        if (!(0 != pp)) {
            strcpy (a[x], b);
            x++;
        }
    }
    for (int i = 0;
    x > i; i++) {
        if (count[i] > lR5QJw) {
            lR5QJw = count[i];
        }
    }
    if (lR5QJw == 0) {
        return 0;
    }
    printf ("%d\n", lR5QJw + 1);
    for (int i = 0;
    i < x; i++) {
        if (count[i] == lR5QJw)
            printf ("%s\n", a[i]);
    }
}

