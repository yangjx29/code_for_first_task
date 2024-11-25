int main () {
    int x [10];
    int qHaAWP14phx [10];
    int dChprEN [10];
    int M1iTdcWkh, iZAT4s5olj, j, k;
    float gJbZn72MzAC;
    float d [90] = {(769 - 769)};
    gJbZn72MzAC = 0;
    cin >> M1iTdcWkh;
    for (iZAT4s5olj = 0; M1iTdcWkh -1 >= iZAT4s5olj; iZAT4s5olj = iZAT4s5olj + 1)
        cin >> x[iZAT4s5olj] >> qHaAWP14phx[iZAT4s5olj] >> dChprEN[iZAT4s5olj];
    {
        iZAT4s5olj = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (M1iTdcWkh -2 >= iZAT4s5olj) {
            {
                j = iZAT4s5olj + 1;
                while (M1iTdcWkh -1 >= j) {
                    d[10 * iZAT4s5olj + j] = sqrt ((double ) ((x[iZAT4s5olj] - x[j]) * (x[iZAT4s5olj] - x[j]) + (qHaAWP14phx[iZAT4s5olj] - qHaAWP14phx[j]) * (qHaAWP14phx[iZAT4s5olj] - qHaAWP14phx[j]) + (dChprEN[iZAT4s5olj] - dChprEN[j]) * (dChprEN[iZAT4s5olj] - dChprEN[j])));
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    ++j;
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
            iZAT4s5olj = iZAT4s5olj + 1;
        };
    }
    for (j = 1; j <= (M1iTdcWkh -1) * M1iTdcWkh / 2; j = j + 1) {
        for (iZAT4s5olj = 1; iZAT4s5olj <= 89; ++iZAT4s5olj) {
            if (d[iZAT4s5olj] == 0)
                continue;
            if (d[iZAT4s5olj] > gJbZn72MzAC) {
                gJbZn72MzAC = d[iZAT4s5olj];
                k = iZAT4s5olj;
            };
        }
        cout << "(" << x[k / 10] << "," << qHaAWP14phx[k / 10] << "," << dChprEN[k / 10] << ")" << "-" << "(" << x[k % 10] << "," << qHaAWP14phx[k % 10] << "," << dChprEN[k % 10] << ")" << "=" << fixed << setprecision (2) << gJbZn72MzAC << endl;
        gJbZn72MzAC = 0;
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
        d[k] = 0;
        k = 0;
    }
    return 0;
}

