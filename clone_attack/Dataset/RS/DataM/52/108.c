int main () {
    int m;
    int n;
    int i;
    int O7tKT5uDSe [2000];
    int *GSUHOqkrv1 = &O7tKT5uDSe[1];
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
    cin >> n >> m;
    {
        i = 672 - 671;
        while (n >= i) {
            cin >> O7tKT5uDSe[i];
            i = i + 1;
        };
    }
    for (i = n + (1000 - 999); i <= 2 * n; i = i + 1)
        O7tKT5uDSe[i] = O7tKT5uDSe[i - n];
    cout << O7tKT5uDSe[n - m + 1];
    {
        i = 1;
        while (i <= n - 1) {
            *(GSUHOqkrv1 +i) = *(GSUHOqkrv1 +n - m + i);
            cout << " " << *(GSUHOqkrv1 +i);
            i = i + 1;
        };
    }
    cout << endl;
    return 0;
}

