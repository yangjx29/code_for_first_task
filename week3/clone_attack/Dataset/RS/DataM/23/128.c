int main () {
    int m;
    char a [1] [(251 - 151)] = {'\0'};
    char b [100] [100] = {'\0'};
    int i, num, k, x = 0, p = 0;
    cin.getline (a[0], 100);
    num = strlen (a[0]);
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
    a[0][num] = '\n';
    for (i = 0; i < num + 1; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[0][i] == ' ' || !('\n' != a[0][i])) {
            {
                k = x;
                while (k < i) {
                    b[p][k - x] = a[0][k];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    k = k + 1;
                };
            }
            p++;
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
            x = i + 1;
        };
    }
    {
        m = 0;
        while (m < p - 1) {
            cout << b[p - 1 - m] << " ";
            m++;
        };
    }
    cout << b[0];
    getchar ();
    getchar ();
    return 0;
}

