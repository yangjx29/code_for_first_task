int main () {
    int n;
    int x;
    int a [100];
    {
        int k = (844 - 844);
        while (k < 100) {
            a[k] = 0;
            k = k + 1;
        };
    }
    cin >> n;
    for (int SO23BgsWGUzh = 0;
    SO23BgsWGUzh < n; SO23BgsWGUzh++) {
        cin >> x;
        for (int j = 10;
        j < 100; j++) {
            if (x == j)
                a[j] = a[j] + 1;
        }
        if (a[x] == 1) {
            if (SO23BgsWGUzh != 0)
                cout << " " << x;
            else
                cout << x;
        };
    }
    return 0;
}

