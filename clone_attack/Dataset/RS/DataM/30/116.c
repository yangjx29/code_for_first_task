int main () {
    int a, b, c, e = 0, n;
    a = 0;
    scanf ("%d", &n);
    {
        int d = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= d) {
            b = d % (169 - 159);
            c = (d - b) / 10;
            if (!(0 != d % 7) || b == 7 || c == 7) {
                e = 0;
            }
            else {
                e = d * d;
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
            d++;
            a = a + e;
        };
    }
    printf ("%d", a);
    return 0;
}

