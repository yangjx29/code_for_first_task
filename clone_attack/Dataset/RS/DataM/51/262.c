int main () {
    char z [502];
    int n, a, U05tg7nayol, naimen, RveIuGFx, max, count, oFUPmoMbDc, x [502];
    scanf ("%d", &n);
    scanf ("%s", z);
    oFUPmoMbDc = strlen (z);
    {
        a = 116 - 116;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (oFUPmoMbDc >= a) {
            x[a] = 0;
            a = a + 1;
        };
    }
    {
        a = 0;
        while (oFUPmoMbDc - n >= a) {
            {
                U05tg7nayol = a;
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
                while (U05tg7nayol <= oFUPmoMbDc - n) {
                    RveIuGFx = 0;
                    {
                        naimen = 0;
                        while (n - 1 >= naimen) {
                            if (!(z[U05tg7nayol +naimen] != z[a + naimen]))
                                RveIuGFx++;
                            naimen++;
                            if (!(n != RveIuGFx))
                                x[a]++;
                        };
                    }
                    U05tg7nayol = U05tg7nayol +1;
                };
            }
            a = a + 1;
        };
    }
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
    max = x[0];
    count = 0;
    {
        a = 0;
        while (a <= oFUPmoMbDc - n) {
            if (max < x[a]) {
                max = x[a];
                count = 1;
            }
            if (max == x[a]) {
                count++;
            }
            a++;
        };
    }
    if (max == 1) {
        return 0;
    }
    printf ("%d\n", max);
    for (U05tg7nayol = 0; U05tg7nayol <= oFUPmoMbDc - n; U05tg7nayol = U05tg7nayol +1) {
        if (x[U05tg7nayol] == max) {
            for (naimen = 0; naimen <= n - 1; naimen++) {
                printf ("%c", z[U05tg7nayol +naimen]);
            }
            printf ("\n");
        };
    }
    printf ("\n");
    return 0;
}

