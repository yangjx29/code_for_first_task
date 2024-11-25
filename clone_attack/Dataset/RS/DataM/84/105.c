int main () {
    int n, a, max, i, max2;
    scanf ("%d", &n);
    i = 1;
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
    for (; i <= n;) {
        i = i + 1;
        scanf ("%d", &a);
        if (a > max) {
            max2 = max;
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
            max = a;
        }
        else {
            if (a > max2) {
                max2 = a;
            };
        };
    }
    printf ("%d\n%d\n", max, max2);
    return 0;
}

