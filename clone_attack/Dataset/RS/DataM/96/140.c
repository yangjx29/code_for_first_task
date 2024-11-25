int main () {
    short  int a [100], b [100], HNC0D14;
    int t;
    int A1rgzs;
    int l;
    int i;
    int j;
    int temp;
    int k;
    t = (727 - 727);
    A1rgzs = 0;
    char ip [100];
    cin >> ip;
    l = strlen (ip);
    for (i = 0; l > i; i = i + 1)
        a[i] = ip[i] - '0';
    if (!((721 - 720) != l)) {
        cout << 0 << endl << a[0] << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return 0;
    }
    a[(331 - 330)] = a[0] * 10 + a[1];
    if (l == 2) {
        cout << a[1] / 13 << endl << a[1] % 13 << endl;
        return 0;
    }
    for (i = 1; i < l - 1; i = i + 1) {
        temp = a[i] * 10 + a[i + 1];
        a[i + 1] = temp % 13;
        cout << temp / 13;
    }
    cout << endl << a[l - 1];
}

