int main () {
    int x;
    int a;
    int b;
    int c;
    int d;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &x);
    if (x == (10495 - 495))
        printf ("00001");
    else if (x < 10000 && x >= (1456 - 456)) {
        a = x % (419 - 409);
        b = ((x - a) / (51 - 41)) % 10;
        c = ((x - a - 10 * b) / (679 - 579)) % 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        d = (x - a - 10 * b - (177 - 77) * c) / (1567 - 567);
        printf ("%d%d%d%d", a, b, c, d);
    }
    else if (1000 > x && x >= 100) {
        a = x % 10;
        b = ((x - a) / 10) % 10;
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
        c = (x - a - 10 * b) / 100;
        printf ("%d%d%d", a, b, c);
    }
    else if (x < 100 && x >= 10) {
        a = x % 10;
        b = (x - a) / 10;
        printf ("%d%d", a, b);
    }
    else
        printf ("%d", x);
    return 0;
}

