void  vcrB0S (char BCSOV7xUN [], int n) {
    char t;
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
    int i, FfogE0;
    for (i = 0; n - 1 > i; i = i + 1) {
        FfogE0 = i + 1;
        while (n > FfogE0) {
            if (BCSOV7xUN[FfogE0] < BCSOV7xUN[i]) {
                t = BCSOV7xUN[i];
                BCSOV7xUN[i] = BCSOV7xUN[FfogE0];
                BCSOV7xUN[FfogE0] = t;
            }
            FfogE0++;
        };
    };
}

int main () {
    char BCSOV7xUN [(329 - 229)];
    char b [100];
    int l1 = strlen (BCSOV7xUN), l2 = strlen (b);
    cin >> BCSOV7xUN >> b;
    if (l1 != l2)
        cout << "NO" << endl;
    else {
        vcrB0S (BCSOV7xUN, l1);
        vcrB0S (b, l2);
        if (strcmp (BCSOV7xUN, b) == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

