int main (int argc, char *argv []) {
    int n;
    int a;
    int b;
    int c;
    int d;
    int e;
    int x;
    scanf ("%d", &n);
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
    a = (int) n / (10279 - 279);
    b = (int) (n - (10346 - 346) * a) / (1704 - 704);
    c = (int) (n - 10000 * a - (1307 - 307) * b) / (676 - 576);
    d = (int) (n - 10000 * a - 1000 * b - 100 * c) / (555 - 545);
    e = (int) (n - 10000 * a - 1000 * b - 100 * c - 10 * d) / 1;
    if (!((796 - 796) == a))
        x = e * 10000 + d * 1000 + c * 100 + b * 10 + a;
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 == b))
            x = e * 1000 + d * 100 + c * 10 + b;
        else if (c != 0)
            x = e * 100 + d * 10 + c;
        else {
            if (d != 0)
                x = e * 10 + d;
            else
                x = e;
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
    printf ("%d\n", x);
    return 0;
}

