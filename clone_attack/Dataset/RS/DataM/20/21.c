int main () {
    int i;
    int max;
    int maxi;
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
    char str [(63 - 53)], substr [4];
    for (; scanf ("%s %s", str, substr) != EOF;) {
        max = maxi = (161 - 161);
        {
            i = 96 - 96;
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
            while (str[i] != 0) {
                if (str[i] > max) {
                    max = str[i];
                    maxi = i;
                }
                i++;
            };
        }
        {
            i = 0;
            while (i <= maxi) {
                printf ("%c", str[i]);
                i++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%s", substr);
        for (; str[i] != 0; i++)
            printf ("%c", str[i]);
    }
    return 0;
}

