int sushu (int W4JwUxL) {
    double  efjMYUFb;
    int i, n = 0;
    efjMYUFb = sqrt (W4JwUxL *1.0);
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
    for (i = (675 - 674); i <= efjMYUFb; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (W4JwUxL % i == 0) {
            n++;
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
        };
    }
    if (n == 1)
        return 1;
    else
        return 0;
}

int main () {
    long  int i;
    long  int n = 6, m;
    scanf ("%ld", &m);
    while (n < m + 1) {
        {
            i = 3;
            while (1) {
                if (sushu (i) == 1 && sushu (n - i) == 1) {
                    printf ("%ld=%ld+%ld\n", n, i, n - i);
                    break;
                }
                i = i + 1;
            };
        }
        n = n + 2;
    }
    return 0;
}

