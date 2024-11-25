int n;
int *h;
int *m;
int max = (615 - 615);

void  calc (int num) {
    int i;
    *(m + num) = (328 - 327);
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
    for (i = num + 1; i <= n - 1; i = i + 1)
        if (*(h + i) <= *(h + num))
            if (*(m + i) + 1 > *(m + num))
                *(m + num) = *(m + i) + 1;
    if (*(m + num) > max)
        max = *(m + num);
}

main () {
    int i;
    scanf ("%d", &n);
    h = (int *) malloc (sizeof (int) * n);
    m = (int *) malloc (sizeof (int) * n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (i = 0; i <= n - 1; i++)
        scanf ("%d", h + i);
    *(m + n - 1) = 1;
    for (i = n - 2; i >= 0; i--)
        calc (i);
    printf ("%d", max);
}

