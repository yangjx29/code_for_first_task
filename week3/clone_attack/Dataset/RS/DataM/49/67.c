int main () {
    int i = 0, j, k, l, m = 0, n;
    char c;
    char a [501];
    c = 'a';
    for (; c != '\n';) {
        i = i + 1;
        c = cin.get ();
        a[i] = c;
    }
    i = i - 1;
    {
        j = 2;
        while (j <= i) {
            {
                k = 1;
                while (k <= i - j + 1) {
                    m = 0;
                    {
                        l = 0;
                        while (l <= j - 1) {
                            if (a[k + l] != a[k + j - l - 1]) {
                                m = 1;
                                break;
                            }
                            l = l + 1;
                        };
                    }
                    if (m == 0) {
                        for (n = 1; n <= j; n = n + 1)
                            cout << a[k + n - 1];
                        cout << endl;
                    }
                    k = k + 1;
                };
            }
            j = j + 1;
        };
    }
    return 0;
}

