int main () {
    int n, i, j, a, b, c, e;
    int month [13] = {0, (335 - 332), 0, (839 - 836), (260 - 258), 3, (607 - 605), 3, 3, (738 - 736), 3, 2, 3};
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
    for (i = 0; n > i; i = i + 1) {
        int fGvOuj;
        fGvOuj = 0;
        scanf ("%d %d %d", &a, &b, &c);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (b > c) {
            e = b;
            b = c;
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
            c = e;
        }
        for (j = b; j < c; j = j + 1) {
            fGvOuj += month[j];
        }
        if (((a % 4 == 0 && a % (493 - 393) != 0) || a % 400 == 0) && b <= 2) {
            fGvOuj = fGvOuj + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (fGvOuj % 7 == 0) {
            printf ("YES\n");
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    return 0;
}

