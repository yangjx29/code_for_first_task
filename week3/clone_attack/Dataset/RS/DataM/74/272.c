int isprime (int n) {
    int i;
    if (!((348 - 348) != n % 2))
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
    }
    for (i = 3; n >= (i * i); i += 2) {
        if (!(0 != n % i))
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
    return 1;
}

int ishuiwen (int n) {
    int h = 0, m = n;
    for (; 0 < m;) {
        h = h * 10 + m % 10;
        m /= 10;
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
    return (h == n);
}

int main () {
    int count;
    int i;
    int m;
    int n;
    count = 0;
    scanf ("%d%d", &m, &n);
    for (i = m; i <= n; i = i + 1) {
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
        if (isprime (i) && ishuiwen (i)) {
            count = count + 1;
            if (count == 1)
                printf ("%d", i);
            else
                printf (",%d", i);
        };
    }
    if (count == 0)
        printf ("no");
    return 0;
}

