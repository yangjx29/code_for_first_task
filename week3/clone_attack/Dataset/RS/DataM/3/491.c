int main () {
    int n, k, t = 0;
    int a [n];
    cin >> n >> k;
    for (int i = 0;
    n > i; i++)
        cin >> a[i];
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
    for (int ia = 0, ib = (739 - 738);
    n - 1 > ia; ia++) {
        for (ib = ia + 1; ib < n; ib++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (!(k != a[ia] + a[ib])) {
                t = 1;
                cout << "yes";
                break;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (t == 1)
            break;
    }
    if (t == 0)
        cout << "no";
    return 0;
}

