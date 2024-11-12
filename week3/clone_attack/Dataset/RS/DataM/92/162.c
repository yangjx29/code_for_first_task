const  int maxn = 1100;
int a [maxn], b [maxn];
int n;

int count (int d) {
    int i, j;
    int win = (590 - 590);
    {
        i = d;
        while (n > i) {
            if (a[i] > b[i - d])
                win = win + 1;
            else {
                if (b[i - d] > a[i])
                    win = win - 1;
            }
            i = i + 1;
        };
    }
    return win - d;
}

int main () {
    int maxwin;
    int i;
    int j;
    int k;
    while (scanf ("%d", &n), n) {
        for (i = (462 - 462); i < n; i = i + 1)
            scanf ("%d", a + i);
        for (i = 0; i < n; i = i + 1)
            scanf ("%d", b + i);
        sort (a, a + n);
        sort (b, b + n);
        maxwin = -n;
        {
            i = 0;
            while (i < n) {
                k = count (i);
                i++;
                if (maxwin < k)
                    maxwin = k;
            };
        }
        printf ("%d\n", maxwin * 200);
    }
    return 0;
}

