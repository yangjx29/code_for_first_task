int main () {
    int m = 0, n, byOrlaSGh9JN = 0;
    cin >> n;
    for (int j = 1;
    n >= j; j++)
        m = m + j * j;
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
    for (int i = 1;
    n >= i; i = i + 1) {
        if (i % 7 == 0)
            byOrlaSGh9JN = byOrlaSGh9JN + i * i;
        else if (i % 10 == 7)
            byOrlaSGh9JN = byOrlaSGh9JN + i * i;
        else if (i / 10 == 7)
            byOrlaSGh9JN = byOrlaSGh9JN + i * i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    cout << m - byOrlaSGh9JN << endl;
    return 0;
}

