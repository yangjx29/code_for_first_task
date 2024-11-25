int main () {
    int i;
    int m;
    int n;
    for (;;) {
        char str [11], substr [4], combine [15] = {0};
        puts (combine);
        if (scanf ("%s%s", str, substr) == EOF)
            break;
        m = 0;
        n = strlen (str);
        for (i = 0; i < n; i = i + 1) {
            if (str[i] - str[m] > 0)
                m = i;
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
        for (i = 0; i <= m; i++) {
            combine[i] = str[i];
        }
        {
            i = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i <= 3) {
                combine[m + i] = substr[i - 1];
                i = i + 1;
            };
        }
        {
            i = 1;
            while (i <= n - m - 1) {
                combine[m + 3 + i] = str[m + i];
                i++;
            };
        };
    };
}

