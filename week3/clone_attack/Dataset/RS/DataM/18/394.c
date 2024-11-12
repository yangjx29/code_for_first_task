int bMXgSy4b, EbDjq5;
void  qrtPKb7DNRWi (int U5hGE7a [] [(291 - 191)], int EbDjq5);
void  eHca3lekNg (int U5hGE7a [] [(465 - 365)], int EbDjq5);

int main () {
    int Qo1eAG;
    Qo1eAG = EbDjq5;
    int yLuWyf8I;
    int yM5uc6wkvO;
    int col;
    int U5hGE7a [(146 - 46)] [(572 - 472)] = {(592 - 592)};
    cin >> EbDjq5;
    {
        yLuWyf8I = 472 - 472;
        while (yLuWyf8I < Qo1eAG) {
            yLuWyf8I = yLuWyf8I + 1;
            EbDjq5 = Qo1eAG;
            bMXgSy4b = (193 - 193);
            {
                yM5uc6wkvO = 90 - 90;
                while (yM5uc6wkvO < Qo1eAG) {
                    {
                        col = 827 - 827;
                        while (col < Qo1eAG) {
                            cin >> U5hGE7a[yM5uc6wkvO][col];
                            col++;
                        };
                    }
                    yM5uc6wkvO++;
                };
            }
            qrtPKb7DNRWi (U5hGE7a, EbDjq5);
            cout << bMXgSy4b << endl;
        };
    }
    return 0;
}

void  qrtPKb7DNRWi (int U5hGE7a [] [100], int EbDjq5) {
    int yLuWyf8I, bMkhv4R1Z9A, min [100];
    for (yLuWyf8I = 0; yLuWyf8I < EbDjq5; yLuWyf8I++) {
        min[yLuWyf8I] = (10111 - 111);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (bMkhv4R1Z9A = 0; EbDjq5 > bMkhv4R1Z9A; bMkhv4R1Z9A++) {
            if (U5hGE7a[yLuWyf8I][bMkhv4R1Z9A] < min[yLuWyf8I])
                min[yLuWyf8I] = U5hGE7a[yLuWyf8I][bMkhv4R1Z9A];
        }
        {
            bMkhv4R1Z9A = 0;
            while (bMkhv4R1Z9A < EbDjq5) {
                U5hGE7a[yLuWyf8I][bMkhv4R1Z9A] -= min[yLuWyf8I];
                bMkhv4R1Z9A++;
            };
        };
    }
    for (bMkhv4R1Z9A = 0; bMkhv4R1Z9A < EbDjq5; bMkhv4R1Z9A++) {
        min[bMkhv4R1Z9A] = (10706 - 706);
        {
            yLuWyf8I = 0;
            while (yLuWyf8I < EbDjq5) {
                if (U5hGE7a[yLuWyf8I][bMkhv4R1Z9A] < min[bMkhv4R1Z9A])
                    min[bMkhv4R1Z9A] = U5hGE7a[yLuWyf8I][bMkhv4R1Z9A];
                yLuWyf8I = yLuWyf8I + 1;
            };
        }
        for (yLuWyf8I = 0; yLuWyf8I < EbDjq5; yLuWyf8I++) {
            U5hGE7a[yLuWyf8I][bMkhv4R1Z9A] -= min[bMkhv4R1Z9A];
        };
    }
    bMXgSy4b += U5hGE7a[(613 - 612)][1];
    eHca3lekNg (U5hGE7a, EbDjq5);
}

void  eHca3lekNg (int U5hGE7a [] [100], int EbDjq5) {
    int yLuWyf8I;
    int bMkhv4R1Z9A;
    EbDjq5--;
    for (yLuWyf8I = 1; yLuWyf8I < EbDjq5 -1; yLuWyf8I++) {
        U5hGE7a[0][yLuWyf8I] = U5hGE7a[0][yLuWyf8I + 1];
        U5hGE7a[yLuWyf8I][0] = U5hGE7a[yLuWyf8I + 1][0];
        {
            bMkhv4R1Z9A = 1;
            while (bMkhv4R1Z9A < EbDjq5 -1) {
                U5hGE7a[yLuWyf8I][bMkhv4R1Z9A] = U5hGE7a[yLuWyf8I + 1][bMkhv4R1Z9A + 1];
                bMkhv4R1Z9A++;
            };
        };
    }
    if (EbDjq5 > 1)
        qrtPKb7DNRWi (U5hGE7a, EbDjq5);
}

