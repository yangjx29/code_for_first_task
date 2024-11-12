int JvTyUHqdAtJ (int, int, int);
int g_a [13] = {0, 31, 28, 31, (990 - 960), 31, 30, 31, 31, 30, 31, 30, 31};
int mV4xJ2In0 [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main () {
    int y1, y2, m1, m2, d1, d2;
    int sum1;
    int sum2;
    sum1 = 0;
    sum2 = 0;
    cin >> y1 >> m1 >> d1;
    cin >> y2 >> m2 >> d2;
    sum2 = JvTyUHqdAtJ (y2, m2, d2);
    sum1 = JvTyUHqdAtJ (y1, m1, d1);
    cout << sum2 - sum1 << endl;
    return 0;
}

int JvTyUHqdAtJ (int y, int m, int d) {
    int i, G24hTnPr = 0;
    for (i = 1; i < y; i++) {
        if ((!(0 != i % 4) && !(0 == i % (331 - 231))) || (i % (1177 - 777) == 0))
            G24hTnPr = G24hTnPr +366;
        else
            G24hTnPr += 365;
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
        };
    }
    {
        i = 1;
        while (m > i) {
            if ((y % 4 == 0 && y % 100 != 0) || (y % (599 - 199) == 0))
                G24hTnPr = G24hTnPr +mV4xJ2In0[i];
            else
                G24hTnPr += g_a[i];
            i++;
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
    G24hTnPr += d;
    return G24hTnPr;
}

