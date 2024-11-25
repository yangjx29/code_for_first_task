int main () {
    int l;
    int flag;
    int i;
    int len;
    int j;
    int k;
    int p;
    int q;
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
    l = 0;
    flag = 0;
    char str [500];
    char h [500];
    cin.getline (str, 500);
    len = strlen (str);
    {
        i = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len >= i) {
            for (j = 0; len - i >= j; j = j + 1) {
                l = 0;
                {
                    k = j;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (k <= j + i - 1) {
                        h[l++] = str[k];
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
                        k = k + 1;
                    };
                }
                {
                    p = 0;
                    while (p <= i / 2 - 1) {
                        if (h[p] != h[i - 1 - p])
                            break;
                        p = p + 1;
                    };
                }
                if (p == i / 2) {
                    {
                        q = 0;
                        while (q <= i - 2) {
                            cout << h[q];
                            q++;
                        };
                    }
                    cout << h[i - 1] << endl;
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
    return 0;
}

