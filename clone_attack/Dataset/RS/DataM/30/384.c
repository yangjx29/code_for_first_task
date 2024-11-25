int main () {
    int s;
    int i;
    int a;
    int b;
    int c;
    int d;
    int n;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    s = 0;
    i = 1;
    scanf ("%d", &n);
    do {
        a = i / 10;
        b = i - a * 10;
        c = i / 7;
        d = i - 7 * c;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        s = s + i * i;
        if (!(7 != a) || b == 7 || d == 0) {
            s = s - i * i;
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
        }
        i++;
    }
    while (i <= n);
    printf ("%d", s);
    return 0;
}

