void  UZ6Wzfw (char *zYV1TxXC) {
    int f3KkH05DR;
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
    f3KkH05DR = (681 - 681);
    while (!('\0' == zYV1TxXC[f3KkH05DR])) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (zYV1TxXC[f3KkH05DR] == 'A') {
            zYV1TxXC[f3KkH05DR++] = 'T';
        }
        else if (zYV1TxXC[f3KkH05DR] == 'T') {
            zYV1TxXC[f3KkH05DR++] = 'A';
        }
        else if (zYV1TxXC[f3KkH05DR] == 'C') {
            zYV1TxXC[f3KkH05DR++] = 'G';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else if (zYV1TxXC[f3KkH05DR] == 'G') {
            zYV1TxXC[f3KkH05DR++] = 'C';
        }
        else {
        };
    };
}

int main () {
    int QcR8g9n0Cl;
    char zYV1TxXC [1221];
    scanf ("%d", &QcR8g9n0Cl);
    for (int vdKzGoa = 0;
    vdKzGoa < QcR8g9n0Cl; vdKzGoa = vdKzGoa + 1) {
        UZ6Wzfw (zYV1TxXC);
        scanf ("%s", zYV1TxXC);
        printf ("%s\n", zYV1TxXC);
    }
    return 0;
}

