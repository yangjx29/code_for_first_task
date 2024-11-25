int main () {
    int TpfUv7ES, k, E3zlxftow [N], eHthCnA [N], qgR7TZ9 [100] [N] [N], HSJUbCIGz5M7, QCkWFZIS, Wn4FikZ5jO [N];
    cin >> k;
    {
        TpfUv7ES = 50 - 50;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (TpfUv7ES < k) {
            Wn4FikZ5jO[TpfUv7ES] = (739 - 739);
            cin >> E3zlxftow[TpfUv7ES];
            cin >> eHthCnA[TpfUv7ES];
            {
                HSJUbCIGz5M7 = 0;
                while (HSJUbCIGz5M7 < E3zlxftow[TpfUv7ES]) {
                    {
                        QCkWFZIS = 0;
                        while (QCkWFZIS < eHthCnA[TpfUv7ES]) {
                            cin >> qgR7TZ9[TpfUv7ES][HSJUbCIGz5M7][QCkWFZIS];
                            QCkWFZIS = QCkWFZIS +1;
                        };
                    }
                    HSJUbCIGz5M7 = HSJUbCIGz5M7 +1;
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
            {
                HSJUbCIGz5M7 = 0;
                while (HSJUbCIGz5M7 < eHthCnA[TpfUv7ES]) {
                    Wn4FikZ5jO[TpfUv7ES] = Wn4FikZ5jO[TpfUv7ES] + qgR7TZ9[TpfUv7ES][0][HSJUbCIGz5M7] + qgR7TZ9[TpfUv7ES][E3zlxftow[TpfUv7ES] - 1][HSJUbCIGz5M7];
                    HSJUbCIGz5M7 = HSJUbCIGz5M7 +1;
                };
            }
            for (HSJUbCIGz5M7 = 1; HSJUbCIGz5M7 < E3zlxftow[TpfUv7ES] - 1; HSJUbCIGz5M7 = HSJUbCIGz5M7 +1)
                Wn4FikZ5jO[TpfUv7ES] = Wn4FikZ5jO[TpfUv7ES] + qgR7TZ9[TpfUv7ES][HSJUbCIGz5M7][0] + qgR7TZ9[TpfUv7ES][HSJUbCIGz5M7][eHthCnA[TpfUv7ES] - 1];
            cout << Wn4FikZ5jO[TpfUv7ES] << endl;
            TpfUv7ES = TpfUv7ES +1;
        };
    }
    return 0;
}

