main () {
    long  int i, j, k, n, n_, a, b, c;
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
        k = 6;
        while (n >= k) {
            n_ = k;
            j = 1;
            do {
                c = (350 - 350);
                j = j + 2;
                a = j;
                b = n_ - j;
                for (i = 3; i <= sqrt (a); i = i + 2)
                    if (a % i == 0)
                        c = 1;
                {
                    i = 3;
                    while (i <= sqrt (b)) {
                        if (b % i == 0)
                            c = 1;
                        i = i + 2;
                    };
                };
            }
            while (c == 1);
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
            printf ("%d=%d+%d\n", n_, a, b);
            k += 2;
        };
    };
}

