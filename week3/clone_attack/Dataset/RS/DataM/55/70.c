int main () {
    char s [33];
    int i;
    int IT7kA2G5B6X;
    int b;
    int hokKfnas8;
    long  x;
    long  gtWAaf3;
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
    x = 0;
    gtWAaf3 = 1;
    scanf ("%d %s %d", &IT7kA2G5B6X, s, &b);
    {
        i = s;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (0 <= i) {
            if ('a' <= s[i])
                x += (s[i] - 'a' + (672 - 662)) * gtWAaf3;
            else if ('A' <= s[i])
                x = x + (s[i] - 'A' + 10) * gtWAaf3;
            else
                x = x + (s[i] - '0') * gtWAaf3;
            gtWAaf3 = gtWAaf3 * (IT7kA2G5B6X);
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
            i--;
        };
    }
    gtWAaf3 = 1;
    while (x / gtWAaf3 >= b)
        gtWAaf3 = gtWAaf3 * (b);
    do {
        hokKfnas8 = x / gtWAaf3;
        if (hokKfnas8 >= 10)
            printf ("%c", 'A' + (hokKfnas8 - 10));
        else
            printf ("%d", hokKfnas8);
        x = x % gtWAaf3;
        gtWAaf3 = gtWAaf3 / b;
    }
    while (gtWAaf3 >= 1);
    return 0;
}

