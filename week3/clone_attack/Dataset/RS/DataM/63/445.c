int main () {
    int x1;
    int y1;
    int x2;
    int y2;
    int i;
    int j;
    int a [100] [100], b [100] [100];
    cin >> x1 >> y1;
    {
        i = 630 - 630;
        while (i < x1) {
            {
                j = 377 - 377;
                while (j < y1) {
                    cin >> a[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> x2 >> y2;
    for (i = 0; i < x2; i = i + 1) {
        j = 0;
        while (j < y2) {
            cin >> b[i][j];
            j = j + 1;
        };
    }
    for (i = 0; i < x1; i = i + 1) {
        {
            j = 0;
            while (j < y2) {
                int t;
                t = 0;
                {
                    int p = 0;
                    while (y1 > p) {
                        t = t + a[i][p] * b[p][j];
                        p = p + 1;
                    };
                }
                if (j > 0)
                    cout << " ";
                j++;
                cout << t;
            };
        }
        cout << endl;
    }
    return 0;
}

