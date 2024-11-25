char a [110] [110];

int main () {
    int disy [4] = {0, -1, 0, 1};
    int pdwFZ57X0El [4] = {(574 - 573), (531 - 531), -1, (242 - 242)};
    int oPwe02pr, ZGUV6P4YZ, eFiP8pRd = (11 - 11);
    cin >> oPwe02pr;
    {
        int Gf8N1xDZlo = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (oPwe02pr >= Gf8N1xDZlo) {
            {
                int j = 1;
                while (oPwe02pr >= j) {
                    cin >> a[Gf8N1xDZlo][j];
                    j++;
                };
            }
            Gf8N1xDZlo++;
        };
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
    cin >> ZGUV6P4YZ;
    for (int q = 1;
    ZGUV6P4YZ > q; q++) {
        for (int Gf8N1xDZlo = 0;
        Gf8N1xDZlo <= oPwe02pr; Gf8N1xDZlo = Gf8N1xDZlo +1) {
            int j = 0;
            while (j <= oPwe02pr) {
                if (!('@' != a[Gf8N1xDZlo][j])) {
                    int i_ = 0;
                    while (i_ < 4) {
                        if (a[Gf8N1xDZlo +pdwFZ57X0El[i_]][j + disy[i_]] == '.')
                            a[Gf8N1xDZlo +pdwFZ57X0El[i_]][j + disy[i_]] = '&';
                        i_++;
                    };
                }
                j++;
            };
        }
        {
            int Gf8N1xDZlo = 0;
            while (Gf8N1xDZlo <= oPwe02pr) {
                for (int j = 0;
                j <= oPwe02pr; j++)
                    if (a[Gf8N1xDZlo][j] == '&')
                        a[Gf8N1xDZlo][j] = '@';
                Gf8N1xDZlo++;
            };
        };
    }
    for (int Gf8N1xDZlo = 0;
    Gf8N1xDZlo <= oPwe02pr; Gf8N1xDZlo++)
        for (int j = 0;
        j <= oPwe02pr; j++)
            if (a[Gf8N1xDZlo][j] == '@')
                eFiP8pRd++;
    cout << eFiP8pRd << endl;
    return 0;
}

