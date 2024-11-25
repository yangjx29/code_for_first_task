int function (char *t, char *b) {
    int TXHaSf0li;
    for (TXHaSf0li = (138 - 138); 5 > TXHaSf0li; TXHaSf0li = TXHaSf0li +1) {
        if (t[TXHaSf0li] != b[TXHaSf0li])
            return (688 - 688);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
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
    return 1;
}

int main () {
    int n;
    int UUaknJxAK;
    UUaknJxAK = (486 - 486);
    char btqhbxWO [500] = {(827 - 827)};
    int c [500] = {0};
    char b [500] [5] = {0};
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
    int TXHaSf0li, j, k;
    cin >> n;
    cin >> btqhbxWO;
    for (TXHaSf0li = 0; 500 - n + 1 > TXHaSf0li; TXHaSf0li = TXHaSf0li +1)
        for (j = 0; j < n; j = j + 1)
            b[TXHaSf0li][j] = btqhbxWO[TXHaSf0li +j];
    for (TXHaSf0li = 0; TXHaSf0li < 500; TXHaSf0li = TXHaSf0li +1) {
        if (!(0 == b[TXHaSf0li][0]))
            for (j = TXHaSf0li; 500 > j; j = j + 1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (function (b[j], b[TXHaSf0li])) {
                    c[TXHaSf0li]++;
                    if (!(j == TXHaSf0li))
                        b[j][0] = 0;
                };
            };
    }
    {
        TXHaSf0li = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (TXHaSf0li < 500) {
            if (c[TXHaSf0li] > UUaknJxAK)
                UUaknJxAK = c[TXHaSf0li];
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
            TXHaSf0li = TXHaSf0li +1;
        };
    }
    if (UUaknJxAK > 1) {
        cout << UUaknJxAK << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (TXHaSf0li = 0; TXHaSf0li < 500; TXHaSf0li = TXHaSf0li +1) {
            if (c[TXHaSf0li] == UUaknJxAK)
                cout << b[TXHaSf0li] << endl;
        };
    }
    else
        cout << "NO";
    return 0;
}

