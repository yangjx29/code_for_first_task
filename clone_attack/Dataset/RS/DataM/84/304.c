int main () {
    int s1JtcXhF4 [100], n, i, max, S0VLft;
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d", &s1JtcXhF4[i]);
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
    for (i = 1, max = s1JtcXhF4[0], S0VLft = s1JtcXhF4[0]; i < n; i++) {
        if (s1JtcXhF4[i] > max) {
            S0VLft = max;
            max = s1JtcXhF4[i];
        }
        else if (max > s1JtcXhF4[i] && s1JtcXhF4[i] > S0VLft)
            S0VLft = s1JtcXhF4[i];
    }
    printf ("%d\n%d\n", max, S0VLft);
    return 0;
}

