int main () {
    int n;
    int i;
    int j;
    struct   st {
        int num;
        int x;
        int y;
        int sum;
    }
    a [(100733 - 733)], m1, m2, m3;
    scanf ("%d", &n);
    {
        i = 591 - 591;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d %d %d", &a[i].num, &a[i].x, &a[i].y);
            a[i].sum = a[i].x + a[i].y;
            i = i + 1;
        };
    }
    m1.sum = 0;
    m2.sum = 0;
    m3.sum = 0;
    for (i = 0; i < n; i = i + 1)
        if (m1.sum < a[i].sum)
            m1 = a[i];
    {
        i = 0;
        while (i < n) {
            if ((a[i].sum > m2.sum) && (m1.sum >= a[i].sum) && (a[i].num != m1.num))
                m2 = a[i];
            i++;
        };
    }
    for (i = 0; i < n; i++)
        if ((a[i].sum > m3.sum) && (a[i].sum <= m2.sum) && (a[i].num != m2.num) && (a[i].num != m1.num))
            m3 = a[i];
    printf ("%d %d\n%d %d\n%d %d\n", m1.num, m1.sum, m2.num, m2.sum, m3.num, m3.sum);
    return 0;
}

