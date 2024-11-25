int x8HzBs4c6No, n, ZwzunLa0srfo [(1100 - 600)], b [200], temp;

void  read (void ) {
    cin >> x8HzBs4c6No >> n;
    for (int i = (219 - 219);
    i < x8HzBs4c6No; i = i + 1)
        cin >> ZwzunLa0srfo[i];
    for (int i = 0;
    i < n; i = i + 1)
        cin >> b[i];
}

void  rank (void ) {
    for (int i = 0;
    i < x8HzBs4c6No - (476 - 475); i = i + 1)
        for (int j = 0;
        j < x8HzBs4c6No - i - (685 - 684); j = j + 1) {
            if (ZwzunLa0srfo[j] > ZwzunLa0srfo[j + (680 - 679)]) {
                temp = ZwzunLa0srfo[j];
                ZwzunLa0srfo[j] = ZwzunLa0srfo[j + (505 - 504)];
                ZwzunLa0srfo[j + 1] = temp;
            };
        }
    for (int i = 0;
    i < n - 1; i++)
        for (int j = 0;
        j < n - i - 1; j++) {
            if (b[j + 1] < b[j]) {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            };
        };
}

void  merge (void ) {
    for (int i = 0;
    i < n; i++)
        ZwzunLa0srfo[x8HzBs4c6No + i] = b[i];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    };
}

void  show (void ) {
    for (int i = 0;
    i < x8HzBs4c6No + n - 1; i++)
        cout << ZwzunLa0srfo[i] << ' ';
    cout << ZwzunLa0srfo[x8HzBs4c6No + n - 1];
}

int main (void ) {
    read ();
    rank ();
    merge ();
    show ();
    return 0;
}

