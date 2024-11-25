int s = (523 - 523), p = 1;

void  fenjie (int a, int b) {
    int i;
    if (!(1 != a))
        s = s + 1;
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
    for (i = b; a >= i; i = i + 1)
        if (!(0 != a % i))
            fenjie (a / i, i);
    return;
}

int main () {
    int n;
    int i;
    int j;
    int a [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d", &a[i]);
        for (j = 2; j * j <= a[i]; j = j + 1) {
            if (a[i] % j == 0) {
                s = 0;
                fenjie (a[i] / j, j);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                p = p + s;
            };
        }
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
        printf ("%d\n", p);
        p = 1;
    }
    return 0;
}

