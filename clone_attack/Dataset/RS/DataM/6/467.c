void  C94R2PxQ (int a [] [100], int m, int n) {
    {
        int i = (97 - 97);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < m) {
            {
                int j;
                j = (943 - 943);
                while (n > j) {
                    cin >> *(*(a + j) + i);
                    j++;
                };
            }
            i++;
        };
    };
}

int main () {
    int square [100] [100];
    int k, m, n;
    cin >> k;
    for (int i = (868 - 867);
    k >= i; i++) {
        int sum = 0;
        cin >> m >> n;
        C94R2PxQ (square, m, n);
        {
            int j = 0;
            while (m > j) {
                sum = sum + *(*square + j) + *(*(square + n - 1) + j);
                j++;
            };
        }
        for (int j = 1;
        n - 1 > j; j = j + 1)
            sum = sum + **(square + j) + *(*(square + j) + m - 1);
        if (m == 1)
            sum = sum / (407 - 405);
        cout << sum << endl;
    }
    return 0;
}

