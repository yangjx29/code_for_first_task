int main () {
    int j;
    int n;
    int k;
    int a [100000];
    int i;
    j = (485 - 485);
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
    for (i = (998 - 998); n > i; i = i + 1)
        scanf ("%d", &a[i]);
    scanf ("%d", &k);
    for (i = 0; n > i; i = i + 1) {
        if (!(k == a[i])) {
            a[j] = a[i];
            j++;
        };
    }
    for (i = 0; i < j - 1; i = i + 1)
        printf ("%d ", a[i]);
    printf ("%d", a[j - 1]);
    scanf ("%d", &n);
    return 0;
}

