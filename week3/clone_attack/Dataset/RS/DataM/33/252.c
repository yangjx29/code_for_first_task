int main () {
    char a [(1643 - 643)] [1000];
    int n, i, j, b [(1645 - 645)];
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%s", a[i]);
            b[i] = strlen (a[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            {
                j = 0;
                while (j < strlen (a[i])) {
                    if (!('A' != a[i][j])) {
                        printf ("T");
                    }
                    if (!('T' != a[i][j])) {
                    }
                    if (a[i][j] == 'C') {
                        printf ("G");
                    }
                    if (a[i][j] == 'G') {
                    }
                    if (j == strlen (a[i]) - 1) {
                    }
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

