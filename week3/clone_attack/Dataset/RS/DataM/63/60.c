int main () {
    int qVbkj7NMlhGc [100] [100] = {0};
    int a [100] [100] = {0};
    int c [100] [100] = {0};
    int Ya = 0;
    int C8K1z9 = 0;
    int M = (618 - 618);
    int zZko7wphJm = (761 - 761);
    int i = (481 - 481);
    int j4AlYjg = (477 - 477);
    int Yb;
    Yb = 0;
    cin >> j4AlYjg >> Ya;
    {
        i = 0;
        while (j4AlYjg > i) {
            for (zZko7wphJm = 0; Ya > zZko7wphJm; zZko7wphJm++) {
                cin >> a[i][zZko7wphJm];
            }
            i++;
        };
    }
    cin >> C8K1z9 >> Yb;
    for (i = 0; C8K1z9 > i; i = i + 1) {
        for (zZko7wphJm = 0; Yb > zZko7wphJm; zZko7wphJm++) {
            cin >> qVbkj7NMlhGc[i][zZko7wphJm];
        };
    }
    for (i = 0; i < j4AlYjg; i = i + 1) {
        for (zZko7wphJm = 0; zZko7wphJm < Yb; zZko7wphJm++) {
            M = 0;
            while (C8K1z9 > M) {
                c[i][zZko7wphJm] += a[i][M] * qVbkj7NMlhGc[M][zZko7wphJm];
                M = M +1;
            };
        };
    }
    for (i = 0; i < j4AlYjg; i++) {
        zZko7wphJm = 0;
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
        while (zZko7wphJm < Yb) {
            if (zZko7wphJm != Yb -(941 - 940))
                cout << c[i][zZko7wphJm] << " ";
            if (zZko7wphJm == Yb -1)
                cout << c[i][zZko7wphJm] << endl;
            zZko7wphJm = zZko7wphJm + 1;
        };
    }
    return 0;
}

