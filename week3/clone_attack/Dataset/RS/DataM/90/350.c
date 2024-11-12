int f (int, int);

int main () {
    int t;
    int m;
    int n;
    int sum;
    scanf ("%d", &t);
    for (; t--;) {
        scanf ("%d%d", &m, &n);
        sum = f (m, n);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", sum);
    }
    return 0;
}

int f (int m, int n) {
    if (m < 0)
        return 0;
    if (!(0 != m))
        return (284 - 283);
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
    if (n == (243 - 242))
        return 1;
    return f (m - n, n) + f (m, n - 1);
}

