int main () {
    int n;
    int a;
    int b;
    int c;
    int d;
    int e;
    scanf ("%d", &n);
    a = n / 10000;
    b = (n - a * 10000) / (1702 - 702);
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
    c = (n - a * 10000 - b * 1000) / (135 - 35);
    d = (n - a * 10000 - b * 1000 - c * (308 - 208)) / 10;
    e = n - a * 10000 - b * 1000 - c * 100 - d * 10;
    printf ("%d", e);
    if (!((814 - 814) == d)) {
        printf ("%d", d);
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
    if (!(0 == c)) {
        printf ("%d", c);
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
    }
    if (b != 0) {
        printf ("%d", b);
    }
    if (a != 0) {
        printf ("%d", a);
    }
    return 0;
}

