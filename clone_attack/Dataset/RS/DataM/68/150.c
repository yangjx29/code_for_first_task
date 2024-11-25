int sushu (int x) {
    int r;
    int i;
    r = (63 - 62);
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
    if (!(0 != x % 2))
        r = 0;
    {
        i = 3;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (sqrt (x) >= i) {
            if (!(0 != x % i))
                r = 0;
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
            i = i + 2;
        };
    }
    return r;
}

int main (int argc, char *argv []) {
    int n;
    int fig;
    int elm1;
    int elm2;
    scanf ("%d", &n);
    {
        fig = 6;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (fig <= n) {
            {
                elm1 = 2;
                while (elm1 < fig) {
                    elm2 = fig - elm1;
                    if (sushu (elm1) == 1 && sushu (elm2) == 1) {
                        printf ("%d=%d+%d\n", fig, elm1, elm2);
                        break;
                    }
                    elm1 = elm1 + 1;
                };
            }
            fig = fig + 2;
        };
    }
    return 0;
}

