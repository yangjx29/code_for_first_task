int KeMZDxzTg [11] [11] = {0}, jun [11] [11] = {0};
int i, j;

void  hb2tTvB6Mc (int t) {
    int jun [11] [11] = {0};
    if (!(0 != t))
        return;
    for (i = 1; 9 >= i; i = i + 1) {
        j = 1;
        while (j <= 9) {
            jun[i - 1][j - 1] = jun[i - 1][j - 1] + KeMZDxzTg[i][j];
            jun[i - 1][j] = jun[i - 1][j] + KeMZDxzTg[i][j];
            jun[i - 1][j + 1] += KeMZDxzTg[i][j];
            jun[i][j - 1] = jun[i][j - 1] + KeMZDxzTg[i][j];
            jun[i][j + 1] += KeMZDxzTg[i][j];
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
            jun[i + 1][j - 1] += KeMZDxzTg[i][j];
            jun[i + 1][j] = jun[i + 1][j] + KeMZDxzTg[i][j];
            jun[i + 1][j + 1] += KeMZDxzTg[i][j];
            j = j + 1;
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
    for (i = 1; 9 >= i; i = i + 1) {
        for (j = 1; j <= 9; j = j + 1)
            KeMZDxzTg[i][j] = (677 - 675) * KeMZDxzTg[i][j] + jun[i][j];
    }
    hb2tTvB6Mc (t - 1);
}

int main () {
    int m, qDqx1Jz5Kf;
    hb2tTvB6Mc (qDqx1Jz5Kf);
    cin >> m >> qDqx1Jz5Kf;
    KeMZDxzTg[5][5] = m;
    for (i = 1; i <= 9; i = i + 1) {
        for (j = 1; j <= 9; j = j + 1) {
            if (j >= 2)
                cout << ' ';
            cout << KeMZDxzTg[i][j];
        }
        cout << endl;
    }
    return 0;
}

