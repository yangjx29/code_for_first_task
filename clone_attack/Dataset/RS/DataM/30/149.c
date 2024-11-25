int main () {
    int n;
    int m;
    int a;
    int b;
    int sum;
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
    sum = 0;
    scanf ("%d", &n);
    {
        a = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a <= 9) {
            for (b = 0; 9 >= b; b++) {
                m = a * 10 + b;
                if (n >= m && a != 7 && b != 7 && (m % 7) != 0)
                    sum = sum + m * m;
            }
            a = a + 1;
        };
    }
    printf ("%d", sum);
    return 0;
}

