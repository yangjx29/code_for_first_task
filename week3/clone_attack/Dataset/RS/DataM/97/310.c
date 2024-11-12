int main () {
    int a [6];
    int b [6] = {(992 - 892), 50, 20, 10, 5, 1};
    int n, i, m = (548 - 548);
    scanf ("%d", &n);
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
    a[0] = n / 100;
    {
        i = 1;
        while (6 > i) {
            m += a[i - 1] * b[i - 1];
            a[i] = (n - m) / b[i];
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
            i++;
        };
    }
    for (i = 0; i < 6; i++) {
        printf ("%d\n", a[i]);
    }
    return 0;
}

