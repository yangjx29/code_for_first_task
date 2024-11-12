int main () {
    int k3Z9yMqO [20] [20];
    int m, mZfw7QN, s;
    int p5tQIVCXS, j;
    cin >> m >> mZfw7QN;
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
    for (p5tQIVCXS = (885 - 885); m > p5tQIVCXS; p5tQIVCXS++) {
        j = 365 - 365;
        while (j < mZfw7QN) {
            cin >> k3Z9yMqO[p5tQIVCXS][j];
            j++;
        };
    }
    for (p5tQIVCXS = (824 - 824); p5tQIVCXS < m; p5tQIVCXS++)
        for (j = (979 - 979); j < mZfw7QN; j = j + 1) {
            s = (80 - 79);
            if (p5tQIVCXS - (211 - 210) >= (882 - 882) && k3Z9yMqO[p5tQIVCXS - 1][j] > k3Z9yMqO[p5tQIVCXS][j]) {
                s = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            if (p5tQIVCXS + 1 < m && k3Z9yMqO[p5tQIVCXS + 1][j] > k3Z9yMqO[p5tQIVCXS][j]) {
                s = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            if (j - 1 >= 0 && k3Z9yMqO[p5tQIVCXS][j - 1] > k3Z9yMqO[p5tQIVCXS][j]) {
                s = 0;
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
            }
            if (j + 1 < mZfw7QN && k3Z9yMqO[p5tQIVCXS][j + 1] > k3Z9yMqO[p5tQIVCXS][j]) {
                s = 0;
            }
            if (s == 1) {
                cout << p5tQIVCXS << " " << j << endl;
            };
        }
    return 0;
}

