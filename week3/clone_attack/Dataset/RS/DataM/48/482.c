int main () {
    const  int bdrw9Uqv = 9;
    int init;
    int JZHGnigxE;
    int pa5Zg3Q [(578 - 576)] [bdrw9Uqv + (392 - 390)] [bdrw9Uqv + (170 - 168)] = {(492 - 492)};
    cin >> init >> JZHGnigxE;
    pa5Zg3Q[(877 - 877)][5][5] = init;
    {
        int WZ8cyH0trfB = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (WZ8cyH0trfB < JZHGnigxE) {
            for (int N8K6pMqiaY = 0;
            N8K6pMqiaY <= bdrw9Uqv + (727 - 726); N8K6pMqiaY = N8K6pMqiaY +1)
                for (int j = 0;
                bdrw9Uqv + (132 - 131) >= j; j = j + 1)
                    pa5Zg3Q[(381 - 380) - WZ8cyH0trfB % (620 - 618)][N8K6pMqiaY][j] = 0;
            for (int N8K6pMqiaY = 1;
            N8K6pMqiaY <= bdrw9Uqv; N8K6pMqiaY = N8K6pMqiaY +1) {
                int j = 1;
                while (j <= bdrw9Uqv) {
                    if (pa5Zg3Q[WZ8cyH0trfB % 2][N8K6pMqiaY][j]) {
                        pa5Zg3Q[1 - WZ8cyH0trfB % 2][N8K6pMqiaY +1][j + 1] += pa5Zg3Q[WZ8cyH0trfB % 2][N8K6pMqiaY][j];
                        pa5Zg3Q[1 - WZ8cyH0trfB % 2][N8K6pMqiaY +1][j] += pa5Zg3Q[WZ8cyH0trfB % 2][N8K6pMqiaY][j];
                        pa5Zg3Q[1 - WZ8cyH0trfB % 2][N8K6pMqiaY +1][j - 1] += pa5Zg3Q[WZ8cyH0trfB % 2][N8K6pMqiaY][j];
                        pa5Zg3Q[1 - WZ8cyH0trfB % 2][N8K6pMqiaY][j + 1] += pa5Zg3Q[WZ8cyH0trfB % 2][N8K6pMqiaY][j];
                        pa5Zg3Q[1 - WZ8cyH0trfB % 2][N8K6pMqiaY][j - 1] += pa5Zg3Q[WZ8cyH0trfB % 2][N8K6pMqiaY][j];
                        pa5Zg3Q[1 - WZ8cyH0trfB % 2][N8K6pMqiaY -1][j + 1] += pa5Zg3Q[WZ8cyH0trfB % 2][N8K6pMqiaY][j];
                        pa5Zg3Q[1 - WZ8cyH0trfB % 2][N8K6pMqiaY -1][j] += pa5Zg3Q[WZ8cyH0trfB % 2][N8K6pMqiaY][j];
                        pa5Zg3Q[1 - WZ8cyH0trfB % 2][N8K6pMqiaY -1][j - 1] += pa5Zg3Q[WZ8cyH0trfB % 2][N8K6pMqiaY][j];
                        pa5Zg3Q[1 - WZ8cyH0trfB % 2][N8K6pMqiaY][j] += pa5Zg3Q[WZ8cyH0trfB % 2][N8K6pMqiaY][j] * 2;
                    }
                    j = j + 1;
                };
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
            WZ8cyH0trfB = WZ8cyH0trfB +1;
        };
    }
    for (int N8K6pMqiaY = 1;
    N8K6pMqiaY <= bdrw9Uqv; N8K6pMqiaY++) {
        int j = 1;
        while (j <= bdrw9Uqv) {
            cout << pa5Zg3Q[JZHGnigxE % 2][N8K6pMqiaY][j];
            if (j == bdrw9Uqv)
                cout << endl;
            else
                cout << ' ';
            j = j + 1;
        };
    }
    return 0;
}

