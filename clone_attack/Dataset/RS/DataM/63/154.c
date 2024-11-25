int main () {
    int i, j, k, x1, y1, x2, y2, f5e8wQk2qyG = 0;
    int IhCpVWtjcgs [(175 - 74)] [101], b [101] [101], c [101] [101];
    cin >> x1 >> y1;
    {
        i = 501 - 500;
        while (i <= x1) {
            for (j = 1; j <= y1; j = j + 1)
                cin >> IhCpVWtjcgs[i][j];
            i = i + 1;
        };
    }
    cin >> x2 >> y2;
    for (i = 1; x2 >= i; i = i + 1)
        for (j = 1; j <= y2; j = j + 1)
            cin >> b[i][j];
    {
        i = 1;
        while (i <= x1) {
            {
                j = 1;
                while (j <= y2) {
                    {
                        k = 1;
                        while (k <= x2) {
                            f5e8wQk2qyG = f5e8wQk2qyG + IhCpVWtjcgs[i][k] * b[k][j];
                            k = k + 1;
                        };
                    }
                    c[i][j] = f5e8wQk2qyG;
                    j = j + 1;
                    f5e8wQk2qyG = 0;
                };
            }
            i = i + 1;
        };
    }
    for (i = 1; i <= x1; i = i + 1) {
        j = 1;
        while (j <= y2) {
            if (j != y2)
                cout << c[i][j] << " ";
            if (j == y2)
                cout << c[i][j] << endl;
            j = j + 1;
        };
    }
    return 0;
}

