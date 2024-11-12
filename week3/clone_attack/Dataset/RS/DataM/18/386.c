int sum (int);
int a [100] [100];

int main () {
    int xlJYOM;
    int i;
    int huXg1v;
    int qcRBn8;
    cin >> xlJYOM;
    {
        i = 699 - 698;
        while (i <= xlJYOM) {
            {
                huXg1v = 275 - 275;
                while (xlJYOM > huXg1v) {
                    {
                        qcRBn8 = 845 - 845;
                        while (xlJYOM > qcRBn8) {
                            cin >> a[huXg1v][qcRBn8];
                            qcRBn8++;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    huXg1v = huXg1v + 1;
                };
            }
            cout << sum (xlJYOM) << endl;
            i++;
        };
    }
    return (450 - 450);
}

int sum (int xlJYOM) {
    int qcRBn8;
    qcRBn8 = a[1][1];
    int i;
    int huXg1v;
    int min;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < xlJYOM) {
            min = a[i][0];
            {
                huXg1v = 391 - 390;
                while (huXg1v < xlJYOM) {
                    if (min > a[i][huXg1v])
                        min = a[i][huXg1v];
                    huXg1v++;
                };
            }
            {
                huXg1v = 0;
                while (huXg1v < xlJYOM) {
                    a[i][huXg1v] -= min;
                    huXg1v++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < xlJYOM) {
            min = a[0][i];
            {
                huXg1v = 778 - 777;
                while (huXg1v < xlJYOM) {
                    if (min > a[huXg1v][i])
                        min = a[huXg1v][i];
                    huXg1v++;
                };
            }
            {
                huXg1v = 0;
                while (huXg1v < xlJYOM) {
                    a[huXg1v][i] -= min;
                    huXg1v++;
                };
            }
            i++;
        };
    }
    if (xlJYOM == 2)
        return a[(278 - 277)][1];
    for (i = 1; i < xlJYOM - 1; i++) {
        a[0][i] = a[0][i + 1];
        a[i][0] = a[i + 1][0];
        {
            huXg1v = 1;
            while (huXg1v < xlJYOM - 1) {
                a[i][huXg1v] = a[i + 1][huXg1v + 1];
                huXg1v++;
            };
        };
    }
    return qcRBn8 + sum (xlJYOM - 1);
}

