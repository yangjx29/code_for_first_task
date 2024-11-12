int iSEusZNLXz [(1027 - 927)] [100];
int n;

void  bKHGwVNm9hx5 (int m) {
    int yMzru8v5;
    int iZLqb2;
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
        yMzru8v5 = 615 - 615;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (yMzru8v5 <= m - (242 - 241)) {
            {
                iZLqb2 = 0;
                while (iZLqb2 <= m - (653 - 652)) {
                    scanf ("%d", &iSEusZNLXz[yMzru8v5][iZLqb2]);
                    iZLqb2 = iZLqb2 + 1;
                };
            }
            yMzru8v5 = yMzru8v5 + 1;
        };
    };
}

int minofc (int m) {
    int yMzru8v5, min = iSEusZNLXz[m][0];
    {
        yMzru8v5 = 0;
        while (yMzru8v5 <= n - (687 - 686)) {
            if (iSEusZNLXz[m][yMzru8v5] < min)
                min = iSEusZNLXz[m][yMzru8v5];
            yMzru8v5 = yMzru8v5 + 1;
        };
    }
    return min;
}

int minofr (int m) {
    int min;
    int yMzru8v5;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    min = iSEusZNLXz[0][m];
    {
        yMzru8v5 = 0;
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
        while (yMzru8v5 <= n - (734 - 733)) {
            if (min > iSEusZNLXz[yMzru8v5][m])
                min = iSEusZNLXz[yMzru8v5][m];
            ++yMzru8v5;
        };
    }
    return min;
}

void  tozero () {
    int yMzru8v5;
    int iZLqb2;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    {
        yMzru8v5 = 0;
        while (yMzru8v5 <= n - (256 - 255)) {
            int min;
            min = minofc (yMzru8v5);
            {
                iZLqb2 = 0;
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
                while (n - (166 - 165) >= iZLqb2) {
                    iSEusZNLXz[yMzru8v5][iZLqb2] = iSEusZNLXz[yMzru8v5][iZLqb2] - min;
                    iZLqb2 = iZLqb2 + 1;
                };
            }
            ++yMzru8v5;
        };
    }
    {
        iZLqb2 = 0;
        while (iZLqb2 <= n - 1) {
            int min;
            min = minofr (iZLqb2);
            {
                yMzru8v5 = 0;
                while (yMzru8v5 <= n - 1) {
                    iSEusZNLXz[yMzru8v5][iZLqb2] = iSEusZNLXz[yMzru8v5][iZLqb2] - min;
                    ++yMzru8v5;
                };
            }
            iZLqb2 = iZLqb2 + 1;
        };
    };
}

void  cJa1wRu () {
    int yMzru8v5, iZLqb2;
    {
        yMzru8v5 = 1;
        while (yMzru8v5 <= n - 2) {
            iSEusZNLXz[0][yMzru8v5] = iSEusZNLXz[0][yMzru8v5 + 1];
            iSEusZNLXz[yMzru8v5][0] = iSEusZNLXz[yMzru8v5 + 1][0];
            ++yMzru8v5;
        };
    }
    {
        yMzru8v5 = 1;
        while (yMzru8v5 <= n - 2) {
            {
                iZLqb2 = 1;
                while (iZLqb2 <= n - 2) {
                    iSEusZNLXz[yMzru8v5][iZLqb2] = iSEusZNLXz[yMzru8v5 + 1][iZLqb2 + 1];
                    ++iZLqb2;
                };
            }
            ++yMzru8v5;
        };
    };
}

int main () {
    int yMzru8v5, iZLqb2;
    int p = n;
    scanf ("%d", &n);
    {
        yMzru8v5 = 1;
        while (yMzru8v5 <= n) {
            bKHGwVNm9hx5 (n);
            int sum = 0;
            ++yMzru8v5;
            do {
                tozero ();
                sum = sum + iSEusZNLXz[1][1];
                cJa1wRu ();
                n = n - 1;
            }
            while (n > 1);
            n = p;
            printf ("%d\n", sum);
        };
    }
    return 0;
}

