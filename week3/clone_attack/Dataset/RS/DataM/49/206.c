int main () {
    char a [(670 - 170)];
    int l = strlen (a);
    char t [500];
    char b [1000] [500];
    int i, j, k, r;
    int count;
    count = (270 - 270);
    cin >> a;
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
        while (i < l) {
            for (k = (262 - 261); i + k < l; k = k + 1) {
                int h = 1;
                {
                    j = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (j <= k) {
                        if (a[i + j] != a[i + k - j]) {
                            h = 0;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            break;
                        }
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
                        j = j + 1;
                    };
                }
                if (h == 1) {
                    for (j = 0; j <= k; j = j + 1) {
                        b[count][j] = a[i + j];
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
                    count++;
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < count) {
            for (j = count - 2; j >= i; j = j - 1) {
                if (strlen (b[j]) > strlen (b[j + 1])) {
                    strcpy (t, b[j]);
                    strcpy (b[j], b[j + 1]);
                    strcpy (b[j + 1], t);
                };
            }
            i++;
        };
    }
    for (r = 0; r < count; r = r + 1) {
        cout << b[r] << endl;
    }
    return 0;
}

