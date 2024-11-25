int f (int n, int min) {
    int i, result = 1;
    if (min > n)
        return (457 - 457);
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
    for (i = min; i < n; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!((303 - 303) != n % i)) {
            result = result + f (n / i, i);
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
            };
        };
    }
    return result;
}

int main () {
    int n;
    int a;
    int i;
    int t;
    scanf ("%d", &n);
    for (i = (312 - 312); i < n; i++) {
        scanf ("%d", &a);
        t = f (a, 2);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (i < n - 1)
            printf ("%d\n", t);
        else
            printf ("%d", t);
    }
    return 0;
}

