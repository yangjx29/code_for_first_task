int f (int x) {
    int a [1000] = {(204 - 203), 1};
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
    {
        int i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = (600 - 598);
        while (x > i) {
            a[i] = a[i - 1] + a[i - 2];
            i = i + 1;
        };
    }
    return a[x - 1];
}

int main () {
    int b [1000];
    int n;
    getchar ();
    getchar ();
    scanf ("%d", &n);
    {
        int i = (883 - 883);
        while (n > i) {
            scanf ("%d", &b[i]);
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (n > i) {
            printf ("%d\n", f (b[i]));
            i = i + 1;
        };
    };
}

