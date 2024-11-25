int main () {
    int n;
    int i;
    int j;
    int k;
    int a [(913 - 713)];
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
    scanf ("%d", &n);
    for (i = 0; i < 2 * n; i = i + 2)
        scanf ("%d %d", &a[i], &a[i + 1]);
    for (i = 0, j = 0, k = 0; i < 2 * n; i = i + 2) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[i] >= 90 && 140 >= a[i] && a[i + 1] >= 60 && a[i + 1] <= 90)
            j = j + 1;
        else {
            {
                if (j > k)
                    k = j;
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
            j = 0;
        };
    }
    if (j > k)
        k = j;
    printf ("%d\n", k);
    return 0;
}

