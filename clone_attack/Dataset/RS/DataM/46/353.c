int main () {
    int cJGclua;
    int igUucyq;
    int TECvzKw;
    char c;
    int row1;
    int row2;
    int col1;
    int col2;
    int a [(947 - 846)] [(338 - 237)];
    scanf ("%d %d", &row2, &col2);
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
    {
        igUucyq = 959 - 959;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (row2 > igUucyq) {
            {
                TECvzKw = 326 - 326;
                while (TECvzKw < col2) {
                    scanf ("%d", &(a[igUucyq][TECvzKw]));
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    TECvzKw++;
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
            igUucyq++;
        };
    }
    igUucyq = (563 - 563);
    TECvzKw = -(511 - 510);
    c = 'r';
    cJGclua = row2 * col2;
    row1 = (226 - 226);
    col1 = (85 - 85);
    row2 = row2 - (795 - 794);
    col2 = col2 - (995 - 994);
    while (cJGclua) {
        switch (c) {
        case 'l' :
            TECvzKw--;
            if (!(col1 != TECvzKw)) {
                c = 'u';
                row2--;
            }
            break;
        case 'r' :
            TECvzKw++;
            if (TECvzKw == col2) {
                row1++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                c = 'd';
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            break;
        case 'u' :
            igUucyq--;
            if (igUucyq == row1) {
                c = 'r';
                col1++;
            }
            break;
        case 'd' :
            igUucyq++;
            if (igUucyq == row2) {
                c = 'l';
                col2--;
            };
        }
        printf ("%d\n", a[igUucyq][TECvzKw]);
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
        cJGclua--;
    }
    return 0;
}

