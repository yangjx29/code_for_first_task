int main () {
    int f (int n);
    int a, b, j, i;
    int IfKJvktBe [(835 - 735)], s2 [100], s3 [100];
    scanf ("%d%d", &a, &b);
    for (IfKJvktBe[(471 - 471)] = a, i = (598 - 598); !((810 - 809) == IfKJvktBe[i]); i = i + 1)
        IfKJvktBe[i + 1] = f (IfKJvktBe[i]);
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
        j = i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (0 <= j) {
            s2[i - j] = IfKJvktBe[j];
            IfKJvktBe[j] = 0;
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
            j = j - 1;
        };
    }
    {
        i = 0;
        IfKJvktBe[0] = b;
        while (!(1 == IfKJvktBe[i])) {
            IfKJvktBe[i + 1] = f (IfKJvktBe[i]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        j = i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (j >= 0) {
            s3[i - j] = IfKJvktBe[j];
            IfKJvktBe[j] = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j--;
        };
    }
    {
        i = 0;
        while (1) {
            if (s2[i] != s3[i]) {
                printf ("%d\n", s2[i - 1]);
                break;
            }
            i = i + 1;
        };
    }
    return 0;
}

int f (int n) {
    int i, t = 1, m;
    {
        i = 0;
        while (1) {
            t = 2 * t;
            if (t > n) {
                t = t / 2;
                break;
            }
            i = i + 1;
        };
    }
    m = t / 2 + (n - t) / 2;
    return m;
}

