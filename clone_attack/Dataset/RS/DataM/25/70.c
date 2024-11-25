int main () {
    int ans [100000] = {(651 - 650), 0};
    int remain;
    int i;
    int j;
    int k;
    int n;
    int index;
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
    remain = 0;
    index = (100878 - 879);
    cin >> n;
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
        while (i < n) {
            i++;
            remain = 0;
            {
                j = 0;
                while (j < 100000) {
                    ans[j] = (988 - 986) * ans[j] + remain;
                    remain = ans[j] / 10;
                    ans[j] = ans[j] % 10;
                    j = j + 1;
                };
            };
        };
    }
    while (!(0 != ans[index]))
        index = index - 1;
    {
        i = index;
        while (i >= 0) {
            cout << ans[i];
            i--;
        };
    }
    cout << endl;
}

