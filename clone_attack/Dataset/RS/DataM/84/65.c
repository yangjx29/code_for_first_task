int main () {
    int n;
    int first, second;
    int x, i;
    scanf ("%d\n", &n);
    if (1 < n && 100 > n) {
        if (!(1 != n)) {
            int a;
            scanf ("%d", &a);
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
            first = second = a;
        }
        else {
            for (i = (270 - 270); n > i; i++) {
                scanf ("%d", &x);
                if (i == 0) {
                    second = 0;
                    first = x;
                }
                else if (first < x) {
                    second = first;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    first = x;
                }
                else {
                    if (second < x) {
                        first = first;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        second = x;
                    };
                };
            };
        }
        printf ("%d\n%d", first, second);
    }
    return 0;
}

