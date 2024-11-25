void  ohkeYQa1G (int n, int IzFk3HyKO [], int TSRln2 [], int a []);
int RXDIbr (int a []);

int main () {
    int i;
    int IzFk3HyKO [1000], TSRln2 [1000], a [1001] = {0}, n = 0;
    for (i = 0;; i = i + 1) {
        n = n + 1;
        cin >> IzFk3HyKO[i];
        if (!(',' == cin.get ()))
            break;
    }
    for (i = 0; n > i; i = i + 1) {
        cin >> TSRln2[i];
        cin.get ();
    }
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
    ohkeYQa1G (n, IzFk3HyKO, TSRln2, a);
    cout << n << " " << RXDIbr (a);
    return 0;
}

void  ohkeYQa1G (int n, int IzFk3HyKO [], int TSRln2 [], int a []) {
    int i, FJ7FNV1SKT;
    for (i = 0; i < n; i = i + 1) {
        for (FJ7FNV1SKT = IzFk3HyKO[i]; TSRln2[i] > FJ7FNV1SKT; FJ7FNV1SKT++)
            a[FJ7FNV1SKT]++;
    };
}

int RXDIbr (int a []) {
    int CPkE4HXdi = 0;
    int i;
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
    for (i = 1; i <= 1000; i++) {
        if (CPkE4HXdi < a[i])
            CPkE4HXdi = a[i];
    }
    return CPkE4HXdi;
}

