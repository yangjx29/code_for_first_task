int main (int argc, char *argv []) {
    int i;
    int j;
    int sum;
    int n;
    int a [1000] [1000];
    int c;
    int k;
    int r;
    int t;
    c = 0;
    k = 0;
    r = 0;
    t = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            {
                j = 0;
                while (j < n) {
                    scanf ("%d ", &a[i][j]);
                    if (a[i][j] == 0 && a[i][j - 1] == 255 && !(255 != a[i - 1][j])) {
                        c = i;
                        k = j;
                    }
                    if (a[i][j] == 0 && a[i][j - 1] == 0 && a[i - 1][j] == 0) {
                        r = i;
                        t = j;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    sum = (r - c - 1) * (t - k - 1);
    printf ("%d\n", sum);
    return 0;
}

