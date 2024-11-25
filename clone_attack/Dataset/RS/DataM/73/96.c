int main () {
    int x [5] [5];
    int i;
    int xRKStAa7pr;
    int m;
    int r;
    int c;
    {
        i = 453 - 453;
        while (i < 5) {
            for (xRKStAa7pr = 0; xRKStAa7pr < 5; xRKStAa7pr++)
                cin >> x[i][xRKStAa7pr];
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
            i = i + 1;
        };
    }
    for (i = 0; i < 5; i++) {
        m = 1 << 31;
        {
            xRKStAa7pr = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (xRKStAa7pr < 5) {
                if (x[i][xRKStAa7pr] > m) {
                    m = x[i][xRKStAa7pr];
                    r = i;
                    c = xRKStAa7pr;
                }
                xRKStAa7pr = xRKStAa7pr + 1;
            };
        }
        if (m <= x[0][c] && m <= x[1][c] && m <= x[2][c] && m <= x[3][c] && m <= x[4][c]) {
            cout << r + 1 << " " << c + 1 << " " << m << endl;
            return 0;
        };
    }
    cout << "not found\n";
    return 0;
}

