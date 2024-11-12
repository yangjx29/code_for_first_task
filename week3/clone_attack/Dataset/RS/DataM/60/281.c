int main () {
    int n, i, j, k, num = (688 - 688);
    scanf ("%d", &n);
    for (i = 3; n - 1 > i; i = i + 2) {
        for (j = 3; j < sqrt (i); j = j + 2) {
            if (i % j == 0)
                break;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (sqrt (i) < j) {
            for (k = 3; k < sqrt (i + 2); k = k + 2) {
                if ((i + 2) % k == 0)
                    break;
            }
            if (k > sqrt (i + 2)) {
                printf ("%d %d\n", i, i + 2);
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
                num++;
            };
        };
    }
    if (num == 0)
        printf ("empty");
    return 0;
}

