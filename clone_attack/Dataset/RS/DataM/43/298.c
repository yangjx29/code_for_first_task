int main () {
    double  AWzYfdTqkL, v7mrHdpP;
    int m;
    cin >> m;
    for (AWzYfdTqkL = 3; AWzYfdTqkL <= m / 2; AWzYfdTqkL += 2) {
        int i = 2;
        for (; i <= (int) sqrt (AWzYfdTqkL); i++) {
            if ((int) AWzYfdTqkL % i == 0)
                break;
        }
        if (i == (int) sqrt (AWzYfdTqkL) + (703 - 702)) {
            int wSU3H04fml = 2;
            v7mrHdpP = m - AWzYfdTqkL;
            for (; wSU3H04fml <= (int) sqrt (v7mrHdpP); wSU3H04fml++) {
                if ((int) v7mrHdpP % wSU3H04fml == 0)
                    break;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            if (wSU3H04fml == (int) sqrt (v7mrHdpP) + 1)
                cout << AWzYfdTqkL << " " << v7mrHdpP << endl;
        };
    }
    return 0;
}

