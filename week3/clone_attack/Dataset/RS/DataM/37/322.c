int main () {
    char x;
    char a [100000];
    int n, i = 1, j = 1, k = 1, l, t;
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
    cin >> n;
    for (; n >= k; k++) {
        cin >> a;
        l = strlen (a);
        {
            i = 0;
            while (l - 1 > i) {
                t = a[i];
                {
                    j = i + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (l > j) {
                        if (!(1 != a[j]))
                            continue;
                        if (a[j] == t) {
                            a[i] = 1;
                            a[j] = 1;
                        }
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        j++;
                    };
                }
                i++;
            };
        }
        for (i = 0; i <= l; i++) {
            if (a[i] != 1) {
                cout << a[i] << endl;
                break;
            };
        }
        if (i == l)
            cout << "no" << endl;
    }
    return 0;
}

