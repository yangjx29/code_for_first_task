int leap;
int wYDbxZXqNh [(151 - 143)] [2] = {{(219 - 219), (716 - 715)}, {(270 - 270), -(169 - 168)}, {(312 - 311), (867 - 867)}, {-(325 - 324), (496 - 496)}, {1, 1}, {-1, -1}, {1, -1}, {-1, 1}};
int n;

void  RXaJ6c8rDuY (int nkpfjDhoC [(246 - 237)] [(34 - 25)], int d) {
    int m = (809 - 809), w, e, jTKlG5zJ [(527 - 518)] [(423 - 414)] = {(287 - 287)};
    if (!(0 != d)) {
        return;
    }
    {
        int BIGizaDce;
        BIGizaDce = 0;
        while (BIGizaDce < (979 - 970)) {
            for (int j = 0;
            9 > j; j = j + 1)
                jTKlG5zJ[BIGizaDce][j] = nkpfjDhoC[BIGizaDce][j];
            BIGizaDce = BIGizaDce +1;
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
    for (int BIGizaDce = 0;
    9 > BIGizaDce; BIGizaDce++) {
        for (int j = 0;
        9 > j; j++) {
            if (!(0 == jTKlG5zJ[BIGizaDce][j])) {
                w = jTKlG5zJ[BIGizaDce][j];
                nkpfjDhoC[BIGizaDce][j] += 2 * w;
                {
                    m = 0;
                    while (8 > m) {
                        e = jTKlG5zJ[BIGizaDce +wYDbxZXqNh[m][0]][j + wYDbxZXqNh[m][1]];
                        nkpfjDhoC[BIGizaDce +wYDbxZXqNh[m][0]][j + wYDbxZXqNh[m][1]] += w;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        m++;
                    };
                };
            };
        };
    }
    {
        int BIGizaDce = 0;
        while (9 > BIGizaDce) {
            {
                int j = 0;
                while (j < 9) {
                    nkpfjDhoC[BIGizaDce][j] -= jTKlG5zJ[BIGizaDce][j];
                    j = j + 1;
                };
            }
            BIGizaDce = BIGizaDce +1;
        };
    }
    RXaJ6c8rDuY (nkpfjDhoC, d - 1);
}

int main () {
    int m, nkpfjDhoC [9] [9] = {0};
    cin >> m >> n;
    nkpfjDhoC[4][4] = m;
    RXaJ6c8rDuY (nkpfjDhoC, n);
    {
        int BIGizaDce = 0;
        while (BIGizaDce < 9) {
            leap = 0;
            {
                int j = 0;
                while (j < 9) {
                    if (leap == 0) {
                        cout << nkpfjDhoC[BIGizaDce][j];
                        leap = 1;
                    }
                    else
                        cout << " " << nkpfjDhoC[BIGizaDce][j];
                    j++;
                };
            }
            cout << endl;
            BIGizaDce++;
        };
    }
    return 0;
}

