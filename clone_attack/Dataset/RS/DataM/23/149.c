int main () {
    int sHiYwLrtmq;
    int k;
    int WnmOAx1C;
    int c0JbPGX;
    int len_total;
    sHiYwLrtmq = 0;
    k = 0;
    WnmOAx1C = 0;
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
    char LA6EN584 [100];
    char U3lvbkh741 [15] [10] = {'\0'};
    gets (LA6EN584);
    len_total = strlen (LA6EN584);
    {
        c0JbPGX = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len_total > c0JbPGX) {
            if (!(' ' == LA6EN584[c0JbPGX])) {
                U3lvbkh741[WnmOAx1C][k++] = LA6EN584[c0JbPGX];
            }
            else {
                WnmOAx1C++;
                k = 0;
            }
            c0JbPGX = c0JbPGX + 1;
        };
    }
    {
        c0JbPGX = WnmOAx1C;
        while (c0JbPGX >= 0) {
            cout << U3lvbkh741[c0JbPGX];
            if (c0JbPGX)
                cout << ' ';
            c0JbPGX--;
        };
    }
    cout << endl;
    return 0;
}

