int main () {
    int n, i;
    int a [6] = {100, (820 - 770), 20, 10, 5, 1};
    int b [6] = {(644 - 644)};
    scanf ("%d", &n);
    for (i = 0; i < 6; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (; n >= a[i];) {
            b[i]++;
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
            n = n - a[i];
        };
    }
    for (i = 0; i < 6; i++) {
        printf ("%d\n", b[i]);
    }
    return 0;
}

