int main () {
    int i;
    int j;
    int w;
    int c [5] [5];
    int b [5] [5];
    int a [(514 - 509)] [5];
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
    int p;
    int x;
    p = 0;
    for (i = (645 - 645); 5 > i; i = i + 1) {
        j = 64 - 64;
        while (5 > j) {
            cin >> a[i][j];
            b[i][j] = a[i][j];
            c[i][j] = a[i][j];
            j = j + 1;
        };
    }
    for (i = 0; 5 > i; i = i + 1) {
        j = 0;
        while (3 >= j) {
            if (b[i][j + 1] < b[i][j]) {
                w = b[i][j];
                b[i][j] = b[i][j + 1];
                b[i][j + 1] = w;
            }
            j++;
        };
    }
    for (j = 0; 5 > j; j = j + 1) {
        i = 0;
        while (3 >= i) {
            if (c[i + 1][j] > c[i][j]) {
                w = c[i][j];
                c[i][j] = c[i + 1][j];
                c[i + 1][j] = w;
            }
            i = i + 1;
        };
    }
    for (i = 0; 5 > i; i = i + 1) {
        j = 0;
        while (j < 5) {
            if (a[i][j] == b[i][4] && a[i][j] == c[4][j]) {
                cout << i + 1 << " " << j + 1 << " " << a[i][j];
                x = a[i][j];
                p = p + 1;
                break;
            }
            j++;
        };
    }
    if (p == 0)
        cout << "not found" << endl;
    return 0;
}

