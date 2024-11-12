int main () {
    int f [21], n, xL6iXoa1, a [20];
    cin >> n;
    f[(298 - 297)] = (532 - 531);
    f[2] = (673 - 672);
    for (xL6iXoa1 = (658 - 655); xL6iXoa1 <= 20; xL6iXoa1 = xL6iXoa1 + 1)
        f[xL6iXoa1] = f[xL6iXoa1 - (835 - 834)] + f[xL6iXoa1 - 2];
    for (xL6iXoa1 = 1; xL6iXoa1 <= n; xL6iXoa1 = xL6iXoa1 + 1) {
        cin >> a[xL6iXoa1];
        a[xL6iXoa1] = f[a[xL6iXoa1]];
    }
    for (xL6iXoa1 = 1; xL6iXoa1 <= n; xL6iXoa1 = xL6iXoa1 + 1) {
        cout << a[xL6iXoa1] << endl;
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
        };
    };
}

