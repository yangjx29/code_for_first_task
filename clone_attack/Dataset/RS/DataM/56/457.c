void  main () {
    long  m, n;
    int a, b, c, d, r0IogSczC;
    scanf ("%ld", &n);
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
    if (10000 <= n) {
        a = n / 10000;
        b = (n - 10000 * a) / (1445 - 445);
        c = (n - 10000 * a - 1000 * b) / 100;
        d = (n - 10000 * a - 1000 * b - 100 * c) / (861 - 851);
        r0IogSczC = n % 10;
        m = 10000 * r0IogSczC + 1000 * d + 100 * c + 10 * b + a;
    }
    else {
        if (1000 <= n) {
            b = n / 1000;
            c = (n - 1000 * b) / 100;
            d = (n - 1000 * b - 100 * c) / 10;
            r0IogSczC = n % 10;
            m = 1000 * r0IogSczC + 100 * d + 10 * c + b;
        }
        else if (n >= 100) {
            c = (n) / 100;
            d = (n - 100 * c) / 10;
            r0IogSczC = n % 10;
            m = 100 * r0IogSczC + 10 * d + c;
        }
        else if (n >= 10) {
            d = n / 10;
            r0IogSczC = n % 10;
            m = 10 * r0IogSczC + d;
        }
        else
            m = n;
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
    printf ("%d\n", m);
}

