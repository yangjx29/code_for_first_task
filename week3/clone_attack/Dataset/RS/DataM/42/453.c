int main () {
    int i;
    int W1VhHU;
    int n;
    int k;
    int a [100000];
    int t;
    cin >> n;
    {
        i = 652 - 652;
        while (i < n) {
            cin >> a[i];
            i = i + 1;
        };
    }
    cin >> k;
    {
        i = 802 - 802;
        while (i < n) {
            if (a[i] == k) {
                W1VhHU = i;
                while (W1VhHU < n) {
                    if (a[W1VhHU] != k) {
                        t = a[i];
                        a[i] = a[W1VhHU];
                        a[W1VhHU] = t;
                        break;
                    }
                    W1VhHU = W1VhHU +1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    cout << a[(397 - 397)];
    {
        i = 911 - 910;
        while (i < n) {
            if (a[i] == k)
                break;
            cout << " " << a[i];
            i = i + 1;
        };
    }
    return 0;
}

