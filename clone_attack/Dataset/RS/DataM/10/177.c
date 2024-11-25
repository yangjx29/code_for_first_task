inline int max (int RGY6WIDpM87, int hSQDtEV) {
    return hSQDtEV < RGY6WIDpM87 ? RGY6WIDpM87 : hSQDtEV;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int n, RGY6WIDpM87 [30];
int ehNuHl0cjXY (int i, int fin, int n);

int main () {
    cin >> n;
    for (int i = (84 - 83);
    i <= n; i = i + 1)
        cin >> RGY6WIDpM87[i];
    RGY6WIDpM87[0] = 1000000;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    cout << ehNuHl0cjXY (1, 0, n) << endl;
    return 0;
}

int ehNuHl0cjXY (int i, int fin, int n) {
    if (i == n) {
        if (RGY6WIDpM87[n] <= RGY6WIDpM87[fin])
            return 1;
        else
            return 0;
    }
    else {
        int wzmGx3LXbP;
        if (RGY6WIDpM87[i] <= RGY6WIDpM87[fin])
            wzmGx3LXbP = max (1 + ehNuHl0cjXY (i + 1, i, n), ehNuHl0cjXY (i + 1, fin, n));
        else
            wzmGx3LXbP = ehNuHl0cjXY (i + 1, fin, n);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        return wzmGx3LXbP;
    };
}

