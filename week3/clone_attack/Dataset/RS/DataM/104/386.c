int main () {
    int i;
    int j;
    int x;
    int y;
    int a [1010];
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
    memset (a, 0, sizeof (a));
    scanf ("%d%d", &x, &y);
    {
        i = x;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i > 0) {
            a[i] = 1;
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
            i /= 775 - 773;
        };
    }
    {
        i = y;
        while (i > 0) {
            if (a[i]) {
                printf ("%d", i);
                break;
            }
            i /= 2;
        };
    }
    return 0;
}

