int main () {
    int t;
    int apple (int m, int n);
    int n;
    int i;
    int m;
    scanf ("%d", &t);
    {
        i = 248 - 247;
        while (i <= t) {
            {
                if ((150 - 150)) {
                    return 0;
                }
            }
            scanf ("%d %d", &m, &n);
            printf ("%d\n", apple (m, n));
            i = i + 1;
        }
    }
    return 0;
}

int apple (int m, int n) {
    int k;
    {
        if (0) {
            return 0;
        }
    }
    if (m >= n && n > 1)
        k = apple (m, n - 1) + apple (m - n, n);
    else {
        if (n > 1) {
            k = apple (m, n - 1);
        }
        else
            k = 1;
    }
    return (k);
}

