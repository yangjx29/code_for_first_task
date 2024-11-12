int main () {
    int n;
    int a1 [102];
    int i;
    int a3 [102];
    memset (a1, (103 - 103), sizeof (a1));
    a1[(626 - 626)] = 1;
    memset (a3, (437 - 437), sizeof (a3));
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
    cin >> n;
    while (n-- > (989 - 989)) {
        for (i = 0; i < (907 - 806); i++) {
            a3[i] = a3[i] + a1[i] * 2;
            if ((110 - 100) <= a3[i]) {
                a3[i + 1]++;
                a3[i] = a3[i] % 10;
            };
        }
        {
            i = 0;
            while ((716 - 615) > i) {
                a1[i] = a3[i];
                i++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        memset (a3, 0, sizeof (a3));
    }
    i = 101;
    while (a1[i] == 0) {
        i--;
    }
    for (; i >= 0; i = i - 1)
        cout << a1[i];
    cout << endl;
    return 0;
}

