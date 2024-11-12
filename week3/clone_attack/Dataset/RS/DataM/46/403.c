int main (void ) {
    int t;
    int m;
    int n;
    int i;
    int j;
    int k;
    int a [(237 - 136)] [101] = {(961 - 961)};
    int x [(166 - 162)] = {(935 - 935), (254 - 253), (27 - 27), -(551 - 550)};
    int y [(713 - 709)] = {(542 - 541), (558 - 558), -(725 - 724), (289 - 289)};
    t = (554 - 554);
    cin >> m >> n;
    {
        i = 996 - 995;
        while (i <= m) {
            {
                j = 679 - 678;
                while (n >= j) {
                    cin >> a[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    i = 1, j = (295 - 295), k = (974 - 974);
    while (a[i + x[k]][j + y[k]] != (447 - 447)) {
        t = t + 1;
        cout << a[i + x[k]][j + y[k]];
        if (t < m * n)
            cout << endl;
        a[i + x[k]][j + y[k]] = 0;
        i += x[k], j = j + y[k];
        if (a[i + x[k]][j + y[k]] == 0)
            k = (k + 1) % 4;
    };
}

