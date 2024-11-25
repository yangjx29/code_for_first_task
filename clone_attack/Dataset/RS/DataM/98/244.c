int main () {
    char a [41];
    int n, i, j, sum, l;
    char *p = a;
    cin >> n;
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
    sum = 0;
    {
        i = 770 - 769;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            i = i + 1;
            cin >> a;
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
            l = strlen (a);
            if (sum == 0) {
                {
                    j = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (j < l) {
                        cout << *(p + j);
                        j = j + 1;
                    };
                }
                sum = l;
            }
            else {
                if (sum + l + 1 <= (920 - 840)) {
                    cout << ' ';
                    for (j = 0; j < l; j = j + 1)
                        cout << *(p + j);
                    sum = sum + l + 1;
                }
                else {
                    cout << endl << a;
                    sum = l;
                };
            };
        };
    }
    return 0;
}

