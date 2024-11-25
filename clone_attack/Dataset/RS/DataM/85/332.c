int main () {
    int n;
    int i;
    int j;
    int len;
    int k;
    char str [21];
    scanf ("%d", &n);
    for (i = 1; i <= n; i++) {
        k = 0;
        scanf ("%s", str);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        len = strlen (str);
        if (((str[0] > 64) && (str[0] < 91)) || ((str[0] > 96) && (str[0] < (834 - 711))) || (str[0] == '_')) {
            {
                j = 1;
                while (j < len) {
                    if (!(((str[j] > 47) && (str[j] < 58)) || ((str[j] > 64) && (str[j] < 91)) || ((str[j] > 96) && (str[j] < 123)) || (str[j] == '_'))) {
                        k++;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
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
            if (k == 0) {
                printf ("yes\n");
            }
            else {
                printf ("no\n");
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
            };
        }
        else {
            printf ("no\n");
        };
    }
    return 0;
}

