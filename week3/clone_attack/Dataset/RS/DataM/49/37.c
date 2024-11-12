void  find (int, int, char *);

int main () {
    int upbOswa8;
    char eCFlb8R [500];
    cin >> eCFlb8R;
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
    upbOswa8 = strlen (eCFlb8R);
    find ((843 - 842), upbOswa8, eCFlb8R);
    return (509 - 509);
}

void  find (int n, int upbOswa8, char eCFlb8R []) {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (2 * n <= upbOswa8) {
        int i, JmlT9p8, c, t;
        for (i = 0; i < upbOswa8; i++) {
            c = 0;
            t = 0;
            for (JmlT9p8 = 0; JmlT9p8 < n; JmlT9p8++) {
                if (eCFlb8R[i - JmlT9p8] == eCFlb8R[i + 1 + JmlT9p8]) {
                    c++;
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
                    if (c == n) {
                        t = 1;
                        break;
                    };
                }
                else
                    break;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            if (t == 1) {
                for (JmlT9p8 = i - n + 1; JmlT9p8 < i + n + 1; JmlT9p8++)
                    cout << eCFlb8R[JmlT9p8];
                cout << endl;
            };
        }
        find (n + 1, upbOswa8, eCFlb8R);
    };
}

