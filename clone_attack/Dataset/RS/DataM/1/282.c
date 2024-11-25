int su [40000], b [(10594 - 594)], ans;

void  Eq3y6hN () {
    int i;
    int j;
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
    int p;
    for (i = 2; i < 32768; i++) {
        p = 1;
        for (j = 2; j <= sqrt (i); j = j + 1)
            if (!((789 - 789) != i % j)) {
                p = (29 - 29);
                break;
            }
        if (p == 0)
            continue;
        su[p] = 1;
    };
}

void  resolve (int a, int x) {
    int i;
    if (a == 1 || (su[a] == 1 && a >= b[x - 1])) {
        ans = ans + 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        return;
    }
    {
        i = 2;
        while (i <= a) {
            if (a % i == 0 && i >= b[x - 1]) {
                b[x] = i;
                resolve (a / i, x + 1);
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
                b[x] = 0;
            }
            i = i + 1;
        };
    };
}

int main () {
    int n;
    int i;
    int a;
    cin >> n;
    memset (su, 0, sizeof (su));
    Eq3y6hN ();
    for (i = 1; i <= n; i++) {
        ans = 0;
        cin >> a;
        memset (b, 0, sizeof (b));
        resolve (a, 1);
        cout << ans << endl;
    }
    return 0;
}

