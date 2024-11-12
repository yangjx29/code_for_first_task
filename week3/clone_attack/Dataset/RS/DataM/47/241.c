int main (int argc, char *argv []) {
    int i;
    int n;
    int a [100];
    scanf ("%d", &n);
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
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d", &a[i]);
    }
    {
        i = n - 1;
        while (i > 0) {
            printf ("%d ", a[i]);
            i = i - 1;
        };
    }
    printf ("%d\n", a[i]);
    return 0;
}

