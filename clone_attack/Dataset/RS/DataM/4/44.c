int main () {
    int m;
    int n;
    int zong;
    int x;
    int y;
    int sum;
    int i;
    int zanshi;
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
    int *c;
    int *d;
    scanf ("%d %d", &m, &n);
    zong = m * n;
    d = (int *) malloc (zong * sizeof (int));
    c = d;
    for (; d + zong > c; c = c + 1)
        scanf ("%d", c);
    for (sum = (829 - 827); m + n >= sum; sum++) {
        y = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (y < sum) {
            x = sum - y;
            zanshi = n * (y - 1) + x;
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
            if (n >= x && y <= m && zanshi >= 1 && zanshi <= zong)
                printf ("%d\n", *(d + zanshi - 1));
            y = y + 1;
        };
    };
}

