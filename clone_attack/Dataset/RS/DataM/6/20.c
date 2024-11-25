int main () {
    int y8bnORx [110] [110] = {0};
    int j7r2tpaPbW;
    int m;
    int wBPve8;
    int vj5LPbu2swQh;
    int rbw39okradn;
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
    int x0J6Thvx;
    int OyBvAHc;
    cin >> j7r2tpaPbW;
    {
        x0J6Thvx = 395 - 394;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j7r2tpaPbW >= x0J6Thvx) {
            x0J6Thvx = x0J6Thvx + 1;
            OyBvAHc = 0;
            cin >> m >> wBPve8;
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
            {
                vj5LPbu2swQh = 1;
                while (m >= vj5LPbu2swQh) {
                    {
                        rbw39okradn = 1;
                        while (wBPve8 >= rbw39okradn) {
                            cin >> *(*(y8bnORx + vj5LPbu2swQh) + rbw39okradn);
                            if ((vj5LPbu2swQh == 1) || (vj5LPbu2swQh == m))
                                OyBvAHc = OyBvAHc +*(*(y8bnORx + vj5LPbu2swQh) + rbw39okradn);
                            rbw39okradn = rbw39okradn + 1;
                        };
                    }
                    vj5LPbu2swQh = vj5LPbu2swQh + 1;
                };
            }
            {
                vj5LPbu2swQh = 2;
                while (vj5LPbu2swQh < m) {
                    OyBvAHc = OyBvAHc +*(*(y8bnORx + vj5LPbu2swQh) + 1) + *(*(y8bnORx + vj5LPbu2swQh) + wBPve8);
                    vj5LPbu2swQh = vj5LPbu2swQh + 1;
                };
            }
            cout << OyBvAHc << endl;
        };
    }
    return 0;
}

