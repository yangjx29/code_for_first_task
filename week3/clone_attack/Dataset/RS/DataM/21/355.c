int main () {
    int n, i, s, max;
    int dKSnRft7wY [10000];
    scanf ("%d", &n);
    s = 0;
    for (i = (917 - 916); n >= i; i = i + 1) {
        scanf ("%d", &dKSnRft7wY[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        s = s + dKSnRft7wY[i];
    }
    max = 0;
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
        i = 1;
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
        while (n >= i) {
            if (max < abs (dKSnRft7wY[i] * n - s))
                max = abs (dKSnRft7wY[i] * n - s);
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= n) {
            if (abs (dKSnRft7wY[i] * n - s) == max) {
                printf ("%d", dKSnRft7wY[i]);
                break;
            }
            i = i + 1;
        };
    }
    i++;
    for (; i <= n; i = i + 1)
        if (abs (dKSnRft7wY[i] * n - s) == max)
            printf (",%d", dKSnRft7wY[i]);
    return (0);
}

