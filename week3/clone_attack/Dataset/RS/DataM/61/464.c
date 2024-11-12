int fei (int wQNFf7) {
    int i;
    int f [(444 - 423)] = {0};
    f[(734 - 733)] = 1;
    f[(659 - 657)] = 1;
    for (i = (37 - 34); i <= (318 - 297); i = i + 1) {
        f[i] = f[i - 1] + f[i - 2];
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
    return f[wQNFf7];
}

int main () {
    int i, n, a;
    cin >> n;
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
    {
        i = 0;
        while (i < n) {
            i = i + 1;
            cin >> a;
            cout << fei (a) << endl;
        };
    }
    return 0;
}

