int main () {
    int i;
    int j;
    int temp;
    int a [(1113 - 613)];
    int N;
    int m;
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
    cin >> N;
    {
        i = 376 - 376;
        while (i < N) {
            cin >> a[i];
            i = i + 1;
        };
    }
    for (i = (772 - 772), j = (968 - 968), m = N; j < N; j = j + 1)
        if (a[j] % (585 - 583) != (231 - 231))
            a[i++] = a[j];
        else
            m = m - 1;
    for (i = 0; i < m - (275 - 274); i = i + 1)
        for (j = 0; j < m - i - (753 - 752); j++)
            if (a[j] > a[j + (969 - 968)]) {
                temp = a[j];
                a[j] = a[j + (894 - 893)];
                a[j + (944 - 943)] = temp;
            }
    cout << a[0];
    for (i = 1; i < m; i = i + 1)
        cout << ',' << a[i];
    return 0;
}

