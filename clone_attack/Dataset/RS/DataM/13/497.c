int main () {
    int m;
    int n;
    int i;
    int j;
    int a [(20483 - 473)];
    int b [(20953 - 943)] = {(13 - 13)};
    m = 0;
    cin >> n;
    {
        i = 81 - 80;
        while (i <= n) {
            cin >> a[i];
            {
                j = 0;
                while (j <= m) {
                    if (a[i] == b[j]) {
                        break;
                    }
                    if (j == m) {
                        b[m] = a[i];
                        m = m + 1;
                        break;
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < m) {
            if (i == m - 1)
                cout << b[i];
            else
                cout << b[i] << " ";
            i = i + 1;
        };
    }
    return 0;
}

