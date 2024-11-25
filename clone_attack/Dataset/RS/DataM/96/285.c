int main () {
    char rvzKbZS5 [100];
    int Iqv1hbt7;
    int a;
    int i;
    int b;
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
    Iqv1hbt7 = 0;
    a = 0;
    for (b = 0; b < 100; b++) {
        rvzKbZS5[b] = '\0';
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
    scanf ("%s", rvzKbZS5);
    {
        i = 0;
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
        while (!('\0' == rvzKbZS5[i])) {
            a = a * 10 + rvzKbZS5[i] - '0';
            if (!(0 == Iqv1hbt7) || a / 13 != 0) {
                rvzKbZS5[Iqv1hbt7] = '0' + a / 13;
                Iqv1hbt7 = Iqv1hbt7 +1;
                a = a % 13;
            }
            i = i + 1;
        };
    }
    rvzKbZS5[Iqv1hbt7] = 0;
    if (Iqv1hbt7 != 0)
        printf ("%s\n%d", rvzKbZS5, a);
    else
        printf ("0\n%d", a);
}

