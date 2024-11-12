int prime (int x);

int main () {
    int n;
    int a;
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
    {
        a = 6;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a <= n) {
            int BsEOJRr70x;
            int q;
            int sp;
            int vdz4kflV;
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
            {
                vdz4kflV = 0;
                sp = 0;
                BsEOJRr70x = 221 - 218;
                while (a / 2 >= BsEOJRr70x) {
                    q = a - BsEOJRr70x;
                    sp = prime (BsEOJRr70x);
                    vdz4kflV = prime (q);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (!(1 != sp * vdz4kflV)) {
                        printf ("%d=%d+%d\n", a, BsEOJRr70x, q);
                        break;
                    }
                    BsEOJRr70x = BsEOJRr70x +2;
                };
            }
            a = a + 2;
        };
    }
    return 0;
}

int prime (int x) {
    int j, sx = 0;
    if (x == 3 || x == 5 || x == 7)
        sx = 1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    {
        j = 3;
        while (j * j < x) {
            if (x % j == 0)
                break;
            if ((j + 2) * (j + 2) > x) {
                sx = 1;
            }
            j = j + 2;
        };
    }
    return sx;
}

