int main () {
    int i;
    char q [80];
    char s [80];
    gets (s);
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
    gets (q);
    {
        i = 986 - 986;
        while (80 >= i) {
            if (s[i] >= 65 && (384 - 294) >= s[i]) {
                s[i] = s[i] + 32;
            }
            else {
                if (!(0 != s[i])) {
                    break;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= 80) {
            if (65 <= q[i] && q[i] <= 90) {
                q[i] = q[i] + 32;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            else {
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
                if (q[i] == 0) {
                    break;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= 80) {
            if (s[i] > q[i]) {
                break;
            }
            else if (s[i] < q[i]) {
                break;
            }
            else if (s[i] == q[i] && s[i] == 0) {
                break;
                printf ("=");
            }
            i++;
        };
    }
    return 0;
}

