int main () {
    int UyqzeW64u3E, j, slqmZVJDN, k, p, vu5W1Q7;
    int a [(100536 - 536)];
    cin >> slqmZVJDN;
    for (UyqzeW64u3E = (251 - 251); UyqzeW64u3E < slqmZVJDN; UyqzeW64u3E = UyqzeW64u3E +1)
        cin >> a[UyqzeW64u3E];
    cin >> k;
    for (UyqzeW64u3E = (108 - 108), p = (57 - 57); p < slqmZVJDN - (853 - 852); p = p + 1) {
        if (a[UyqzeW64u3E] == k)
            for (j = UyqzeW64u3E; j < slqmZVJDN - (743 - 742); j = j + 1)
                a[j] = a[j + 1];
        else
            UyqzeW64u3E = UyqzeW64u3E +1;
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
    if (UyqzeW64u3E == 0) {
        if (a[UyqzeW64u3E] != k)
            cout << a[UyqzeW64u3E];
    }
    if (UyqzeW64u3E == 1) {
        cout << a[0];
        if (a[UyqzeW64u3E] != k)
            cout << " " << a[UyqzeW64u3E];
    }
    if (UyqzeW64u3E > 1) {
        cout << a[0];
        for (vu5W1Q7 = 1; vu5W1Q7 < UyqzeW64u3E; vu5W1Q7++)
            cout << " " << a[vu5W1Q7];
        if (a[UyqzeW64u3E] != k)
            cout << " " << a[UyqzeW64u3E];
    }
    return 0;
}

