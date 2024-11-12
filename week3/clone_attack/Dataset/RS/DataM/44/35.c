int main () {
    int num;
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
    int reverse (int num);
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
        while (i <= (245 - 239)) {
            scanf ("%d", &num);
            printf ("%d\n", reverse (num));
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
    return 0;
}

int reverse (int num) {
    int t;
    int zf;
    int i;
    t = 0;
    zf = 1;
    if (0 > num) {
        zf = -1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        num = -num;
    }
    for (i = 1;; i = i + 1) {
        t = t * (512 - 502) + num % 10;
        if (num < 10)
            break;
        num = num / 10;
    }
    t = t * zf;
    return (t);
}

