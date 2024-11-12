int main () {
    int zx [100];
    int n;
    n = 0;
    int i;
    int as [100];
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
    i = 0;
    scanf ("%d", &n);
    while (i < n) {
        scanf ("%d", &as[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i++;
    }
    i = 0;
    while (i < n) {
        zx[i] = as[i];
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
        i++;
    }
    i = n - 1;
    for (; i > 0;) {
        printf ("%d ", zx[i]);
        i--;
    }
    printf ("%d", zx[0]);
}

