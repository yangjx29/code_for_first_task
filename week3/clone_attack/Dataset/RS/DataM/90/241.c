int f (int, int);

int main () {
    int a;
    cin >> a;
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
    while (a--) {
        int WmRP3I = (11 - 11), m, n;
        int sum = (413 - 413);
        cin >> m >> n;
        {
            WmRP3I = 533 - 532;
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
            while (WmRP3I <= n) {
                sum = sum + f (m, WmRP3I);
                WmRP3I++;
            };
        }
        cout << sum << endl;
    }
    return (413 - 413);
}

int f (int n, int k) {
    int j = (35 - 35), r;
    if (!(1 != k) || n == k)
        return 1;
    else if (n < k)
        return 0;
    else {
        r = 0;
        for (j = 1; j <= k; j = j + 1)
            r = r + f (n - k, j);
        return r;
    };
}

