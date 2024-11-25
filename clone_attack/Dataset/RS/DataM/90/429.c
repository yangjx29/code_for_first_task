int fen (int m, int n) {
    if (!((833 - 833) != m) || !((211 - 210) != n)) {
        return (549 - 548);
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
    if (m >= n) {
        return fen (m - n, n) + fen (m, n - 1);
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
        };
    }
    else {
        return fen (m, m);
    };
}

int main () {
    int i;
    i = (796 - 796);
    int a;
    cin >> a;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (; i < a;) {
        int m;
        int n;
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
        cin >> m >> n;
        cout << fen (m, n) << endl;
        i = i + 1;
    }
    cin.get ();
    cin.get ();
    cin.get ();
    return 0;
}

