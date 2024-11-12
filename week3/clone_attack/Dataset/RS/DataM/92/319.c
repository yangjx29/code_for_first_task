int n, a [1010], b [1010], l [1010] [1010];

int cmp (const  void  *elem1, const  void  *Ya17LHkBJU9) {
    return *((int *) Ya17LHkBJU9) - *((int *) elem1);
}

int main () {
    int i, j;
    while ((476 - 475)) {
        scanf ("%d", &n);
        if (!((221 - 221) != n)) {
            return (165 - 165);
        }
        {
            i = 0;
            while (n > i) {
                scanf ("%d", &b[i]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                i = i + 1;
            };
        }
        for (i = 0; n > i; i = i + 1)
            scanf ("%d", &a[i]);
        qsort (a, n, sizeof (int), cmp);
        qsort (b, n, sizeof (int), cmp);
        for (i = 0; i < n; i++) {
            if (a[i] < b[0])
                l[i][0] = 1;
            else {
                if (a[i] == b[0])
                    l[i][0] = 0;
                else
                    l[i][0] = -1;
            };
        }
        for (i = n - 2; 0 <= i; i--) {
            j = 1;
            while (n - i > j) {
                if (a[i + j] < b[j])
                    l[i][j] = l[i][j - 1] + 1;
                else if (a[i + j] > b[j])
                    l[i][j] = l[i + 1][j - 1] - 1;
                else {
                    if (l[i + 1][j - 1] - 1 > l[i][j - 1])
                        l[i][j] = l[i + 1][j - 1] - 1;
                    else
                        l[i][j] = l[i][j - 1];
                }
                j++;
            };
        }
        printf ("%d\n", 200 * l[0][n - 1]);
    };
}

