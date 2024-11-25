int main () {
    int n7CVOa = 0, Wty3NrgBx = 0, k = 0;
    int c [300] = {0};
    float pj = (714 - 714), hl43ncz5L = 0, b [300], a [300], sum = 0;
    int n;
    cin >> n;
    {
        n7CVOa = 0;
        while (n7CVOa < n) {
            cin >> a[n7CVOa];
            sum = sum + a[n7CVOa];
            n7CVOa = n7CVOa + 1;
        };
    }
    pj = sum / n;
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
    {
        n7CVOa = 0;
        while (n7CVOa < n) {
            if ((pj - a[n7CVOa]) > 0)
                b[n7CVOa] = pj - a[n7CVOa];
            else
                b[n7CVOa] = a[n7CVOa] - pj;
            n7CVOa = n7CVOa + 1;
        };
    }
    for (n7CVOa = 0; n7CVOa < n; n7CVOa = n7CVOa + 1) {
        if (b[n7CVOa] > hl43ncz5L)
            hl43ncz5L = b[n7CVOa];
    }
    {
        n7CVOa = 0;
        while (n7CVOa < n) {
            if (b[n7CVOa] == hl43ncz5L) {
                c[k] = n7CVOa;
                k = k + 1;
            }
            n7CVOa = n7CVOa + 1;
        };
    }
    {
        n7CVOa = 0;
        while (n7CVOa < (k - 1)) {
            {
                Wty3NrgBx = 0;
                while (Wty3NrgBx < (k - n7CVOa - 1)) {
                    if (a[c[Wty3NrgBx]] > a[c[Wty3NrgBx +1]])
                        swap (a[c[Wty3NrgBx]], a[c[Wty3NrgBx +1]]);
                    Wty3NrgBx = Wty3NrgBx +1;
                };
            }
            n7CVOa = n7CVOa + 1;
        };
    }
    {
        n7CVOa = 0;
        while (n7CVOa < k - 1) {
            cout << a[c[n7CVOa]] << ",";
            n7CVOa = n7CVOa + 1;
        };
    }
    cout << a[c[k - 1]];
    return 0;
}

