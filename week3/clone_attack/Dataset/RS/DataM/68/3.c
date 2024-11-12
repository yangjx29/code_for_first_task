int isprime (int rrpD5zyP96CL);

int main () {
    int n, a;
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
    a = 6;
    for (; n >= a;) {
        int b;
        {
            b = 3;
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
            while (b <= a / 2) {
                if (isprime (b) && isprime (a - b)) {
                    printf ("%d=%d+%d\n", a, b, a - b);
                    break;
                }
                b += 2;
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
        a += 2;
    };
}

int isprime (int rrpD5zyP96CL) {
    int y, s;
    s = sqrt (rrpD5zyP96CL);
    {
        y = 3;
        while (y <= s) {
            if (rrpD5zyP96CL % y == 0)
                return 0;
            y++;
        };
    }
    if (y >= s + 1)
        return 1;
}

