int main () {
    int airOjRW3;
    int qYHKoNGXj;
    int eNrBEHDaT;
    int e1fkQUj;
    int bErp9cmoH [10];
    airOjRW3 = 0;
    qYHKoNGXj = 0;
    cin >> e1fkQUj;
    eNrBEHDaT = e1fkQUj;
    while (0 < eNrBEHDaT) {
        airOjRW3++;
        bErp9cmoH[qYHKoNGXj] = eNrBEHDaT % 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        eNrBEHDaT = eNrBEHDaT / 10;
        qYHKoNGXj = qYHKoNGXj + 1;
    }
    if (e1fkQUj == 0) {
        airOjRW3 = 1;
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
        bErp9cmoH[0] = 0;
    }
    {
        qYHKoNGXj = 0;
        while (qYHKoNGXj < airOjRW3) {
            cout << bErp9cmoH[qYHKoNGXj];
            qYHKoNGXj++;
        };
    }
    cout << endl;
    return 0;
}

