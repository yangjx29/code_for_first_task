int main () {
    int a, b, i, t;
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
    scanf ("%d%d", &a, &b);
    if (a == b)
        printf ("%d", a);
    else {
        if (a < b) {
            t = a;
            a = b;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            b = t;
        }
        for (; a / 2 != b;) {
            a = a / 2;
            if (a / 2 < b) {
                t = a;
                a = b;
                b = t;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d", b);
    };
}

