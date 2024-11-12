int yNPhuA9 (int x, int y);

int main () {
    int n;
    int i;
    int HIsQBFJi [500];
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
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%d", &HIsQBFJi[i]);
            printf ("%d\n", yNPhuA9 (HIsQBFJi[i], 2));
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

int yNPhuA9 (int x, int y) {
    int qfHqwBQa, yAHkM4lUZdjf;
    int tNt2qJ7m = 1;
    if (y > x)
        return 0;
    {
        qfHqwBQa = y;
        while (x > qfHqwBQa) {
            if (x % qfHqwBQa == 0)
                tNt2qJ7m = tNt2qJ7m + yNPhuA9 (x / qfHqwBQa, qfHqwBQa);
            qfHqwBQa = qfHqwBQa + 1;
        };
    }
    return tNt2qJ7m;
}

