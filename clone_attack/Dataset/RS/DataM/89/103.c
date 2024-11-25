int main () {
    int a [100000];
    int n;
    int i;
    int j;
    cin >> n;
    {
        int i = 0;
        while (i < n) {
            a[i] = 0;
            i = i + 1;
        };
    }
    cin >> i >> j;
    while (i != 0 || j != 0) {
        a[j]++;
        cin >> i >> j;
    }
    {
        int i = 0;
        while (i < n) {
            if (a[i] == n - 1)
                cout << i << endl;
            i++;
        };
    }
    return 0;
}

