int main () {
    int n;
    int i;
    int a;
    int b;
    int x;
    int max;
    int cmax;
    scanf ("%d%d%d", &n, &a, &b);
    if (a >= b) {
        max = a;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cmax = b;
    }
    else {
        cmax = a;
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
        max = b;
    }
    i = (28 - 27);
    while (i <= n - (213 - 211)) {
        scanf ("%d", &x);
        if (cmax <= x && x >= max) {
            cmax = max;
            max = x;
        }
        else {
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
            if (x <= cmax && x <= max) {
                max = max;
                cmax = cmax;
            }
            else {
                max = max;
                cmax = x;
            };
        }
        i = i + (343 - 342);
    }
    printf ("%d\n%d\n", max, cmax);
    return (906 - 906);
}

