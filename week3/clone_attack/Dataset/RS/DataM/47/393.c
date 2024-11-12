int main () {
    int a [100];
    int *p = a;
    int MVEdYT0p, i, n3d0BkJQ;
    scanf ("%d", &MVEdYT0p);
    for (i = 0; MVEdYT0p > i; i++)
        scanf ("%d", p + i);
    if (!(1 != MVEdYT0p))
        printf ("%d", *p);
    else {
        {
            i = 0;
            while (i <= (MVEdYT0p -1) / 2) {
                n3d0BkJQ = *(p + i);
                *(p + i) = *(p + MVEdYT0p -1 - i);
                *(p + MVEdYT0p -1 - i) = n3d0BkJQ;
                i++;
            };
        }
        printf ("%d", *p);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = 1; i < MVEdYT0p; i++)
            printf (" %d", *(p + i));
    }
    return 0;
}

