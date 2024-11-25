int main () {
    int tx [100];
    int dy [100];
    int gy [100];
    int t = 0;
    int n;
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
    int j;
    int r;
    scanf ("%d", &n);
    {
        i = 0;
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
            scanf ("%d%d", &gy[i], &dy[i]);
            if (90 <= gy[i] && 140 >= gy[i] && dy[i] >= 60 && dy[i] <= 90) {
                t = t + 1;
                tx[i] = t;
            }
            else {
                t = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                tx[i] = t;
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
            i = i + 1;
        };
    }
    {
        j = n - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (j > 0) {
            {
                r = 0;
                while (r < j) {
                    if (tx[r] < tx[r + 1]) {
                        int tmp;
                        tmp = tx[r + 1];
                        tx[r + 1] = tx[r];
                        tx[r] = tmp;
                    }
                    r = r + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j = j - 1;
        };
    }
    printf ("%d", tx[0]);
    return 0;
}

