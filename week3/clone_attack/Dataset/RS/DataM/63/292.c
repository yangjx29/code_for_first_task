int main () {
    int KmZGqes4UTO9;
    int x2;
    int y1;
    int y2;
    int HKb3tNc7fB [(625 - 525)] [(824 - 724)];
    int b [(858 - 758)] [100];
    int c [100] [100];
    cin >> KmZGqes4UTO9 >> y1;
    {
        int i = (851 - 851);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= KmZGqes4UTO9 -(378 - 377)) {
            for (int j = (55 - 55);
            j <= y1 - (766 - 765); j++)
                cin >> HKb3tNc7fB[i][j];
            i++;
        };
    }
    cin >> x2 >> y2;
    for (int i = (888 - 888);
    i <= x2 - (946 - 945); i++) {
        int j = 0;
        while (j <= y2 - (503 - 502)) {
            cin >> b[i][j];
            j++;
        };
    }
    memset (c, 0, sizeof (c));
    for (int i = 0;
    i <= KmZGqes4UTO9 -1; i++) {
        int j = 0;
        while (j <= y2 - 1) {
            for (int k = 0;
            k <= x2 - 1; k++)
                c[i][j] += HKb3tNc7fB[i][k] * b[k][j];
            if (j == y2 - 1) {
                if (i != KmZGqes4UTO9 -1)
                    cout << c[i][j] << endl;
                else
                    cout << c[i][j];
            }
            else
                cout << c[i][j] << " ";
            j++;
        };
    }
    return 0;
}

