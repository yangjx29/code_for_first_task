int main () {
    int n;
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
    n = (551 - 551);
    cin >> n;
    for (int k = 0;
    k < n; k++) {
        int m0xchJbyZi [100] = {0};
        int m;
        int cObozw3P;
        int temp;
        m = 0;
        cObozw3P = 0;
        temp = 0;
        cin >> m;
        for (int i = 1;
        i <= m; i++)
            cin >> m0xchJbyZi[i];
        temp = m0xchJbyZi[m] + 3 * m;
        if (temp <= 60) {
            cObozw3P = 60 - 3 * m;
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
            cout << cObozw3P << endl;
        }
        else {
            if (temp > 60 && temp <= 63)
                cout << m0xchJbyZi[m] << endl;
            else
                for (int i = 1;
                i < m; i++) {
                    temp = m0xchJbyZi[m - i] + 3 * (m - i);
                    if (temp <= 60) {
                        cObozw3P = 60 - 3 * (m - i);
                        cout << cObozw3P << endl;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        break;
                    }
                    else if (temp > 60 && temp <= 63) {
                        cout << m0xchJbyZi[m - i] << endl;
                        break;
                    };
                };
        };
    };
}

