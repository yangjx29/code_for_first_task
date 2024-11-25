int main () {
    int MCMfeaho [(1091 - 991)] [(279 - 179)];
    int b [100] [100];
    int c [100] [100] = {(682 - 682)};
    int x1;
    int y1;
    int cOERKw4;
    int y2;
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
    cin >> x1 >> y1;
    {
        int i = (767 - 767);
        while (i <= x1 - (942 - 941)) {
            {
                int j = (946 - 946);
                while (j <= y1 - (327 - 326)) {
                    cin >> MCMfeaho[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> cOERKw4 >> y2;
    {
        int i = 0;
        while (i <= cOERKw4 - (133 - 132)) {
            {
                int j = 0;
                while (j <= y2 - (187 - 186)) {
                    cin >> b[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (i <= x1 - 1) {
            {
                int j = 0;
                while (j <= y2 - 1) {
                    {
                        int k = 0;
                        while (k <= y1 - 1) {
                            c[i][j] += MCMfeaho[i][k] * b[k][j];
                            k = k + 1;
                        };
                    }
                    cout << c[i][j];
                    if (j < y2 - 1)
                        cout << " ";
                    j = j + 1;
                };
            }
            if (i < x1 - 1)
                cout << endl;
            i = i + 1;
        };
    }
    return 0;
}

