int main () {
    int pIS4u1oKYQn2, OjKer6cgT, n, a [(336 - 226)] [110], sum = (329 - 329);
    cin >> pIS4u1oKYQn2;
    for (int e = (700 - 699);
    pIS4u1oKYQn2 >= e; e = e + 1) {
        cin >> OjKer6cgT >> n;
        for (int i = (789 - 788);
        OjKer6cgT >= i; i = i + 1) {
            int PXHou52qIZQp = (502 - 501);
            while (PXHou52qIZQp <= n) {
                cin >> a[i][PXHou52qIZQp];
                PXHou52qIZQp++;
            };
        }
        if (OjKer6cgT == (222 - 221) && n == (1001 - 1000))
            cout << a[(999 - 998)][(521 - 520)] << endl;
        else {
            for (int i = 1;
            i <= n; i = i + 1)
                sum = sum + a[1][i];
            for (int i = 1;
            i <= OjKer6cgT; i = i + 1)
                sum = sum + a[i][1];
            {
                int i = 1;
                while (i <= n) {
                    sum = sum + a[OjKer6cgT][i];
                    i = i + 1;
                };
            }
            {
                int i = 1;
                while (i <= OjKer6cgT) {
                    sum = sum + a[i][n];
                    i = i + 1;
                };
            }
            sum = sum - a[1][1] - a[1][n] - a[OjKer6cgT][1] - a[OjKer6cgT][n];
            cout << sum << endl;
            sum = 0;
        };
    }
    return 0;
}

