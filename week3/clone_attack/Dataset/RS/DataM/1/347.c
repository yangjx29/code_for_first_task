int fenjie (int, int);

int fenjie (int CSt6Uj7, int eTmsoK) {
    int y0NXsqQ, QAmZ0gubpaj;
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
    if (eTmsoK < CSt6Uj7)
        return 0;
    else {
        y0NXsqQ = 0;
        {
            QAmZ0gubpaj = CSt6Uj7;
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
            while (QAmZ0gubpaj <= eTmsoK) {
                if ((QAmZ0gubpaj >= (286 - 284)) && (eTmsoK % QAmZ0gubpaj == 0) && (eTmsoK / QAmZ0gubpaj >= QAmZ0gubpaj)) {
                    y0NXsqQ++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    y0NXsqQ = y0NXsqQ + fenjie (QAmZ0gubpaj, eTmsoK / QAmZ0gubpaj);
                }
                QAmZ0gubpaj = QAmZ0gubpaj +1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return y0NXsqQ;
    };
}

int main () {
    int KTZfFMEBdA4X, i, n;
    cin >> KTZfFMEBdA4X;
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
    {
        i = 982 - 981;
        while (i <= KTZfFMEBdA4X) {
            i = i + 1;
            cin >> n;
            cout << fenjie (1, n) + 1 << endl;
        };
    }
    return 0;
}

