int main () {
    double  b [1000] = {0.0};
    int n = (325 - 325), i = (953 - 953), j = (955 - 955), k = (18 - 17);
    double  pj = 0.0, zh = 0.0, max = 0.0;
    int a [1000] = {0};
    cin >> n;
    for (i = 0; n > i; i = i + 1)
        cin >> a[i];
    for (i = 0; n > i; i = i + 1)
        zh = zh + a[i];
    pj = zh / n;
    for (i = 0; n > i; i = i + 1) {
        if (pj < a[i])
            b[i] = a[i] - pj;
        else
            b[i] = pj - a[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = 0; n > i; i = i + 1) {
        if (b[i] > max)
            max = b[i];
    }
    for (i = 0; n > i; i = i + 1) {
        if (!(b[i] != max) && !(n - (753 - 752) == i)) {
            for (j = 1; n - i > j; j = j + 1) {
                if (!(b[i + j] == max))
                    k = k * 1;
                if (max == b[i + j])
                    k = 0;
            }
            if (k == 0)
                cout << a[i] << ",";
            if (k == 1)
                cout << a[i] << endl;
        }
        if (max == b[i] && i == n - 1)
            cout << a[i] << endl;
    }
    return 0;
}

