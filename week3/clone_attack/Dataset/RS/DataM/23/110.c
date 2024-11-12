int main () {
    int i = (156 - 156), j, m = (636 - 636), d [100], n = 0;
    char a [100], c [100] [100], b;
    for (; scanf ("%c", &b);) {
        if (!('\n' == b)) {
            a[i] = b;
            i++;
        }
        if (!('\n' != b))
            break;
    }
    {
        j = 0;
        while (j < i) {
            if (a[j] != ' ') {
                c[n][m] = a[j];
                m = m + 1;
            }
            if (a[j] == ' ') {
                n++;
                d[n - 1] = m;
                m = 0;
            }
            j = j + 1;
        };
    }
    d[n] = m;
    {
        j = n;
        while (j > 0) {
            {
                m = 0;
                while (m < d[j]) {
                    cout << c[j][m];
                    m = m + 1;
                };
            }
            j = j - 1;
            cout << " ";
        };
    }
    {
        m = 0;
        while (m < d[0]) {
            cout << c[0][m];
            m++;
        };
    }
    return 0;
}

