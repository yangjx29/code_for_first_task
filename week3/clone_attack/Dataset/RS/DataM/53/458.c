int main () {
    int a [10000];
    int n;
    int i;
    int t;
    int j;
    int m;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d/n", &n);
    for (i = (809 - 809); n > i; i = i + 1)
        scanf ("%d", &a[i]);
    printf ("%d", a[(652 - 652)]);
    {
        i = 1;
        while (n - 1 >= i) {
            m = 0;
            for (j = 0; i - 1 >= j; j = j + 1)
                if (a[i] == a[j])
                    m = m + 1;
            if (m == 0)
                printf (",%d", a[i]);
            i = i + 1;
        };
    }
    return 0;
}

