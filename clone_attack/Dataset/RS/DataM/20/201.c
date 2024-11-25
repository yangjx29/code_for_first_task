int main () {
    char str [11];
    char substr [4];
    char max;
    int i;
    int k;
    int l;
    while (scanf ("%s %s", str, substr) != EOF) {
        l = strlen (str);
        max = str[0];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        k = 0;
        {
            i = 1;
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
            while (l > i) {
                if (str[i] > max) {
                    max = str[i];
                    k = i;
                }
                i = i + 1;
            };
        }
        {
            i = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            while (i < l) {
                if (i == k) {
                    printf ("%c", str[i]);
                    printf ("%s", substr);
                }
                else {
                    printf ("%c", str[i]);
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i++;
            };
        };
    }
    return 0;
}

