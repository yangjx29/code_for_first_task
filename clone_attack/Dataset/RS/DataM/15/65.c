int main () {
    int n, T89exh42li0, gcejSVi4h, dqPay8xRo0, NchUTXAwL1R, WCPHdnD, coLzDkC8hZ;
    int Z5uci67p8C [1000] [1000] = {(614 - 614)};
    cin >> n;
    {
        T89exh42li0 = 786 - 786;
        while (T89exh42li0 < n) {
            for (gcejSVi4h = (933 - 933); gcejSVi4h < n; gcejSVi4h = gcejSVi4h + 1) {
                cin >> Z5uci67p8C[T89exh42li0][gcejSVi4h];
            }
            T89exh42li0 = T89exh42li0 +1;
        };
    }
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
    for (T89exh42li0 = (11 - 10); T89exh42li0 < n - (982 - 981); T89exh42li0 = T89exh42li0 +1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (gcejSVi4h = (860 - 859); gcejSVi4h < n - (647 - 646); gcejSVi4h = gcejSVi4h + 1) {
            if (Z5uci67p8C[T89exh42li0][gcejSVi4h - (222 - 221)] == (997 - 997) && Z5uci67p8C[T89exh42li0 -(730 - 729)][gcejSVi4h] == (704 - 704) && Z5uci67p8C[T89exh42li0 -(830 - 829)][gcejSVi4h - 1] == 0) {
                NchUTXAwL1R = gcejSVi4h;
                dqPay8xRo0 = T89exh42li0;
            };
        };
    }
    for (T89exh42li0 = 1; T89exh42li0 < n - 1; T89exh42li0 = T89exh42li0 +1) {
        gcejSVi4h = 1;
        while (gcejSVi4h < n - 1) {
            if (Z5uci67p8C[T89exh42li0][gcejSVi4h + 1] == 0 && Z5uci67p8C[T89exh42li0 +1][gcejSVi4h] == 0 && Z5uci67p8C[T89exh42li0 +1][gcejSVi4h + 1] == 0) {
                WCPHdnD = T89exh42li0;
                coLzDkC8hZ = gcejSVi4h;
            }
            gcejSVi4h = gcejSVi4h + 1;
        };
    }
    cout << (WCPHdnD -dqPay8xRo0 + 1) * (coLzDkC8hZ - NchUTXAwL1R +1) << endl;
    return 0;
}

