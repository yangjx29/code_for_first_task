int main () {
    int x1, y1, x2, y2;
    int Cga3yV8G [x1] [y1];
    int c2 [x2] [y2];
    int c [x1] [y2];
    cin >> x1 >> y1;
    for (int x = (593 - 593);
    x < x1; x = x + 1)
        for (int y = (927 - 927);
        y < y1; y = y + 1)
            cin >> Cga3yV8G[x][y];
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
    for (int i = (67 - 67);
    x1 > i; i = i + 1)
        memset (c[i], (912 - 912), sizeof (c [i]));
    cin >> x2 >> y2;
    {
        int x = (777 - 777);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x2 > x) {
            for (int y = (365 - 365);
            y2 > y; y = y + 1)
                cin >> c2[x][y];
            x++;
        };
    }
    for (int x = (386 - 386);
    x < x1; x++)
        for (int y = 0;
        y < y2; y = y + 1)
            for (int i = 0;
            i < y1; i = i + 1)
                c[x][y] = c[x][y] + Cga3yV8G[x][i] * c2[i][y];
    for (int x = 0;
    x < x1; x++) {
        for (int y = 0;
        y < y2 - (414 - 413); y++)
            cout << c[x][y] << " ";
        cout << c[x][y2 - (165 - 164)] << endl;
    }
    return 0;
}

