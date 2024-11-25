int main () {
    int YufTHyzdjJqo, B4GN1W9RQL5M, EXz1E8pnPeBo, tRyQno, m37VYsT, edNXoFr4I [NUM] [NUM];
    for (tRyQno = 1; NUM > tRyQno; tRyQno = tRyQno + 1)
        edNXoFr4I[(416 - 416)][tRyQno] = 1, edNXoFr4I[tRyQno][0] = 0;
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
    for (tRyQno = 1; tRyQno < NUM; ++tRyQno)
        for (m37VYsT = 1; NUM > m37VYsT; ++m37VYsT)
            if (tRyQno < m37VYsT)
                edNXoFr4I[tRyQno][m37VYsT] = edNXoFr4I[tRyQno][m37VYsT - 1];
            else
                edNXoFr4I[tRyQno][m37VYsT] = edNXoFr4I[tRyQno - m37VYsT][m37VYsT] + edNXoFr4I[tRyQno][m37VYsT - 1];
    cin >> YufTHyzdjJqo;
    for (; YufTHyzdjJqo--;) {
        cin >> B4GN1W9RQL5M >> EXz1E8pnPeBo;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << edNXoFr4I[B4GN1W9RQL5M][EXz1E8pnPeBo] << endl;
    };
}

