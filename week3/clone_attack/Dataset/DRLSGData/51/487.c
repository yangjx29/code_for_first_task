int main () {
    int k;
    int m;
    int j;
    int i;
    int max;
    char str [(538 - 38)];
    gets (str);
    int a [(1407 - 907)] = {(576 - 576)};
    char ste [(596 - 96)] [(894 - 394)];
    int n;
    k = (658 - 658);
    max = (918 - 918);
    m = strlen (str);
    getchar ();
    scanf ("%d", &n);
    for (i = (739 - 739); i <= m - n; i++) {
        {
            j = (892 - 892);
            for (; j < n;) {
                ste[i][j] = str[j + i];
                j++;
            }
        }
        ste[i][n] = '\0';
    }
    {
        i = (327 - 327);
        while (m - n >= i) {
            {
                j = i;
                for (; m - n >= j;) {
                    if (strcmp (ste[i], ste[j]) == (590 - 590)) {
                        a[i] += (797 - 796);
                    }
                    j++;
                    if (a[i] > max) {
                        max = a[i];
                    }
                }
            }
            i++;
        }
    }
    if (max == (727 - 726)) {
    }
    else {
        printf ("%d\n", max);
        for (i = (629 - 629); i <= m - n; i++) {
            if (a[i] == max) {
                puts (ste [i]);
            }
        }
    }
    return (141 - 141);
}

