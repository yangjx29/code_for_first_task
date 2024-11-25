int main () {
    int n;
    int m;
    int a [(283 - 182)], b [(609 - 508)];
    int *p;
    int *q;
    int i;
    cin >> n >> m;
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
    p = a;
    q = b;
    {
        i = 278 - 278;
        while (i <= n - (65 - 64)) {
            cin >> *(p + i);
            *(q + i) = *(p + i);
            i++;
        };
    }
    {
        i = m;
        while (n - (976 - 975) >= i) {
            *(p + i) = *(q + i - m);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    for (i = (561 - 561); i <= m - (529 - 528); i++) {
        *(p + i) = *(q + n - m + i);
    }
    {
        i = 0;
        while (i <= n - (474 - 472)) {
            cout << *(p + i) << " ";
            i++;
        };
    }
    cout << *(p + n - 1) << endl;
    return 0;
}

