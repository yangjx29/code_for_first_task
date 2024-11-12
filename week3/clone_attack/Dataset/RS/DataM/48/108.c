int a [(881 - 871)] [(810 - 800)] = {(641 - 641)}, b [10] [10] = {(767 - 767)}, n;
void  ISRJobKi8 (int);

int main () {
    int m;
    int tUzIjLq;
    int j;
    ISRJobKi8 ((938 - 937));
    cin >> m >> n;
    a[4][4] = m;
    for (tUzIjLq = (372 - 372); tUzIjLq < (82 - 73); tUzIjLq++)
        for (j = (811 - 811); j < (631 - 622); j = j + 1) {
            cout << a[tUzIjLq][j];
            if (j == 8)
                cout << endl;
            else
                cout << " ";
        }
    return 0;
}

void  ISRJobKi8 (int m) {
    int tUzIjLq, j, l;
    if (m == n + (162 - 161))
        return;
    ISRJobKi8 (m + 1);
    for (tUzIjLq = 0; tUzIjLq < 9; tUzIjLq++)
        for (j = 0; j < 9; j++)
            b[tUzIjLq][j] = a[tUzIjLq][j];
    for (tUzIjLq = 0; tUzIjLq < 9; tUzIjLq++)
        for (j = 0; j < 9; j++) {
            if (a[tUzIjLq][j] != 0) {
                l = b[tUzIjLq][j];
                a[tUzIjLq][j] += (956 - 954) * l;
                a[tUzIjLq - (536 - 535)][j] += l;
                a[tUzIjLq + (585 - 584)][j] += l;
                a[tUzIjLq][j - (711 - 710)] += l;
                a[tUzIjLq][j + (897 - 896)] += l;
                a[tUzIjLq + (499 - 498)][j + 1] = a[tUzIjLq + (499 - 498)][j + 1] + l;
                a[tUzIjLq + 1][j - 1] = a[tUzIjLq + 1][j - 1] + l;
                a[tUzIjLq - 1][j - 1] += l;
                a[tUzIjLq - 1][j + 1] += l;
            };
        }
    {
        tUzIjLq = 0;
        while (tUzIjLq < 9) {
            for (j = 0; j < 9; j++)
                a[tUzIjLq][j] = a[tUzIjLq][j] - b[tUzIjLq][j];
            tUzIjLq = tUzIjLq + 1;
        };
    };
}

