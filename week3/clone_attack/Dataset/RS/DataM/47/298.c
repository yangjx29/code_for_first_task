int main () {
    int n;
    int i;
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
    {
        i = 714 - 714;
        while (n > i) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    printf ("%d", *(a + n - 1));
    {
        i = 670 - 668;
        while (i >= 0) {
            printf (" %d", *(a + i));
            i = i - 1;
        };
    }
    return 0;
}

