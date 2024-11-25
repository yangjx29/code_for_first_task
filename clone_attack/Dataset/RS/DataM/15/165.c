int main () {
    int m;
    int vvmWnJEfiMq, j;
    int n;
    int x1, y1, x2, y2, k;
    int x;
    scanf ("%d", &n);
    {
        vvmWnJEfiMq = 577 - 576;
        while (n * n >= vvmWnJEfiMq) {
            scanf ("%d", &x);
            if (x == 0)
                break;
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
            vvmWnJEfiMq = vvmWnJEfiMq + 1;
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
    {
        j = 1;
        while (j <= n * n - vvmWnJEfiMq) {
            scanf ("%d", &x);
            if (x == 0)
                k = j + vvmWnJEfiMq;
            j = j + 1;
        };
    }
    x1 = (int) (vvmWnJEfiMq / n) + 1, y1 = vvmWnJEfiMq % n;
    x2 = (int) (k / n) + 1, y2 = k % n;
    m = (x2 - x1 - 1) * (y2 - y1 - 1);
    printf ("%d\n", m);
    return 0;
}

