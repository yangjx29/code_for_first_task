int main () {
    int n, YXWIya5, j, k;
    char a [256];
    char b [256];
    scanf ("%d", &n);
    for (YXWIya5 = 0; n > YXWIya5; YXWIya5 = YXWIya5 +1) {
        scanf ("%s", &a);
        {
            j = 0;
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
            while (!('\0' == a[j])) {
                if (a[j] == 'A') {
                    b[j] = 'T';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                else {
                    if (a[j] == 'T') {
                        b[j] = 'A';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    else if (a[j] == 'G') {
                        b[j] = 'C';
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
                    }
                    else if (a[j] == 'C') {
                        b[j] = 'G';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        };
                    };
                }
                j = j + 1;
            };
        }
        {
            j = 0;
            while (j < 256) {
                if (a[j] == '\0') {
                    b[j] = '\0';
                }
                j = j + 1;
            };
        }
        printf ("%s\n", b);
    }
    return 0;
}

