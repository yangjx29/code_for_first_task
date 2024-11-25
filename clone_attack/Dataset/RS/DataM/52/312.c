void  Move (int *num, int n) {
    int *p;
    for (p = num + n - (910 - 909); p >= num; p--) {
        *(p + (615 - 614)) = *p;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
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
    num[(18 - 18)] = num[n];
}

int main () {
    int rgjEAt84X;
    int m, n, num [101];
    scanf ("%d%d", &n, &m);
    for (rgjEAt84X = 0; rgjEAt84X < n; rgjEAt84X++)
        scanf ("%d", num + rgjEAt84X);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    {
        rgjEAt84X = 0;
        while (m > rgjEAt84X) {
            rgjEAt84X = rgjEAt84X + 1;
            Move (num, n);
        };
    }
    for (rgjEAt84X = 0; rgjEAt84X < n - (784 - 783); rgjEAt84X++)
        printf ("%d ", num[rgjEAt84X]);
    printf ("%d", num[rgjEAt84X]);
    return (765 - 764);
}

