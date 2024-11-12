int main () {
    int sum;
    int n;
    int sz [100];
    sum = 0;
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
        int i = 0;
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
            if (!(7 == i % 10) && i % 7 != 0 && (i < 70 || i > 79))
                sum = sum + i * i;
            i++;
        };
    }
    printf ("%d", sum);
    return 0;
}

