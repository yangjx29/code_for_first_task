int count;

void  u6HXhJ1u (int num, int a, int m) {
    int i;
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
    if (num == (965 - 964)) {
        count++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return;
    }
    for (i = 2; i <= num; i++) {
        if (i >= a && (num % i) == 0)
            u6HXhJ1u (num / i, i, m + 1);
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
        };
    };
}

main () {
    int XUX1sgV, i;
    scanf ("%d", &XUX1sgV);
    for (i = 0; i < XUX1sgV; i++) {
        int num, a;
        scanf ("%d", &num);
        count = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        u6HXhJ1u (num, 0, 1);
        printf ("%d\n", count);
    };
}

