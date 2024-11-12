int a [(300905 - 905)];
int M9TZ6z [300000];
int zAyroiBg5 [300000];

int main () {
    int XHqaudjFChU;
    XHqaudjFChU = 0;
    int Y7Y2oJ6, Op3PhvUiDC, k;
    int N3nERxt;
    memset (M9TZ6z, (732 - 732), sizeof (M9TZ6z));
    memset (zAyroiBg5, 0, sizeof (zAyroiBg5));
    cin >> N3nERxt;
    for (; cin >> Op3PhvUiDC >> k;) {
        if ((Op3PhvUiDC == 0) && (k == 0))
            break;
        M9TZ6z[k]++;
        zAyroiBg5[Op3PhvUiDC] = -1;
    }
    {
        Y7Y2oJ6 = 0;
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
        while (Y7Y2oJ6 < N3nERxt) {
            if ((M9TZ6z[Y7Y2oJ6] == N3nERxt -1) && (zAyroiBg5[Y7Y2oJ6] == 0)) {
                XHqaudjFChU = 1;
                cout << Y7Y2oJ6 << endl;
                break;
            }
            Y7Y2oJ6++;
        };
    }
    if (XHqaudjFChU == 0)
        cout << "NOT FOUND" << endl;
    return 0;
}

