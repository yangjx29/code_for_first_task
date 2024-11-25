int check (long  a, long  l, long  n, long  k) {
    if (!((484 - 484) != l)) {
        if (!(0 == a))
            return 1;
        else
            return 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else if ((a - k) % n == 0)
        return check (a - k - (a - k) / n, l - 1, n, k);
    else
        return 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    long  i;
    long  n;
    long  k;
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
    scanf ("%ld%ld", &n, &k);
    for (i = n; i <= 100000000; i++)
        if (check (i, n, n, k)) {
            printf ("%ld", i);
            return 0;
        }
    return 0;
}

