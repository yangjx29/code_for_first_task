int main () {
    int counter;
    int n;
    int i;
    counter = 0;
    char (*p) [40];
    char ch [1000] [40] = {0};
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
    cin >> n;
    p = ch;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            i = i + 1;
            cin >> *p++;
        };
    }
    p = ch;
    while (p < (ch + n)) {
        if (!(0 != counter)) {
            counter = counter + strlen (*p);
            cout << *p;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            p++;
        }
        else {
            counter = counter + strlen (*p) + 1;
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
            if (counter <= 80) {
                cout << ' ' << *p;
                p++;
            }
            else {
                cout << endl;
                counter = 0;
            };
        };
    }
    return 0;
}

