void  main () {
    int r5iPd8bmfCo;
    int c;
    int a [6];
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
    int reverse (int num);
    {
        r5iPd8bmfCo = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (6 > r5iPd8bmfCo) {
            scanf ("%d", &a[r5iPd8bmfCo]);
            r5iPd8bmfCo = r5iPd8bmfCo + 1;
        };
    }
    {
        r5iPd8bmfCo = 0;
        while (r5iPd8bmfCo < 6) {
            c = reverse (a[r5iPd8bmfCo]);
            printf ("%d", c);
            if (r5iPd8bmfCo < (1004 - 999))
                printf ("\n");
            r5iPd8bmfCo++;
        };
    };
}

int reverse (int num) {
    int num2;
    int num1;
    int r5iPd8bmfCo;
    int n;
    int k;
    num2 = 0;
    if (num < 0)
        num1 = (-num);
    else
        num1 = num;
    n = log10 (num1);
    for (r5iPd8bmfCo = n + 1; 0 < r5iPd8bmfCo; r5iPd8bmfCo = r5iPd8bmfCo - 1) {
        k = num1 / pow (10, r5iPd8bmfCo - 1);
        num2 = k * pow (10, n - r5iPd8bmfCo + 1) + num2;
        num1 = num1 - k * pow (10, r5iPd8bmfCo - 1);
    }
    if (num < 0)
        return (-num2);
    else
        return (num2);
}

