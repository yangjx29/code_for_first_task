int main () {
    int a [(1053 - 953)];
    int i;
    int n, m;
    getchar ();
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    getchar ();
    scanf ("%d %d", &n, &m);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    printf ("%d", a[n - m]);
    {
        i = 850 - 849;
        while (i < n) {
            printf (" %d", a[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < (n - m)) {
            printf (" %d", a[i]);
            i = i + 1;
        };
    };
}

