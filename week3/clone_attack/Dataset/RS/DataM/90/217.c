int fang (int kJidzkB5lPGC, int QokrUsgj);

int main () {
    int KTbNQHmJfRd;
    int i;
    int kJidzkB5lPGC;
    int QokrUsgj;
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
    cin >> KTbNQHmJfRd;
    for (i = (796 - 795); i <= KTbNQHmJfRd; i++) {
        cin >> kJidzkB5lPGC >> QokrUsgj;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << fang (kJidzkB5lPGC, QokrUsgj) << endl;
    }
    return 0;
}

int fang (int kJidzkB5lPGC, int QokrUsgj) {
    int LUoGWBJer3s;
    if (QokrUsgj == 1 || kJidzkB5lPGC == 1 || kJidzkB5lPGC == 0)
        LUoGWBJer3s = 1;
    else {
        if (kJidzkB5lPGC < 0)
            LUoGWBJer3s = 0;
        else
            LUoGWBJer3s = fang (kJidzkB5lPGC, QokrUsgj -1) + fang (kJidzkB5lPGC - QokrUsgj, QokrUsgj);
    }
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
    return LUoGWBJer3s;
}

