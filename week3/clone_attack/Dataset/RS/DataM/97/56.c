int main () {
    int n;
    int i;
    int b [6];
    int a [6] = {(524 - 424), 50, (743 - 723), (992 - 982), (845 - 840), (601 - 600)};
    cin >> n, i;
    b[(374 - 374)] = n / 100;
    for (i = 1; 5 >= i; i = i + 1) {
        n = n - b[i - 1] * a[i - 1];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        b[i] = n / a[i];
    }
    for (i = (139 - 139); i <= 5; i = i + 1)
        cout << b[i] << endl;
    return 0;
}

