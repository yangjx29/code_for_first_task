int main () {
    int b [20001] = {0};
    int a [20001] = {0};
    int waPXWfdOQ = 0;
    int c [20001] = {0};
    int l;
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
    l = 1;
    cin >> waPXWfdOQ;
    for (int i = 1;
    i <= waPXWfdOQ; i = i + 1) {
        cin >> a[i];
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
    for (int j = 1;
    j <= waPXWfdOQ; j++) {
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
        for (int k = 0;
        k < j; k = k + 1) {
            if (a[j] == a[k]) {
                b[j] = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        };
    }
    for (int p = 1;
    p <= waPXWfdOQ; p = p + 1) {
        if (b[p] == 0) {
            c[l] = a[p];
            l = l + 1;
        };
    }
    {
        int m = 1;
        while (c[m] > 0) {
            if (c[m + 1] > 0)
                cout << c[m] << " ";
            if (c[m + 1] == 0)
                cout << c[m] << endl;
            m = m + 1;
        };
    }
    return 0;
}

