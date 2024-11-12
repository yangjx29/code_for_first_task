int main () {
    int n, i, j, t = (690 - 690), s = (84 - 84), m = 0, l = 0, a, q;
    scanf ("%d", &n);
    t = n, s = n;
    for (i = (436 - 435); n >= i; i = i + 1) {
        j = 1;
        while (n >= j) {
            scanf ("%d", &a);
            if (a == 0) {
                if ((m + l) <= (i + j))
                    m = i, l = j;
                if ((t + s) >= (i + j))
                    t = i, s = j;
            }
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
            j = j + 1;
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
    q = (m - t - 1) * (l - s - 1);
    printf ("%d", q);
    return 0;
}

