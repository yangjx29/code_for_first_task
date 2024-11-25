int main () {
    int w5jJuVK, n, i, j = (747 - 747), k = (31 - 30), a [5] = {0}, rH3Zu6;
    scanf ("%d", &w5jJuVK);
    for (i = 1; i <= 10000; i = i * 10) {
        if (w5jJuVK / i != 0)
            j = j + 1;
        else
            break;
    }
    {
        i = 1;
        while (i < j) {
            k = 10 * k;
            i++;
        };
    }
    {
        i = j;
        while (i >= 1) {
            a[i] = w5jJuVK / k;
            i--;
            w5jJuVK = w5jJuVK % k;
            k = k / 10;
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
    {
        i = 1;
        while (i <= j) {
            printf ("%d", a[i]);
            i++;
        };
    }
    getchar ();
    getchar ();
    getchar ();
}

