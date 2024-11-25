int main () {
    int n, JvzYjABRU, i, j, s;
    int a [1000];
    scanf ("%d %d", &n, &JvzYjABRU);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            scanf ("%d", &a[i]);
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
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    s = 0;
    {
        i = 1;
        while (n - 1 >= i) {
            {
                j = i + 1;
                while (j <= n) {
                    if ((a[i] + a[j]) == JvzYjABRU)
                        s = s + 1;
                    j = j + 1;
                };
            }
            i++;
        };
    }
    if (s == 0)
        printf ("no");
    else
        printf ("yes");
    return 0;
}

