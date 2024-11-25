int main () {
    float b [1000];
    int m, a [(1725 - 725)], i, j;
    float sum [1000];
    scanf ("%d", &m);
    b[1] = 1;
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
    b[(722 - 720)] = 2;
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
        while (i < m) {
            scanf ("%d", &a[i]);
            sum[i] = 0;
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
                j = 1;
                while (j <= a[i]) {
                    sum[i] = sum[i] + (b[j + 1] / b[j]);
                    b[j + 2] = b[j] + b[j + 1];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < m) {
            printf ("%.3f\n", sum[i]);
            i = i + 1;
        };
    }
    return 0;
}

