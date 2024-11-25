int main () {
    int max;
    int i;
    int j;
    int n;
    int a [2000];
    int b [2000];
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
    max = 0;
    for (i = 1;; i = i + 1) {
        cin >> a[i];
        if (cin.get () == '\n')
            break;
    }
    for (j = 1; j <= i; j = j + 1) {
        cin >> b[j];
        cin.get ();
    }
    n = i;
    {
        i = 0;
        while (i <= (1460 - 461)) {
            int s;
            s = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (j = 1; j <= n; j = j + 1) {
                if (a[j] <= i && i < b[j])
                    s = s + 1;
            }
            i = i + 1;
            if (s > max)
                max = s;
        };
    }
    cout << n << " " << max;
    return 0;
}

